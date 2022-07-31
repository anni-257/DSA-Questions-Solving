
// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

int count(Node* head){
        int cnt=0;
        while(head){
            head=head->next;
            cnt++;
        }
        
        return cnt;
    }
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(count(head)==k){
            return head;
        }
        
        Node* temp=head,*head2;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        head2=temp->next;
        temp->next=NULL;
        
        Node* newHead=head2;
        while(newHead->next){
            newHead=newHead->next;
        }
        newHead->next=head;
        
        return head2;
        
    }
