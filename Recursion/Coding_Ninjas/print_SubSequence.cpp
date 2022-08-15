#include<bits/stdc++.h>
using namespace std;

void print_SubSeq(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }

    print_SubSeq(input.substr(1),output);
    print_SubSeq(input.substr(1),output+input[0]);
}

int main(){
    string s="ab";
    string out=" ";
    print_SubSeq(s,out);
    return 0;
}