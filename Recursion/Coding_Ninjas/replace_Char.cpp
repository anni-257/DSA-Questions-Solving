#include<iostream>
using namespace std;

void replace_Char(char *s,char oldC,char newC){
    if(s[0]==0){
        return;
    }

    if(s[0]==oldC){

        s[0]=newC;
        replace_Char(s+1,oldC,newC);

    }else{

        replace_Char(s+1,oldC,newC);

    }
}

int main(){
    char in[]="aaaa";
    replace_Char(in,'a','x');
    cout<<in<<endl;

    return 0;
}