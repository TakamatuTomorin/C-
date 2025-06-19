#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(NULL));
int a=rand();
int b=rand();
printf("%d,%d",a,b);

srand(time(0));
int c=rand();
int d=rand();
printf("%d,%d",c,d);
  //time() 関数の引数は NULL 
int =rand();
int f=rand();
printf("%d,%d",d,f);
}
////乱数の初期化をしない場合：毎回同じ値になる

srand(1);
rand();
srand(2);
rand();
return 0;
//異なる種（1 と 2）を与えることで、rand() の結果が異なることを確認できます
}
