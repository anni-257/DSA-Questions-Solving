#include<iostream>
using namespace std;

int length(string s){
    if(s.size()==0){
        return 0;
    }

    int ans=length(s.substr(1));
    ans++;

    return ans;
}

int main(){
    string s="Aniket Tarale";
    cout<<"Length of given string: "<<length(s)<<endl;

}