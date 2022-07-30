
// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1?page=1&category[]=Linked%20List&sortBy=submissions

 //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       Node* temp=del->next;
       
       del->data=temp->data;
       del->next=temp->next;
       
    }
