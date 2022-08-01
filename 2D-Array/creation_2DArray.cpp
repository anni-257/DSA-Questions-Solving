#include<bits/stdc++.h>
using namespace std;

int** takeInput(int **matrix,int row,int col){
    cout<<"Enter values row-by-row"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }


}

void printMatrix(int **matrix,int row,int col ){
    cout<<"Matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<int> rowSum(int **matrix,int row,int col){
    vector<int> ans;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=matrix[i][j];
        }
        ans.push_back(sum);
    }

    return ans;
}

vector<int> colSum(int **matrix,int row,int col){
    vector<int> ans;
    for(int c=0;c<col;c++){
        int sum=0;
        for(int r=0;r<row;r++){
            sum+=matrix[r][c];
        }
        ans.push_back(sum);
    }
    return ans;
}

vector<int> maxRowSum(int **matrix,int row,int col){
    vector<int> ans;
    int maxi=INT_MIN;
    int index=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=matrix[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            index=i+1;
        }
    }
    ans.push_back(maxi);
    ans.push_back(index);

    return ans;
}

vector<int> maxColSum(int **matrix,int row,int col){
    vector<int> ans;
    int maxi=INT_MIN;
    int index=-1;
    for(int c=0;c<col;c++){
        int sum=0;
        for(int r=0;r<row;r++){
            sum+=matrix[r][c];
        }
        if(maxi<sum){
            maxi=sum;
            index=c+1;
        }
        
    }
    ans.push_back(maxi);
    ans.push_back(index);
    return ans;
}

int main(){
    int row,col;
    cout<<"Enter number of Rows= ";
    cin>>row;
    cout<<"Enter Number of Column= ";
    cin>>col;
    int **matrix=new int*[row];

    for(int i=0;i<row;i++){
        matrix[i]=new int[col];
    }

    takeInput(matrix,row,col);
    printMatrix(matrix,row,col);
    vector<int> ans=rowSum(matrix,row,col);

    for(int i=0;i<row;i++){
        cout<<"Row "<<i+1<<" Sum= "<<ans[i]<<endl;
    }

    ans=colSum(matrix,row,col);

    for(int i=0;i<col;i++){
        cout<<"col "<<i+1<<" Sum= "<<ans[i]<<endl;
    }

    cout<<"Max Row Sum:"<<endl;
    ans=maxRowSum(matrix,row,col);
    cout<<"Sum= "<<ans[0]<<endl;
    cout<<"Index= "<<ans[1]<<endl;

    cout<<"Max Col Sum:"<<endl;
    ans=maxColSum(matrix,row,col);
    cout<<"Sum= "<<ans[0]<<endl;
    cout<<"Index= "<<ans[1]<<endl;
    
    return 0;
}
