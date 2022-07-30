
// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?page=2&category[]=Linked%20List&sortBy=submissions


// Deletes middle of linked list and returns head of the modified list

int count(Node* head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
    
}
Node* deleteMid(Node* head)
{
    Node* p=head,*q;
    int cnt=count(head),mid=0;
    if(!head){
        return NULL;
    }
    else if(head->next){
    	delete head;
    	return NULL;
    }
    else{
        
        mid=cnt/2;
        
        for(int i=0;i<mid && p;i++){
            q=p;
            p=p->next;
        }
        
        if(p){
            q->next=p->next;
            delete p;
        }
        
    }
    
    return head;
}
