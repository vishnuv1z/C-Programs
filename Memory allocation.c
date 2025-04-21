#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] - ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	free(a);
	return 0;
}
