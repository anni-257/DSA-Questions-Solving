#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }
    int smallProb=pow(x,n-1);
    int bigProble=x*smallProb;

    return bigProble;
}

int main(){
    int x,n;

    cout<<"Enter x value: ";
    cin>>x;
    cout<<"Enter power of "<<x<<" : ";
    cin>>n;

    cout<<"Ans: "<<pow(x,n)<<endl;

}