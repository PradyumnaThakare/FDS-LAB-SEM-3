/*Write a Python program to store first year percentage of students in array. 
Write function for sorting array of floating point numbers in 
ascending order using quick sort and display top five scores*/
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 

int partition (int arr[], int low, int high)
{
    int pivot=arr[low];
    int start=low;
    int end=high;
    while(start<=end-1)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&arr[start],&arr[end]);
        }
    }
      swap(&arr[low],&arr[end]);
        return end;
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
void printArray(int arr[], int size)
{
    int j=size-1;
    for(int i=0;i<5;i++)
    {
      cout<<arr[j]<<endl;
      --j;
    }
     
    cout<<endl;
}

void accept(int *p,int size)
{
     for(int i=0;i<size;i++)
   {
       cin>>*(p+i);
   }
}
 
int main()
{
  
   
   int n=1,p;
   while(n==1)
   {
       cout<<" 1 For Accept the marks "<<endl;
       cout<<" 2 For Displaying the sorted marks of Top 5 student "<<endl;
       cout<<" 3 For Exit"<<endl;
        cin>>p;
        switch(p)
        {
            case 1:
            cout<<"Enter the number of students ";
          int marks[10];
            int x;
             cin>>x;
             cout<<endl;
            accept(marks,x);
            break;
            case 2:
            cout<<"Sorted array : "<<endl;
             quickSort(marks, 0, x-1);
             printArray(marks, x);
             break;
             case 3:
             cout<<"Do u want ot continue Press 1 or press 0 :";
             cin>>n;
             if(n==0)
             return 0;
             break;
             default:
             cout<<"Do u want ot continue Press 1 or press 0 :";
             cin>>n;
        }
   }

    
    return 0;
   
}