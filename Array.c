#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
