#include<iostream>
using namespace std;
struct node 
{
    string name;
    int data;
    struct node*next;
}*first=NULL,*last=NULL,*second=NULL,*last2=NULL;
int n,n2;
void insert()
{
    
    cout<<"Enter the number of students : ";
    cin>>n;
     for(int i=0;i<n;i++)
     {
    node *temp=new node;
    cout<<"Enter the name of student : ";
    string name1;
    cin>>name1;
    temp->name=name1;
    cout<<"Enter the roll no of the student : ";
    int roll;
    cin>>roll;
    temp->data=roll;
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
    
}
void insert2()
{
    
    cout<<"Enter the number of students : ";
    cin>>n2;
     for(int i=0;i<n2;i++)
     {
    node *temp=new node;
    cout<<"Enter the name of student : ";
    string name1;
    cin>>name1;
    temp->name=name1;
    cout<<"Enter the roll no of the student : ";
    int roll;
    cin>>roll;
    temp->data=roll;
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
    
}
void add(struct node *p)
{
    node *temp=new node;
    cout<<"Enter the name of student : ";
    string name1;
    cin>>name1;
    temp->name=name1;
    cout<<"Enter the roll no of the student : ";
    int roll;
    cin>>roll;
    temp->data=roll;
    int select;
    cout<<"Press 0 for persident  :"<<endl;
    cout<<"Press "<<n<<"For secretary : "<<endl;
    cout<<"Press and no. from 0 to"<<n<<": "<<endl;
    cin>>select;
    if(select==0)
    {
        temp->next=first;
        first=temp;
    }
    else
    {
        node *p=first;
        for(int i=1;i<select-1 && p;i++)
        {
            p=p->next;
        }
        if(p)
        {
            temp->next=p->next;
            p->next=temp;
        }
    }
}
void Concatenation()
{
    node *p=first;
    while(p!=0)
    {
        p=p->next;
    }
    p->next=second;

}
int delete_ele()
{
    int pos;
    cout<<"Enter the student position to delete : ";
    cin>>pos;
    node *p,*q;
    int x;
    if(pos==1)
    {
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else
    {
        p=first;
        q=NULL;
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            x=p->data;
            delete p;
        }
    }
    return x;
}
void rev()
{
    node *p=first,*q=NULL,*r=NULL;
    while(p!=0)
    {
    r=q;
    q=p;
    p=p->next;
    
    q->next=r;
    }
    
    first=q;
}
void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->name<<"->"<<p->data<<endl;
        p=p->next;
        
    }
}
int count(struct node *p)
{
    int x=0;
    while(p!=NULL)
    {
        p=p->next;
        x++;
    }
    return x;
}
int main()
{
    int c=1,q;
    while(c==1)
    {
        
        cout<<" 1 -> insert   "<<endl;
        cout<<" 2 -> Add   "<<endl;
        cout<<" 3 -> Delete   "<<endl;
        cout<<" 4 -> Display   "<<endl;
        cout<<" 5 -> Count  "<<endl;
        cout<<" 6->  Concatenation "<<endl;
        cout<<" 7->  Rev "<<endl;
        cin>>q;
        switch(q)
        {
          case 1: insert();
          break;
          case 2: add(first);
          break;
          case 3: cout<<delete_ele()<<endl;
          break;
          case 4: display(first);
          break;
          case 5: cout<<count(first)<<endl;
          break;
          case 6:
          insert2();
          Concatenation();
          display(first);
          break;
          case 7:
          rev();
          display(first);
          break;
          default :
          cout<<"Wrong input "<<endl;
          break;
        };
        cout<<"Enter 1 to repeat or 0 to exit "<<endl;
        cin>>c;
    }
    

    return 0;
}