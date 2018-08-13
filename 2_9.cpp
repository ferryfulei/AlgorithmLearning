#include "stdio.h"
int main(int argc, char const *argv[]) {
  int x,min,max,n,s;
  scanf("%d",&x);
  s=min=max=x;
  n = 1;
  while(scanf("%d",&x) == 1){
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
    n++;
  }
  printf("%d %d %.3f\n", min, max, (double)s/n );
  return 0;
}
