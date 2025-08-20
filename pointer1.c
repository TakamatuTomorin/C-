#include <stdio.h>

int main(void)
{
	int ar[] = {1,3,5,7,9,-1};
	int *p = &ar;
	printf("p=%d\n",p);
	printf("p=%p\n",p);
	printf("p+1=%d\n",p+1);
	int *p1 = &ar[2];
	printf("p1=%d\n",p1);
	printf("p1=%p\n",p1);
	printf("p1-p=%d\n",p1-p);
	
	for(int i=0;i<sizeof(ar)/sizeof(int);i++){
		printf("%d\n",ar[i]);
	}
	
	for (p=ar;*p!=-1;){
		   printf("%d\n",*p++);
		   
	}

	
}