
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

// https://leetcode.com/problems/reverse-linked-list/


struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        
    /*  Striver
    
         Node* newHead=NULL;
        while(head){
            Node* next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        
        return newHead;
        
    }*/
        
        // Abdul Bari Rolling pointers;
        Node* r=0,*q=0,*p=head;
        while(p){
            r=q;
            q=p;
            p=p->next;
            
            q->next=r;
            
        }
        return q;
    }
