#include <iostream>
using namespace std;

int main()
{
    for (int k = 1; k <= 100; k++)
    {
        if (k % 10 == 7 || k / 10 % 10 == 7 || k % 7 == 0)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << k << endl;
        }
    }

    return 0;
}