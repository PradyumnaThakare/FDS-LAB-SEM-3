/*
a) Write a Python program to store roll numbers of student in array who attended training program in random order. 
Write function for searching whether particular student attended training program or not, 
using Linear search and Sentinel search
*/
/*Write a Python program to store roll numbers of student 
array who attended training program in sorted order. 
Write function for searching whether particular student attended training program or not, 
using Binary search and Fibonacci search*/
#include<iostream>
using namespace std;

void sentinelSearch(int arr[], int n, int key)
{
    int last = arr[n - 1];
 
    arr[n - 1] = key;
    int i = 0;
 
    while (arr[i] != key)
        i++;

    arr[n - 1] = last;
 
    if ((i < n - 1) || (arr[n - 1] == key))
        cout << key << " is present at index " << i;
    else
        cout << "Element Not found";
}

int Linear_serach(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int arr[10];
    int n;
    cout << "Enter the number of student " << endl;
    cin >> n;
    cout << "Enter the roll no of  the student who attented the program  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int s;
    cout<<"Select 1: for Linear_serach :"<<endl;
    cout<<"Select 2: for Sentinel_serach :"<<endl;
    cin>>s;
    
    switch(s)
    {
        case 1:
        int key;
        cout<<"Selected for Linaer_serach :"<<endl;
        cout<<"Enter Roll_no of a student : ";
        cin>>key;
        if(Linear_serach(arr,n,key)==-1)
        cout<<"Roll no: "<<key<<"did not attented !!"<<endl;
        else
        cout<<"Roll no: "<<key<<" attented !!"<<endl;
        break;
        case 2:
        int key2;
        cout<<"Selected for Sentinel_serach :"<<endl;
        cout<<"Enter Roll_no of a student : ";
        cin>>key2;
        sentinelSearch(arr,n,key2);
        break;
        default:
        cout<<"Wrong out-put"<<endl;
    }
    
    return 0;
}