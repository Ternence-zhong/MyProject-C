#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define RAND_MAX 0x7fff
#include <stdlib.h>
#include <time.h>
//��������Ϸ
//�˽��� 0   ʮ������0x

//�˵�
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
		printf("���������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ӭ������������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}