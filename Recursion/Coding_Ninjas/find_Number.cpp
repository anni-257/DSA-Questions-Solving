#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int key){

    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }

    return isPresent(arr+1,size-1,key);

}

int main(){
    int arr[]={11,22,333,444,55555,6666,777};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key to be find: ";
    cin>>key;
    int ans=isPresent(arr,size,key);
    if(ans){
        cout<<key<<" is found!!"<<endl;
    }else{
        cout<<key<<" is not found!!"<<endl;
    }

    return 0;
}