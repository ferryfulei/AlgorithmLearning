#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c );
  if (a > b) {
    t = a; a = b; b = t;
  }
  if (b > c) {
    t = b; b = c; c = t;
  }
  if (a > c) {
    t = a; a  = c ; c = t;
  }
  printf("%d %d %d\n",a, b,c );
  return 0;
}
