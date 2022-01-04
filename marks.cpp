#include <iostream>
using namespace std;
void avg(int m[], int n1)
{
    int sum = 0;
    for (int i = 0; i < n1; i++)
    {
        if (m[i] != -1)
        {
            sum = sum + m[i];
        }
    }
    cout << "The average of class = " << sum / n1 << endl;
}
void highest_lowest(int m[], int n1)
{
    int max = -1000000, min = 1000000;
    for (int i = 0; i < n1; i++)
    {
        if (m[i] != -1)
        {
            if (max < m[i])
                max = m[i];
            else if (m[i] < min)
                min = m[i];
        }
    }
    cout << "The highest score is = " << max << endl
         << "The lowest score is " << min << endl;
}
void absent(int m[], int n1)
{
    int ab = 0;
    for (int i = 0; i < n1; i++)
    {
        if (m[i] == -1)
            ++ab;
    }
    cout << "Total absent student = " << ab << endl;
}
void frequence(int m[], int n1)
{
    int c = 0, f = 0, max = -1000000, v = 0;
    for (int i = 0; i < n1; i++)
    {
        c = m[i];
        if (c != -1)
        {
            for (int j = 0; j < n1; j++)
            {
                if (c == m[i])
                    f++;
            }
            if (f > max)
            {
                max = f;
                v = m[i];
            }
            f = 0;
        }
    }
    cout << "Maximum frequence is of marks  = " << v;
}
int main()
{
    int marks[100];
    int n;
    cout << "Enter the number of student " << endl;
    cin >> n;
    cout << "Enter the marks of student thoes who are absent enter -1 " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    int z = 1, k;
    while (z == 1)
    {
        cout << " 1 : Average score of class " << endl;
        cout << " 2 : Highest score and lowest score of class " << endl;
        cout << " 3 : Count of students who were absent " << endl;
        cout << " 4 : Display marks with highest frequence " << endl;
        cout << "Enter your choice " << endl;
        cin >> k;
        switch (k)
        {
        case 1:
            avg(marks, n);
            break;
        case 2:
            highest_lowest(marks, n);
            break;
        case 3:
            absent(marks, n);
            break;
        case 4:
            frequence(marks, n);
            break;
        default:
            cout << "Wrong input ";
            break;
        }
        cout << "To reapeat the process enter 1 or 0 to exit " << endl;
        cin >> z;
    }
    cout << "Thank you " << endl;
}