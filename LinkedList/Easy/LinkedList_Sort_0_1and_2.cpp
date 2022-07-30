
// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?page=2&category[]=Linked%20List&sortBy=submissions

 Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* current=head;
        int c0=0,c1=0,c2=0;
        while(current){
            switch(current->data){
                case 0:
                    c0++;
                    break;
                
                case 1:
                    c1++;
                    break;
                
                case 2:
                    c2++;
                    break;
            }
            
            current=current->next;
        }
        
        Node* newnode;
        newnode=new Node(0);
        head=newnode;
        Node* temp=head;
        
        while(c0-1){
            newnode=new Node(0);
            temp->next=newnode;
            temp=newnode;
            c0--;
        }
        while(c1){
            newnode=new Node(1);
            temp->next=newnode;
            temp=newnode;
            c1--;
        }
        while(c2){
            newnode=new Node(2);
            temp->next=newnode;
            temp=newnode;
            c2--;
        }
        
        return head;
        
    }
};
