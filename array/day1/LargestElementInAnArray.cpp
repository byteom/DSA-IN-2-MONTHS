#include <iostream>
using namespace std;

int main(){
    int arr[13]={1,2,3,4,5,5,8,1,0,7,55,87,44};
    int min = arr[0];
    for(int i =0;i<13;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    cout<<min;
}