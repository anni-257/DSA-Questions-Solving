#include<bits/stdc++.h>
using namespace std;

// https://www.google.com/url?q=https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/&sa=D&source=editors&ust=1657645455962974&usg=AOvVaw1PF2eCbneRfhexGCUK004t

// Maximum and minimum of an array using minimum number of comparisons

class MinMax {
    int min;
    int max;

    public:

    void Min_Max(vector<int> arr);
    void display(){
        cout<<"Min: "<<min<<endl;
        cout<<"Max: "<<max<<endl;
    }

};

void MinMax::Min_Max(vector<int> arr){
  
/*
    1st approach

    int count=0;
    min=max=arr[0];
    for(int i=0;i<arr.size();i++){
        count++;
        if(min>arr[i]){
            min=arr[i];
        }
        else if(max<arr[i]){
            max=arr[i];
        }
    }

*/

    // 2nd Approach

    int i=0;
    int count=0;
    if(arr.size()%2==0){
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
        }
        else{
            max=arr[1];
            min=arr[0];
        }

        i=2;

    }

    else{
        min=max=arr[0];
        i=1;
    }

    for(;i<arr.size();i+=2){
        count++;
        if(arr[i]>arr[i+1]){
            if(max<arr[i]){
                max=arr[i];
            }
            else if(min>arr[i+1])
                min=arr[i+1];
        }
        else{
            if(max<arr[i+1]){
                max=arr[i+1];
            }
            else if(min>arr[i]){
                min=arr[i];
            }
        }
    }

    cout<<"Count: "<<count<<endl;


}

int main(){
    vector<int> vec={12,34,56,435,76,44,2,56};
    MinMax mn;
    mn.Min_Max(vec);
    mn.display();
    return 0;
}


