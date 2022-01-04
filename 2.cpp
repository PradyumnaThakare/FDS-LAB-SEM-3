
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << "Enter size1\n";
    cin >> n;
    arr[n];
    cout << "Enter the array  \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key, no;
    cout << "Enter the index " << endl;
    cin >> key;
    cout << "Enter the number" << endl;
    cin >> no;
    if (key == n)
    {
        arr[n] = key;
    }
    else
    {
        for (int i = n; i > key; i--)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        arr[key] = no;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
}
