/*
In any language program mostly syntax error occurs due to unbalancing delimiter such as (),{},[].
Write C++ program using stack to check whether given expression is well parenthesized or not
*/
/*#include<iostream>
#include<stack>
using namespace std;
bool valid(string s)
{
  int n=s.length();
  stack<char>st;
  bool ans=true;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='{'||s[i]=='('||s[i]=='[')
    {
      st.push(s[i]);
    }
    else if(s[i]==')')
    {
      if(!st.empty() && st.top()=='(')
      st.pop();
    
    else{
      ans=false;
      break;
    }
    }
    else if(s[i]=='}')
    {
      if(!st.empty() &&st.top()=='{')
      st.pop();
    
    else{
      ans=false;
      break;
    }
    }
    else if(s[i]==']')
    {
      if(!st.empty() &&st.top()=='[')
      st.pop();
    
    else{
      ans=false;
      break;
    }
    }
  }
 if(!st.empty())
 return false;
 return ans;
}
int main()
{
    string s;
    cout<<"Input string :";
    cin>>s;
  
  if(valid(s)==true)
  cout<<"String is valid";
  else 
  cout<<"Invalid string";
  return 0;
}*/
#include<iostream>
using namespace std;
struct node 
{
    int data;
    node *next;
}*first=NULL,*second=NULL,*last=NULL,*last2=NULL,*third,*last3=NULL;
void insert(int key)
{
    node*temp;
    temp=new node;
    temp->data=key;
    temp->next=NULL;
    if(first==NULL)
    {
        first=last=temp;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
}
void insert2(int key)
{
    node*temp;
    temp=new node;
    temp->data=key;
    temp->next=NULL;
    if(second==NULL)
    {
        second=last2=temp;
    }
    else
    {
        last2->next=temp;
        last2=temp;
    }
}
void merge()
{
    if(first->data<second->data)
    {
        third=last3=first;
        first=first->next;
        last3=NULL;
    }
    else
    {
        third=last3=second;
        second=second->next;
        last3=NULL;
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data)
        {
            last3->next=first;
            last3=first;
            first=first->next;
            last3->next=NULL;
        }
        else
        {
            last3->next=second;
            last3=second;
            second=second->next;
            last3->next=NULL;
        }
    }
    if(first!=NULL)
    {
        last3->next=first;
    }
    else
    {
        last3->next=second;
    }
}
void display(struct node *p)
{
   if(p!=0)
   {
  
       cout<<p->data<<" ";
       display(p->next);
   }
 
}
int main()
{
    insert(2);
    insert(8);
    insert(10);
    insert(15);
    display(first);
    cout<<endl;
    insert2(4);
    insert2(7);
    insert2(12);
    insert2(14);
    display(second);
    cout<<endl;
    merge();
    display(third);
    cout<<endl;
    
}