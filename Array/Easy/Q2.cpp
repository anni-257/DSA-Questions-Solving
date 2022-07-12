#include<bits/stdc++.h>
using namespace std;

//https://www.google.com/url?q=https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/&sa=D&source=editors&ust=1657645455963091&usg=AOvVaw0bWePumZ-njDq4Or6D-fMT

// Write a program to reverse an array or string

void swap(char *x, char* y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

// for String 
void reverse(string &str){
    int start=0;
    int end=str.length()-1;

    while(start<end){
        swap(&str[start],&str[end]);
        start++;end--;
    }
}

// for Array
void reverse(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}

int main(){
    vector<int> num{11,22,33,44,55,66,77,88,99};
    string str="Aniket";
    
    reverse(num);
    cout<<"After Reversing Elements"<<endl;
    for(auto x: num){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"String before: "<<str<<endl;
    reverse(str);
    cout<<"String After: "<<str<<endl;

    return 0;
}


