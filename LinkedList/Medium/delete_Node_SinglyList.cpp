

// https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions

/*You are required to complete below method (1-based indexing)*/
Node* deleteNode(Node *head,int x)
{
    Node* temp=head,*tail=0;
    if(x==1){
        head=head->next;
        delete temp;
        return head;
    }else{
        for(int i=0;i<x-1 && temp;i++){
            tail=temp;
            temp=temp->next;
        }
        if(temp){
            tail->next=temp->next;
            delete temp;
        }
    }
    
    return head;
}
