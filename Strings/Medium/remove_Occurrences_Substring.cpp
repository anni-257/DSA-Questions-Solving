
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/


 /*
    int strstr(string &s,string part){
    int size1=s.size(),size2=part.size();

    for(int i=0;i<=size1-size2;i++){
        int j;
        for(j=0;j<size2;j++){
            if(s[i+j]!=part[j]){
                break;
            }
        }
        if(j==size2){
            return i;
        }
    }
    
    return -1;
}*/

string removeOccurrences(string s,string part){

    while(s.size()!=0 && /*strstr(s,part)!=-1*/ s.find(part)<s.size()){
        s.erase(/*strstr(s,part)*/s.find(part),part.size());
    }
    

    return s;



}
