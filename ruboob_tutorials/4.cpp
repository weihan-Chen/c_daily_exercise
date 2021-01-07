/*
 * @Author: weihan-Chen
 * @Github: https://github.com/weihan-Chen
 * @Date: 2021-01-05 19:44:46
 * @LastEditors: weihan-Chen
 * @LastEditTime: 2021-01-05 19:59:57
 * @Description: 
 */
#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
    return 0;
}