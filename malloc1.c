#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int *a;
int i;
int number;
printf("input number:");
scanf("%d",&number);
a=(int *)malloc(number*sizeof(int));
for(i=0;i<number;i++)
	{	
		printf("input a :");
		scanf("%d",&a[i]);	
	}
for(i=0;i<number;i++)
	{
		printf("%d\n",a[i]);
	}	
}