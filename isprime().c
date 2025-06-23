#include <stdio.h>
#include <math.h>

void isprime()
{
int n;
scanf("%d",&n);

while(n!=-1){
int i;
int flag=1;//flag は while の中で初期化（int flag = 1;）する必要がある
for (i=2;i<=sqrt(n);i++)
{
	if(n%i==0){
		flag=0;
		break;
	}
}

if(flag){
	printf("%d is prime\n",n);
}else{
	printf("%d is composite number\n",n);
}
scanf("%d",&n);
}
}
int main()
{
	isprime();
	return 0;	
}