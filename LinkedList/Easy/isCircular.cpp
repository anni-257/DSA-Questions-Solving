
// https://practice.geeksforgeeks.org/problems/circular-linked-list/1?page=1&category[]=Linked%20List&curated[]=7&sortBy=submissions


/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    Node* temp=head;
   while(temp){
       if(temp->next==head)
           return true;
           
        temp=temp->next;
   }
   
   if(temp==head){
       return true;
   }
   
   return false;
}
