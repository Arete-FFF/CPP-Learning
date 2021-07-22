#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num = 100;
    int k = 0;
    do
    {
        if ((pow(num % 1000 / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10 / 1, 3)) == num)
        {
            cout << num << "是水仙花数" << endl;
            k++;
        }
        num++;

    } while (num < 1000);
    cout << "共有" << k << "个水仙花数" << endl;

    return 0;
}