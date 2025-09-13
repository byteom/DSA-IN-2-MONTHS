#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>& arr) {
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}


int main() {
    vector<int> arr1 = {1, 1, 0, 1, 1, 1};
    vector<int> arr2 = {1, 0, 1, 1, 0, 1};

    cout << "Max consecutive ones in arr1: " << maxConsecutiveOnes(arr1) << endl;
    cout << "Max consecutive ones in arr2: " << maxConsecutiveOnes(arr2) << endl;

    return 0;
}
