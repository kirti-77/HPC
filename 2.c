#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<omp.h>
int main()
{
	int sec, item, * arr, total = 0, threads = 0, i, j;
	printf("enter the number of sections:\n");
	scanf_s("%d", &sec);
	printf("enter the number of items in  each section:\n");
	scanf_s("%d", &item);
	arr = (int*)malloc(item * sec * sizeof(int));
	for(i=0;i<sec;i++)
	{
		printf("section %d:\n", i + 1);
		for (j = 0; j < item; j++)
		{
			scanf_s("%d", &arr[i * item + j]);
		}
	}
	omp_set_num_threads(2);
#pragma omp parallel for num_threads(4)
	for (i = 0; i < sec; i++)
	{
		for (j = 0; j < item; j++)
		{
#pragma omp critical
			total += arr[i * item + j];
		}
		threads += omp_get_num_threads();
	}
	printf("\ntotal cost while shopping is %d\n", total);
	printf("total threads is %d", threads);
}
