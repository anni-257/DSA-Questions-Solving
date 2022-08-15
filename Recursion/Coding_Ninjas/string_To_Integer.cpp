#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int strToInt(string s){
    if(s.size()==0){
        return 0;
    }
    int ans=strToInt(s.substr(1));
    int digit=s[0]-'0';

    return (digit*ceil(pow(10,s.size()-1))+ans);

}


int main(){
    string str="123456";
    cout<<"String to Int : "<<strToInt(str)<<endl;

    return 0;
}