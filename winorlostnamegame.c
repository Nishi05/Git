#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s,k,sum;
  char a[100];
    printf("Whit is your name?\n");
    printf(">");
    scanf("%s",a);
    printf("Hello, %s!\n",a);
  /* 乱数の種を初期化 */
  srand(time(NULL));

  /* サイコロを振る */
  s = rand() % 6 + 1;
  k = rand() % 6 + 1;
printf("Rolling the dice...\n");
printf("Die 1: %d\n",s);
printf("Die 2: %d\n",k);
sum=s+k;
printf("Total value: %d\n",sum);
if(sum>7)printf("%s won!\n",a);
else printf("%s lost!\n",a);

  return 0;
}
