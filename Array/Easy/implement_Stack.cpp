
// https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&category[]=Arrays&curated[]=7&curated[]=8&sortBy=submissions


//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    arr[++top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1) {
        return -1;
    }
    int x=arr[top--];
    return x;
    
    
    
    
}

