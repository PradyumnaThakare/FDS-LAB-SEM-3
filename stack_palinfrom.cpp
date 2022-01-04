#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
void rev(string s)
{
  stack<string> st;
  for(int i=0;i<s.length();i++)
  {
    string word="";
    while(s[i]!=' ' && i<s.length())
    {
      word=word+s[i];
      i++;
    }
   st.push(word);
  }
  string word1="";
  while(!st.empty())
  {
    
    word1=st.top()+" ";
  }
  cout<<word1;
}
int main()
{
   string s="How are u ?";
   rev(s);
}
