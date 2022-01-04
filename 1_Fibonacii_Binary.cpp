/*Write a Python program to store roll numbers of student 
array who attended training program in sorted order. 
Write function for searching whether particular student attended training program or not, 
using Binary search and Fibonacci search*/
#include<iostream>
using namespace std;
int min(int x, int y) { return (x <= y) ? x : y; }
int Fibonacci_serach(int arr[],int x,int n)
{
    
    int fibMMm2 = 0;
    int fibMMm1 = 1; 
    int fibM = fibMMm2 + fibMMm1; 
    while (fibM < n) {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }
 
    int offset = -1;
 

    while (fibM > 1) {
       
        int i = min(offset + fibMMm2, n - 1);
 
        if (arr[i] < x) {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }
 
       
        else if (arr[i] > x) {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }
 
        else
            return i;
    }
 
    if (fibMMm1 && arr[offset + 1] == x)
        return offset + 1;
 
    return -1;
}
int binary_serach(int arr[],int l,int r,int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binary_serach(arr, l, mid - 1, x);
 
        return binary_serach(arr, mid + 1, r, x);
    }
 
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
    cout<<"Select 1: for Binary_serach :"<<endl;
    cout<<"Select 2: for Fibonacci_serach :"<<endl;
    cin>>s;
    
    switch(s)
    {
        case 1:
        int key;
        cout<<"Selected for Binary_serach :"<<endl;
        cout<<"Enter Roll_no of a student : ";
        cin>>key;
        if(binary_serach(arr,0,n-1,key)==-1)
        cout<<"Roll no: "<<key<<"did not attented !!"<<endl;
        else
        cout<<"Roll no: "<<key<<" attented !!"<<endl;
        break;
        case 2:
        int key2;
        cout<<"Selected for Fibonacci_serach :"<<endl;
        cout<<"Enter Roll_no of a student : ";
        cin>>key2;
        if(Fibonacci_serach(arr,key2,n)==-1)
        cout<<"Roll no: "<<key2<<"did not attented !!"<<endl;
        else
        cout<<"Roll no: "<<key2<<" attented !!"<<endl;
        break;
        default:
        cout<<"Wrong out-put"<<endl;
    }
    
    return 0;
}