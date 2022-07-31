
// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

int count(Node* head){
        int cnt=0;
        while(head){
            head=head->next;
            cnt++;
        }
        
        return cnt;
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* temp=head;
        int cnt=count(head);
        if(!head){
            return -1;
        }else{
            int mid=cnt/2;
            for(int i=0;i<mid;i++){
                temp=temp->next;
            }
            
            return temp->data;
        }
    }
