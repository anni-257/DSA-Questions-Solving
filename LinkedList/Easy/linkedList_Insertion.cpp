
// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&category[]=Linked%20List&sortBy=submissions

Node* newnode=new Node(x); //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* newnode=new Node(x);
       newnode->next=head;
       head=newnode;
       return head;
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node* newnode=new Node(x);
        if(!head){
            head=newnode;
            return head;
        }
       
       Node* temp=head;
       while(temp->next){
           temp=temp->next;
       }
       
       temp->next=newnode;
       
       return head;
    }
