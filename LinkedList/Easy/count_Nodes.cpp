
// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        struct Node* p=head;
        int cnt=0;
        while(p){
            cnt++;
            p=p->next;
        }
        
        return cnt;
    
    }
