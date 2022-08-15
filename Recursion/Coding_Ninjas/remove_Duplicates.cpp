#include<iostream>
using namespace std;
void remove_Duplicates(char* s){
    if(s[1]==0 || s[0]==0){
        return;
    }
    remove_Duplicates(s+1);
    if(s[0]==s[1]){
        for(int i=0;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
    }
}
int main(){
    char in[]="aabccba";
    remove_Duplicates(in);
    cout<<in<<endl;


}