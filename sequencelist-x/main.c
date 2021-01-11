#include"operation.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p;
	int a,b,c;
	SqList L;
	printf_s("初始化,5个\n");
	InitSq(&L);
	scan_d(&L);
	print(&L);
	printf_s("\n");
	while (1)
	{
		printf_s("1:输出	");
		printf_s("2:增	");
		printf_s("3:删	");
		printf_s("4:查	");
		printf_s("5:改	");
		printf_s("6:退出\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			print(&L);
			printf_s("\n");
			break;
		case 2:
			printf_s("位置\n");
			scanf_s("%d", &b);
			printf_s("数值\n");
			scanf_s("%d", &c);
			InsertSq(&L, b, c);
			print(&L);
			printf_s("\n");
			break;
		case 3:
			printf_s("位置\n");
			scanf_s("%d", &b);
			DeleteSq(&L, b);
			print(&L);
			printf_s("\n");
			break;
		case 4:
			printf_s("数值\n");
			scanf_s("%d", &c);
			p = SearchSq(&L, c);
			for (int i = 1; p[i] != -1; i++)
			{
				printf_s("%d	", p[i]);
			}
			printf_s("\n");
			break;
		case 5:
			printf_s("位置\n");
			scanf_s("%d", &b);
			printf_s("数值\n");
			scanf_s("%d", &c);
			AlterSq(&L, b, c);
			print(&L);
			printf_s("\n");
			break;
		default:
			break;
		}
		if (a==6)
		{
			break;
		}
	}
	system("pause");
}