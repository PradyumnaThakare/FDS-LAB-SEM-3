/*
In any language program mostly syntax error occurs due to unbalancing delimiter such as (),{},[].
Write C++ program using stack to check whether given expression is well parenthesized or not
*/
#include<iostream>
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
}