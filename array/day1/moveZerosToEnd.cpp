#include <bits/stdc++.h>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    // Write your code here
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr1 = {1, 0, 2, 3, 0, 4, 0, 1};
    vector<int> arr2 = {1, 2, 0, 1, 0, 4, 0};

    moveZerosToEnd(arr1);
    moveZerosToEnd(arr2);

    cout << "Array 1 after moving zeros: ";
    for (int x : arr1) cout << x << " ";
    cout << endl;

    cout << "Array 2 after moving zeros: ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    return 0;
}
