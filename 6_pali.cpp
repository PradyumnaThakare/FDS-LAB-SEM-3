/*
A palindrome is a string of character that‘s the same forward and backward. 
Typically, punctuation, capitalization, and spaces are ignored. For example, 
“Poor Dan is in a droop” is a palindrome, as can be seen by examining the characters 
“poor danisina droop” and observing that they are the same forward and backward. One way to check
for a palindrome is to reverse the characters in the string and then compare with them the original-in a palindrome, 
the sequence will be identical. Write C++ program with functions- 
a) To print original string followed by reversed string using stack b) To check whether given string is palindrome or not
*/
#include<iostream>
#include<cstring>
using namespace std;
class Stack  {
private:
  char data[50],str[50];
  int top,length,count;

  void pushData(char);
  char popData();

public:
  Stack() {
    top=-1;
    length=0;
    count=0;
  }
  void get();
  void Reverse();
  void Palindrome();
  void extract();
  
};

void Stack::get() {
  cout<<"\n Enter a String: ";
  cin.getline(str,50);

  length=strlen(str);
}

void Stack::extract() {
  char temp[50];
  int i,j;
  for(i=0; i<length; i++) {
    temp[i]=str[i];
  }
  j=0;
  for(i=0; i<length; i++ )  {
    if(isalpha(temp[i]))  {
      str[j]=tolower(temp[i]);
      j++;
    }
  }

  length=j;  

}

void Stack::Palindrome() {
  for(int i=0; i<length; i++)
    pushData(str[i]);

  for(int i=0; i<length; i++) {
    if(str[i]==popData())
      count++;
  }

  if(count==length) {
    cout<<"\n  string is a Palindrome. \n";
  }
  else  cout<<"\n  string is not a Palindrome. \n";
}

void Stack::Reverse()  {
  for(int i=length-1; i>=0; i--)
    cout<<str[i];
}

void Stack::pushData(char temp) {

  if(top==50-1)  {
  
    return;
  }

  top++;
  data[top]=temp;

}

char Stack::popData() {
  if(top==-1)  {
    char ch='\n';
    return ch;
  }
  char temp=data[top];
  top--;
  return temp;
}

int main()  {
  Stack o;
  o.get();
  o.extract();
  o.Reverse();
  o.Palindrome();
  return 0;
}
