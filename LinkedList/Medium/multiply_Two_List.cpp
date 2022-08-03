

// https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1?page=3&category[]=Linked%20List&sortBy=submissions

// l1-->  1->2->3
// l2-->  5->6->7
// ans= 123 * 567

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long  ans1=0;
  long long  ans2=0;
  long long  n=1000000007;
  while(l1 || l2){
      if(l1){
          ans1=(ans1*10)%n+l1->data;
          l1=l1->next;
      }
      if(l2){
          ans2=(ans2*10)%n+l2->data;
          l2=l2->next;
      }
  }
  
 // cout<<ans1<< " "<<ans2<<endl;
  
  return ((ans1)*(ans2))%n;
}
