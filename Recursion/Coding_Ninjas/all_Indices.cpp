#include<iostream>
#include<deque>
using namespace std;

int all_Index(int *arr, int size, int x, int *out)
{
    if(size==0){
        return 0;
    }

    int ans=all_Index(arr+1,size-1,x,out);
    for(int i=0;i<ans;i++){
        out[i]+=1;
    }

    if(arr[0]==x){
        for(int i=ans;i>0;i--){
            out[i]=out[i-1];
        }
        out[0]=0;

        return ans+1;
    }

    return ans;


}

int all_Index2(int *arr,int size,int x,int* out){
    if(size==0){
        return 0;
    }

    int ans=all_Index2(arr,size-1,x,out);
    if(arr[size-1]==x){
        out[ans]=size-1;

        return ans+1;

    }

    return ans;


}

int main(){
    int out[100]={0};
    int arr[]={5,6,5,5,6,5,3,2,3,3,4,3,6,5};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key value: ";
    cin>>key;
    //int ans=all_Index(arr,size,key,out);
    int ans=all_Index2(arr,size,key,out);
    cout<<"Number of Indeces for "<<key<<" is= "<<ans<<endl;
    cout<<"Indeces: ";
    for(int i=0;i<ans;i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;


    return 0;
}

