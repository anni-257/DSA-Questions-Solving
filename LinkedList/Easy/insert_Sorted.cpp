
// https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

 // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* p=head,*q=0,*newnode;
        newnode=new Node(data);
        if(head==NULL){
            head=newnode;
        }else{
            while(p && p->data<data){
                q=p;
                p=p->next;
            }
            if(p==head){
                newnode->next=head;
                head=newnode;
            }else{
                newnode->next=q->next;
                q->next=newnode;
            }
        }
        
        return head;
    }
