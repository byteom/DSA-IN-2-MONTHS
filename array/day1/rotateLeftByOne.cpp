#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int>& arr) {
    
     // Write your code here
    int temp= arr[0];
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    leftRotateByOne(arr);

    for (int x : arr) cout << x << " ";
    return 0;
}
