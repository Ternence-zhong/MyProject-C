#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define RAND_MAX 0x7fff
#include <stdlib.h>
#include <time.h>
//猜数字游戏
//八进制 0   十六进制0x

//菜单
void menu1()
{
	printf("********************\n");
	printf("********1.PLAY******\n");
	printf("********0.EXIT******\n");
	printf("********************\n");
}

void game()
{
	int ret = (rand() % 100) + 1;  //rand() %100 = 0-99 ,+1 = 1-100;
	//printf("%d\n", ret);
	int guess = 0;
	while (1)
	{
		printf("请输入数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu1();
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("欢迎来到猜数字游戏\n");
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}