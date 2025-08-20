#include <stdio.h>
#include <math.h>
int isprime(int x)
{
	int ret=1;
	int i;
	if(x<2) return 0;
	if(x==2) return 1;	
	if(x%2==0 &&x!=2) return 0;
	
	for(i=3;i<=sqrt(x);i=i+2){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{

int n;
int num=0;
int ret;
scanf("%d",&n);
int prime[n];
int i=2;
while(num<n){
	if(isprime(i)==1){
		prime[num++]=i;
	}
	i++;
}

for(int i=0;i<n;i++){
	printf("%d,%d\n",i,prime[i]);
}

}