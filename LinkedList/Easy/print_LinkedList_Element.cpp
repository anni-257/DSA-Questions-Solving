
// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1?page=2&category[]=Linked%20List&sortBy=submissions

 /*Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as */
  
  struct Node
  {
     int data;
     Node *next;
  }


class Solution
{
    public:
    void display(Node *head)
    {
        Node *current=head;
        while(current){
            cout<<current->data<<" ";
            current=current->next;
        }
    }
