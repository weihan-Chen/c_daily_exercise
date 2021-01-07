/*
 * @Author: weihan-Chen
 * @Github: https://github.com/weihan-Chen
 * @Date: 2021-01-05 14:39:09
 * @LastEditors: weihan-Chen
 * @LastEditTime: 2021-01-05 14:45:26
 * @Description: 
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++)
    {
        j = rand();
        cout << "random number:" << j << endl;
    }

    return 0;
}