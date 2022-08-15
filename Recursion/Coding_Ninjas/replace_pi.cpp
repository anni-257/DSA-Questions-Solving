#include<iostream>
#include<vector>
#include<cstring>
#include<deque>
using namespace std;

void replace_pi(char input[], int start){
    if(input[start+1]=='\0'){
        return;
    }

    replace_pi(input,start+1);

    if(input[start]=='p' && input[start+1]=='i'){
        for(int i=strlen(input);i>=start+2;i--){
            input[i+2]=input[i];
        }

        input[start]='3';input[start+1]='.';input[start+2]='1';input[start+3]='4';
    }

    cout<<input<<endl;
}

string replace(string s){
    if(s.size()==1 || s.size()==0){
        return s;
    }

    if(s[0]=='p' && s[1]=='i'){
        string smallProb=replace(s.substr(2));

        return "3.14"+smallProb;
    }

    return s[0]+replace(s.substr(1));
}


int main(){

    char in[]="xpixpix";
    string s="xpixpix";
    replace_pi(in,0); 
    cout<<"Ans: "<<in<<endl;
    cout<<"Ans: "<<replace(s)<<endl;



    return 0;
}