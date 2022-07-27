
// https://leetcode.com/problems/xor-operation-in-an-array/

int xorOperation(int n, int start) {
        int Xor=0;
        for(int i=0;i<n;i++){
            int val=start+2*i;
            Xor^=val;
        }
        
        return Xor;
}


