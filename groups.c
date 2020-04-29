/*
 * @Description: 分组器
 * @Author: weihan-Chen
 * @Github: https://github.com/weihan-Chen
 * @Date: 2020-04-29 17:28:56
 * @LastEditTime: 2020-04-29 18:17:18
 */
#include <stdio.h>
void main()
{
    int people_summary, group_summary;
    while (1)
    {
        printf("一共的人数：");
        scanf("%d", &people_summary);
        printf("组数：");
        scanf("%d", &group_summary);
        if (people_summary % group_summary != 0)
        {
            printf("不能合理分组，重新输入人数与组数");
        }
        else
        {
            break;
        }
    }
    int people_group[2][people_summary];

    return;
}
