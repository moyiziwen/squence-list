#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1
#define OVERFLOW -2
#define EleType int
typedef int Status;
typedef struct {
	EleType *elem;
	int length;
}SqList;

Status InitSq(SqList *L) {
	L->elem = (EleType*)malloc(5 * sizeof(EleType));
	if (!L->elem)
	{
		return ERROR;
	}
	L->length = 5;
	return OK;
}

Status InsertSq(SqList *L, int i, EleType e) {
	if (i<1||i>L->length+1)
	{
		return ERROR;
	}
	L->elem = (EleType *)realloc(L->elem, (L->length + 1)*(sizeof(EleType)));
	if (!L->elem)
	{
		return OVERFLOW;
	}
	for (int j = L->length-1; j >= i-1; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}
	L->elem[i - 1] = e;
	L->length++;
	return OK;
}

Status DeleteSq(SqList *L, int i) {
	for (int j = i-1; j <=L->length-1; j++)
	{
		L->elem[j] = L->elem[j + 1];
	}
	L->elem = (EleType*)realloc(L->elem, (L->length - 1) * (sizeof(EleType)));
	L->length--;
	if (!L->elem)
	{
		return OVERFLOW;
	}
	return OK;
}

int * SearchSq(SqList*L, int key) {
	int k = L->length;
	int *p;
	int j = 1;
	p = (EleType*)malloc(k*sizeof(EleType));
	for (int i = 0; i < L->length; i++)
	{
		if (L->elem[i]==key)
		{
			p[j] = i+1;
			j++;
		}
	}
	p[j] = -1;
	return p;
}

Status AlterSq(SqList*L, int i, EleType e) {
	L->elem[i - 1] = e;
	if (!L->elem)
	{
		return ERROR;
	}
	return OK;
}

Status scan_d(SqList *L) {
	for (int i = 0; i <L->length; i++)
	{
		scanf_s("%d", &L->elem[i]);
	}
	return OK;
}

void print(SqList *L) {
	for (int i = 0; i < L->length; i++)
	{
		printf("%d	", L->elem[i]);
	}
}