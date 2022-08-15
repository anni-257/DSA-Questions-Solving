#include<iostream>
using namespace std;

int sum_Of_Array(int *arr, int size){
    if(size==0){
        return 0;
    }
    
    int smallProblem=sum_Of_Array(arr+1,size-1);

    return smallProblem+arr[0];
}

int main(){
    int arr[]={2,3,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Sum of array is: "<<sum_Of_Array(arr,size)<<endl;
    return 0;
}