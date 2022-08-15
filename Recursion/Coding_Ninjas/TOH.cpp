#include<iostream>
using namespace std;

void TOH(int n,int s,int a,int d){
    if(n){
        TOH(n-1,s,d,a);
        cout<<s<<"->"<<d<<endl;
        TOH(n-1,a,s,d);
    }

    return;
}
int main(){

    TOH(3,1,2,3);
}