#include <iostream>
using namespace std;

int main()
{
    //continue并没有使整个循环终止，而break会跳出循环

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    system("pause");

    return 0;
}