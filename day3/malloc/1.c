#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ar[5];
	int n=0,i=0;
	int *ptr;

	printf("enter the size\n");
	scanf("%d",&n);

	ptr = (int *)malloc(n * sizeof(int));
	printf("enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("entered values are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t ",ptr[i]);
	}
	free(ptr);
	printf("\n");

	return;
}