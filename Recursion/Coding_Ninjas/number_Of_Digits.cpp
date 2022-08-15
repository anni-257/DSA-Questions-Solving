#include<iostream>
using namespace std;

int numberOfDigits(int n){
    if(n){
        n=n/10;
        int smallProb=numberOfDigits(n);
        int bigProblem=1+smallProb;
        return bigProblem;
    }

    return 0;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<"Number of digits in "<<n<<" is: "<<numberOfDigits(n)<<endl;

}