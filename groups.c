/*
 * @Description: ������
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
        printf("һ����������");
        scanf("%d", &people_summary);
        printf("������");
        scanf("%d", &group_summary);
        if (people_summary % group_summary != 0)
        {
            printf("���ܺ�����飬������������������");
        }
        else
        {
            break;
        }
    }
    int people_group[2][people_summary];

    return;
}
