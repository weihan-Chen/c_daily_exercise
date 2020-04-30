/*
 * @Description: 分组器
 * @Author: weihan-Chen
 * @Github: https://github.com/weihan-Chen
 * @Date: 2020-04-29 17:28:56
 * @LastEditTime: 2020-04-30 14:42:52
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int people_summary = 0, group_summary = 0;
	int k;
	printf("这是一个随机分组器，输入人数和组数，就可以得到随机的分组啦~");
	system("pause");
	while (1)
	{
		printf("how many people:");
		scanf("%d", &people_summary);
		printf("how many groups:");
		scanf("%d", &group_summary);
		if (people_summary % group_summary != 0)
		{
			printf("不能合理分组，请重新输入");
		}
		else
		{
			break;
		}
	}
	int people_group[2][people_summary],
		group_people[group_summary];
	for (int i = 0; i < group_summary; i++)
	{
		group_people[i] = 0;
	}

	int rand_group_number = 0;
	for (k = 0; k < people_summary; k++)
	{
		people_group[0][k] = k + 1;
		people_group[1][k] = k / (people_summary / group_summary) + 1;
	}
	for (k = 0; k < people_summary;)
	{
		rand_group_number = rand() % group_summary + 1;
		group_people[rand_group_number - 1] += 1;
		if (group_people[rand_group_number - 1] > people_summary / group_summary)
		{
			group_people[rand_group_number - 1] -= 1;
			continue;
		}
		people_group[1][k] = rand_group_number;
		k += 1;
	}
	for (k = 0; k < group_summary; k++)
	{
		printf("\ngroup number:%d\n", k + 1);
		for (int i = 0; i < people_summary; i++)
		{
			if (people_group[1][i] == k + 1)
			{
				printf("%d ", people_group[0][i]);
			}
		}
	}
	system("pause");
	return 0;
}
