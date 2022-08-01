
// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions


bool detectLoop(Node* head)
    {
        Node* slow;
        Node* fast;
        slow=fast=head;
        
        while(fast && fast->next){ // head->null does not enter 
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        if(head==slow){
            return false;  // self loop condition if head->next == 0 then return false;
        }
        return false;
    }
