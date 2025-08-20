#include <stdio.h>
int main()
{
	int ds[10];//0—9
	int c=0;
	int x;
	for(int i=0;i<10;i++)
	{
		ds[i]=0;
	}
	printf("input x:");
	scanf("%d",&x);
	while (x!=-1)
	{
		ds[x]=ds[x]+1;
		scanf("%d",&x);
		c++;	
	}
	for (int i=0;i<10;i++)
	{
		printf("%d %d\n",i,ds[i]);
			   }           
}