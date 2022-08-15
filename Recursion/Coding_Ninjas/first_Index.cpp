#include<iostream>
using namespace std;

int first_Index(int *arr, int size, int x){
    if(size==0){
        return -1;
    }

    if(arr[0]==x){
        return 0;
    }

    int ans=first_Index(arr+1,size-1,x);
    if(ans==-1){
        return -1;
    }

    return ans+1;
}

int last_Index(int *arr,int size, int x){
    if(size==0){
        return -1;
    }

    int ans=last_Index(arr+1,size-1,x);

    if(ans==-1){
        if(arr[0]==x){
            return 0;
        }else{
            return -1;
        }
    }

    return ans+1;


}

int main(){
    int a[]={5,5,6,6,5,3,6};
    int size=sizeof(a)/sizeof(int);
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"Ans: "<<first_Index(a,size,key)<<endl;
    cout<<"Ans: "<<last_Index(a,size,key)<<endl;

    return 0;
}