#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

srand(time(0));
int a =rand()%100;
int i;
int count=0;
do{
	printf("input:");
	scanf("%d",&i);
	count++;
	if(a>i){
		printf("input bigger number:");
	}else if(a<i){
		printf("input smaller number:");
	}
	
}
while(a!=i);
printf("bingo!you tried %d times!",count);
return 0;
}