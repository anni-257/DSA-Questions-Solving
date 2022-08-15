#include<iostream>
#include<cstring>
using namespace std;

void remove_X(char* input,int start){
    if(input[start]==0){
        return;
    }
    remove_X(input,start+1);

    if(input[start]=='x'){
        for(int i=start;i<strlen(input);i++){
            input[i]=input[i+1];
        }
    }

    return;
}

void remove(char* arr){
    if(arr[0]==0){
        return;
    }

    if(arr[0]=='x'){
        for(int i=0;arr[i]!=0;i++){
            arr[i]=arr[i+1];
        }
        remove(arr);
    }else{
        remove(arr+1);
    }
}

int main(){
    char input[]="Anxi";
    remove(input);
    cout<<input<<endl;

}