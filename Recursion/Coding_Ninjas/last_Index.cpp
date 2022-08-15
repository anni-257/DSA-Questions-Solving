#include<iostream>
using namespace std;

int last_Index(int *arr, int size, int x){
    if(size==0){
        return -1;
    }
    int ans=last_Index(arr+1,size-1,x);

    if(ans!=-1){
        return ans+1;
        
    }else{
        if(arr[0]==x){
            return 0;
        }
    }

    return -1;

}

int main(){
    int arr[]={11,22,233,5,3,22,11,11,11,11,22};
    int size=sizeof(arr)/sizeof(int);int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"Last index: "<<last_Index(arr,size,key);
    return 0;
}