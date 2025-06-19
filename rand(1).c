#include <stdio.h>
#include <stdlic.h>
#include <time.h>
int main()
{
int a=rand();
printf("%d",a);

srand(time(1));
int b=rand();
int c=rand();
printf("%d,%d",b,c);

srand(time(0));
int d=rand();
int f=rand();
printf("%d,%d",d,f);
}
