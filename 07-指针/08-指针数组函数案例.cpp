#include <iostream>

using namespace std;
/*
案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序

例如数组：int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
*/

//int * arr 也可以写为int arr[]
void bubbleSort(int *arr, int len) //当数组名传入到函数作为参数时，被退化为指向首元素的指针
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap(*(arr + j), *(arr + j + 1));
            }
        }
    }
}
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[10] = {4, 3, 6, 9, 8, 5, 2, 1, 7, 10};
    bubbleSort(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}