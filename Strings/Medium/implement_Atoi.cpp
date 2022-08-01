

// https://practice.geeksforgeeks.org/problems/implement-atoi/1?page=4&curated[]=1&sortBy=submissions

// A simple C++ program for
// implementation of atoi
#include <bits/stdc++.h>
using namespace std;
/*
int myAtoi(const char* str)
{
    int sign = 1, base = 0, i = 0;
    
    // if whitespaces then ignore.
    while (str[i] == ' ') 
    {
        i++;
    }
    
    // sign of number
    if (str[i] == '-' || str[i] == '+') 
    {
        sign = 1 - 2 * (str[i++] == '-');
    }
  
    // checking for valid input
    while (str[i] >= '0' && str[i] <= '9') 
    {
        // handling overflow test case
        if (base > INT_MAX / 10
            || (base == INT_MAX / 10 
            && str[i] - '0' > 7)) 
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        base = 10 * base + (str[i++] - '0');
    }
    return base * sign;
}


// Driver Code
int main()
{
    char str[] = "  -123";
  
    // Functional Code
    int val = myAtoi(str);
    cout <<" "<< val;
    return 0;
}
*/

 /*You are required to complete this method */
    int atoi(string str) {
        int ans=0;
        int rem=0;
        int flag=1;
        for(int i=0;i<str.size();i++){
            if((str[i]>='0' && str[i]<='9') || (str[0]=='-' && flag==1) ){
                flag=0;
                if(str[i]!='-'){
                    rem=str[i]-'0';
                    ans=(ans*10)+rem;
                }
                
            }else{
                return -1;
            }
            
        }
        if(str[0]=='-'){
            return ans*-1;
        }
        return ans;
    }
