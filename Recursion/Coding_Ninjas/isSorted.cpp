#include<iostream>
using namespace std;

bool isSorted(int* arr,int size){
    if(size==1){
        return true;
    }

    if(arr[0]<arr[1]){
        return isSorted(arr+1,size-1);
    }

    return false;
}

int main(){
    int arr[]={1,2,3,10,5,6,7};
    cout<<"Ans: "<<::boolalpha<<isSorted(arr,7)<<endl;
    return 0;
}