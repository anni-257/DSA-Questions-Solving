
// https://practice.geeksforgeeks.org/problems/implement-strstr/1

int strstr(string s, string x)
{   
    int S=s.size(),X=x.size();
    for(int i=0;i<=S-X;i++){
        int j;
        for(j=0;j<X;j++){
            if(s[i+j]!=x[j])
                break;
        }
        if(j==X){
            return i;
        }
    }
    return -1;
}
