#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  int s,k,sum;

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

  return 0;
}
