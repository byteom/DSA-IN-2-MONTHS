#include <iostream>
using namespace std;

int main(){
    int arr[14]={1,2,3,4,5,5,8,1,0,7,55,87,44,81};
    int max = arr[0];
    int secmax=0;
    int idx;
    for(int i =0;i<14;i++){
      
        if(arr[i]>max){
            max=arr[i];
            idx=arr[i];
        }
    }
    for(int i =0;i<14;i++){
        if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
            
        }
    }
    cout<<secmax;
}