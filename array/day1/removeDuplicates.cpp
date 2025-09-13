#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    // Write your code here
}

int main() {
    vector<int> arr1 = {1, 1, 2, 2, 2, 3, 3};
    vector<int> arr2 = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};

    int k1 = removeDuplicates(arr1);
    int k2 = removeDuplicates(arr2);

    cout << "Array 1 after removing duplicates: ";
    for (int i = 0; i < k1; i++) cout << arr1[i] << " ";
    cout << "\nNumber of unique elements: " << k1 << endl;

    cout << "Array 2 after removing duplicates: ";
    for (int i = 0; i < k2; i++) cout << arr2[i] << " ";
    cout << "\nNumber of unique elements: " << k2 << endl;

    return 0;
}
