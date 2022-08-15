#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void pair_Star(char *s,int start){
    if(s[start+1]==0){
        return ;
    }

    pair_Star(s,start+1);

    if(s[start]==s[start+1]){
        for(int i=strlen(s);i>=start+1;i--){
            s[i+1]=s[i];
        }
        s[start+1]='*';
    }


}

int main(){
    char input[]="hello";
    cout<<input<<endl;
    pair_Star(input,0);
    cout<<input<<endl;
    return 0;
}