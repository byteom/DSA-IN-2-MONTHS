#include <bits/stdc++.h>
#include <vector>
using namespace std;

void leftRotateByK(vector<int>& arr, int k) {
    // Write your code here
    // k kitna bhi diya ho lekin wo k=k%N se jyda nahi ho sakta N jo hai wo array ka size hai 
    k = k%arr.size();
    //Brute Force approch
vector<int>temp;

for(int i=0;i<k;i++){  // k tak ke aree store ho gye hai
    temp.push_back(arr[i]);
}

//yaha se shifting start karnin hai abb

for(int i=k;i<arr.size();i++){  // k se satrt karo , aur i-k= ye 0 index tak pucha dega back leke aa jao kyuki , 
    arr[i-k]=arr[i];
}

// yaha se jo elemment ko temp me stoe kiya tha unko fill akrna hai
int j=0;
for(int i=arr.size()-k;i<arr.size();i++){ // aur yaha pe jaha tak ke tha usko hata do kyuki , wo number aage shoft ho gye abb to
    arr[i]=temp[j];
    j++;
}
    
}

void OptimalleftRotateByK(vector<int>& arr, int k) {
    // Write your code here
    // sabse phle k tak ke arrya ko reverse karo do , phir k tak ke baad wale are ko reverse akro . phir sabko ye asth reverse karo de .

    // jaise ki 21 - first reverse , 543 - sencond reverse 
    // ab sabko reverse karo 34512 -- mil gya jo chaiye tha.

   int n = arr.size();
    k = k % n; // In case k > n

    // Step 1: Reverse first k elements
    for(int i = 0; i < k/2; i++) {
        swap(arr[i], arr[k-1-i]);
    }

    // Step 2: Reverse the remaining n-k elements
    for(int i = k; i < (n + k)/2; i++) {
        swap(arr[i], arr[n-1-(i-k)]);
    }

    // Step 3: Reverse the whole array
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-1-i]);
    }

  
    
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    leftRotateByK(arr, k);
    OptimalleftRotateByK(arr,k);

    for (int x : arr) cout << x << " ";
    return 0;
}
