#include<iostream>
using namespace std;

int stair_Case(int n){
    if(n<0){
        return 0;
    }else if(n==0 || n==1){
        return 1;
    }else if(n==2){
        return 2;
    }

    return stair_Case(n-1)+stair_Case(n-2)+stair_Case(n-3);
}

int main(){
    int n;
    cout<<"Enter number of stair cases: ";
    cin>>n;
    cout<<"Possible ways: "<<stair_Case(n)<<endl;
    return 0;
}