#include"operation.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p;
	int a,b,c;
	SqList L;
	printf_s("��ʼ��,5��\n");
	InitSq(&L);
	scan_d(&L);
	print(&L);
	printf_s("\n");
	while (1)
	{
		printf_s("1:���	");
		printf_s("2:��	");
		printf_s("3:ɾ	");
		printf_s("4:��	");
		printf_s("5:��	");
		printf_s("6:�˳�\n");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			print(&L);
			printf_s("\n");
			break;
		case 2:
			printf_s("λ��\n");
			scanf_s("%d", &b);
			printf_s("��ֵ\n");
			scanf_s("%d", &c);
			InsertSq(&L, b, c);
			print(&L);
			printf_s("\n");
			break;
		case 3:
			printf_s("λ��\n");
			scanf_s("%d", &b);
			DeleteSq(&L, b);
			print(&L);
			printf_s("\n");
			break;
		case 4:
			printf_s("��ֵ\n");
			scanf_s("%d", &c);
			p = SearchSq(&L, c);
			for (int i = 1; p[i] != -1; i++)
			{
				printf_s("%d	", p[i]);
			}
			printf_s("\n");
			break;
		case 5:
			printf_s("λ��\n");
			scanf_s("%d", &b);
			printf_s("��ֵ\n");
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