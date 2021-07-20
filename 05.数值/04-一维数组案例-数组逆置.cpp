#include <iostream>

using namespace std;

int main()
{
    int arr[] = {200, 500, 300, 600, 100};

    int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;

    for (; start <= end; start++, end--)
    {
        int temp = 0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");

    return 0;
}