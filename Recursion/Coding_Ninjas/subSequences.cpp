#include<iostream>
#include<cmath>
using namespace std;

int subSequence(string s, string out[]){
    if(s.empty()){
        out[0]=" ";
        return 1;
    }

    int smalloutSize=subSequence(s.substr(1),out);

    for(int i=0;i<smalloutSize;i++){
        out[i+smalloutSize]=s[0]+out[i];
    }

    return smalloutSize*2;

}

int main(){
    string s;
    cin>>s;
    int n=pow(2,s.size());
    string *ptr=new string[n];
    subSequence(s,ptr);

    for(int i=0;i<n;i++){
        cout<<ptr[i]<<endl;
    }

}