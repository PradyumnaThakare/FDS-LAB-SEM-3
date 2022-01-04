#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter dimension " << endl;
    cin >> x >> y;
    int arr[50][50] = {0};
    cout << "Enter all the elements " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    int min = 100000, count = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int z = 0; z < y; z++)
            {
                if (arr[i][z] < min)
                    min = arr[i][z];
            }
            //cout<<min<<endl;
            for (int k = 0; k < x; k++)
            {
                if (min >= arr[k][j])
                    count = 1;
                else
                {
                    count = 0;
                    break;
                }
            }
            if (count == 1)
                cout << "Saddle point is " << min << endl;
            min = 100000;
            count = 0;
        }
    }
    return 0;
}