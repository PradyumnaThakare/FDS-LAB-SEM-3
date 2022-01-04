/*Write a Python program to store first year percentage of students in array.
Write function for sorting array of floating point numbers in ascending order using 
a) Selection Sort b) Bubble sort and display top five scores.*/
#include<iostream>
using namespace std;

void swap(float *xp, float *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(float arr[], int n)
{
    int i, j, min_idx;
 
    
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
    }
}

void bubbleSort(float arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void printArray(float arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    float arr[10];
    int n;
    cout << "Enter the number of student " << endl;
    cin >> n;
    cout << "Enter the marks of  the student  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int s;
    cout<<"Select 1: for Selection sort "<<endl;
    cout<<"Select 2: for Bubble sort "<<endl;
    cin>>s;
    
    switch(s)
    {
        case 1:
        cout<<"Selected for Selection sort "<<endl;
        selectionSort(arr, n);
        cout<<"Print the sorted marks "<<endl;
        printArray(arr,n);
        break;
        case 2:
        cout<<"Selected for Bubble sort "<<endl;
        bubbleSort(arr, n);
        cout<<"Print the sorted marks "<<endl;
        printArray(arr,n);
        break;
        default:
        cout<<"Wrong out-put"<<endl;
    }
    
    return 0;
}