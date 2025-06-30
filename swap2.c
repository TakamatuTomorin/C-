#include <stdio.h>

int swap(int *a, int *b)
{
	
	int ret;
	ret=*a;
	*a=*b;
	*b=ret;
}
int main()
{
		
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	swap(&x,&y);
	printf("swap(x,y)=%d,%d\n",x,y);
	
}