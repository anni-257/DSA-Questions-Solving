
// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?page=1&category[]=Linked%20List&sortBy=submissions

   int length(Node* head){
        int cnt=0;
        while(head){
            head=head->next;
            cnt++;
        }
        
        return cnt;
    }
    
    Node* reverse(Node* head){
        Node* r=0,*q=0,*p=head;
        while(p){
            r=q; q=p; p=p->next;
            
            q->next=r;
            
        }
        
        return q;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        int pos=length(head)/2;
        Node* temp=head;
        Node* head2;
        
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        head2=temp->next;
        temp->next=NULL;
        
        head2=reverse(head2);
        
        while(head2 && head ){
            if(head->data!=head2->data){
                return false;
            }
            
            head2=head2->next;
            head=head->next;
        }
        
        return true;
        
        
        
        
        
}
