#include <iostream>
using namespace std;
void both_cri_bad(int a[], int c, int b[], int f)
{
    cout << "a" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            if (a[i] == b[j])
                cout << a[i] << " ";
        }
    }
    cout << endl;
}
void cri_or_foot_not_both(int a[], int c, int b[], int f)
{
    int q = 0;
    cout << "b" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            if (a[i] == b[j])

            {
                q = 0;
                break;
            }
            else
            {

                q = 1;
            }
        }
        if (q == 1)
            cout << a[i] << " ";
        q = 0;
    }
    cout << endl;
}
void neither_cricket_nor_football(int bas[], int n, int a[], int c, int b[], int f)
{
    cout << "c" << endl;
    int merge[c + f];
    int z = 0, s = 0;
    for (int k = 0; k < c + f; k++)
    {
        if (a[f] < b[s])
        {
            merge[k] = a[z];
            f++;
        }
        else if (b[s] < a[z])
        {
            merge[k] = b[s];
            s++;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < c + f; j++)
        {
            if (bas[i] == merge[j])
            {
                cout << bas[i] << " ";
                count++;
            }
        }
    }
    cout << endl;
    cout << count << endl;
}
void _cricket_or_batminton_not_basketball(int bas[], int n, int a[], int c, int b[], int f)
{
    cout << "d" << endl;
    int merge[c + f];
    int z = 0, s = 0;
    for (int k = 0; k < c + f; k++)
    {
        if (a[f] < b[s])
        {
            merge[k] = a[z];
            f++;
        }
        else if (b[s] < a[z])
        {
            merge[k] = b[s];
            s++;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < c + f; j++)
        {
            if (bas[i] != merge[j])
            {
                cout << bas[i] << " ";
                count++;
            }
        }
    }
    cout << endl;
    cout << count << endl;
}
int main()
{
    int a[50];
    int b[50];
    int bas[50];
    cout << "Enter the students who play cricket " << endl;
    int c;
    cin >> c;
    cout << "Enter the roll numbers " << endl;
    for (int i = 0; i < c; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the students who play Football " << endl;
    int f;
    cin >> f;
    cout << "Enter the roll numbers " << endl;
    for (int i = 0; i < f; i++)
    {
        cin >> b[i];
    }
    cout << "Enter the students who play Basketball " << endl;
    int n;
    cin >> n;
    cout << "Enter the roll number " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> bas[i];
    }
    //cricket football
    both_cri_bad(a, c, b, f);

    //cricket or football but not both
    cri_or_foot_not_both(a, c, b, f);

    //cricket and football not basketball
    neither_cricket_nor_football(bas, n, a, c, b, f);

    _cricket_or_batminton_not_basketball(bas, n, a, c, b, f);

    return 0;
}