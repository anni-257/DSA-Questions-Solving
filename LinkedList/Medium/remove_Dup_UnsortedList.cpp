

// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions


//Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> st;
        Node* curr=head;
        Node* pre=NULL;
        
        while(curr){
            if(st.count(curr->data)){
                pre->next=curr->next;
                delete(curr);
            }
            else{
                st.insert(curr->data);
                pre=curr;
            }
            
            curr=pre->next;
        }
        
        return head;
    }
