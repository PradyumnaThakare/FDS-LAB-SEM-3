/*Write a Python program to maintain club members, 
sort on roll numbers in ascending order. Write function “Ternary_Search” 
to search whether particular student is member of club or not. Ternary search is
modified binary search that divides array into 3 halves instead of two.*/
#include <iostream>
using namespace std;

int tertay_search(int marks[], int n)
{
    int key;
    int start = 0, end = n - 1;
    cout << "Enter the roll to be searched " << endl;
    cin >> key;
    while (end >= start)
    {

        int mid1 = start + (end - start) / 3;
        int mid2 = end - (end - start) / 3;

        if (marks[mid1] == key)
        {
            return mid1;
        }
        if (marks[mid2] == key)
        {
            return mid2;
        }

        if (key < marks[mid1])
        {
            end = mid1 - 1;
        }
        else if (key > marks[mid2])
        {
            start = mid2 + 1;
        }
        else
        {
            start = mid1 + 1;
            end = mid2 - 1;
        }
    }

    return -1;
}

void sort(int marks[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
            if (marks[i] > marks[i + 1])
            {
                {
                    int temp = marks[i];
                    marks[i] = marks[i + 1];
                    marks[i + 1] = temp;
                }
            }
        count++;
    }

    int p = tertay_search(marks, n);
    if (p == -1)
        cout << "Student not persent in the club" << endl;
    else
        cout << "Student present in the club at postion " << p << endl;
}
int main()
{
    int marks[100];
    int n;
    cout << "Enter the number of student " << endl;
    cin >> n;
    cout << "Enter the roll no of  the student " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    sort(marks, n);

    return 0;
}