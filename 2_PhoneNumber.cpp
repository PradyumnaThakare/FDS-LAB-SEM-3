/*Write a Python program to store names and mobile numbers of your friends
in sorted order on names. Search your friend from list using binary search (recursive and non- recursive).
Insert friend if not present in phonebook*/
#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter number of friends " << endl;
    cin >> n;
    char name[100][100];
    char tempname[100];
    cout << "Enter the names and phone number " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= (n - 1) - i; j++)
        {
            r = strcmp(name[j], name[j + 1]);
            if (r > 0)
            {
                strcpy(tempname, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempname);
            }
        }
    }
    cout << endl;
    system("cls");
    for (int i = 0; i < 100; i++)
    {
        cout << "Sorting....." << i << "%";
        Sleep(50);
        system("cls");
    }

    cout << "Sorted list of friends " << endl;
    cout << "********************" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }
    cout << "********************";
    return 0;
}