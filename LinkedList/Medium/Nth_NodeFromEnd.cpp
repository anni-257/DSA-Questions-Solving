

// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions

int count(Node* head){
    int cnt=0;
    while(head){
        head=head->next;
        cnt++;
    }
    
    return cnt;
}
//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       int cnt=count(head);
       
       if(n>cnt){
           return -1;
       }
       
       for(int i=0;i<cnt-n && head;i++){
           head=head->next;
       }
       
       if(head)
       return head->data;
       
      
}
