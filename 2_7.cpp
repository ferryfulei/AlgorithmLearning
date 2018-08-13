#include "stdio.h"
#include "time.h"
int main(int argc, char const *argv[]) {
  int n,s = 0;
  scanf("%d",&n );
  for(int  i = 1; i <= n; i++){
    int factorial = 1;
    for(int j = 1; j<= i;j++)
      factorial*= j;
    s += factorial%1000000;
  }
  printf("%d\n",s);
  printf("Time used  = %.2f\n",(double)clock()/CLOCKS_PER_SEC);
  return 0;
}
