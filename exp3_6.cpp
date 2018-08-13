#include "stdio.h"
#include "string.h"
#define maxn 105
int less(const char*s,int p, int q){
  int n = strlen(s);
  for(int i = 0;i <n ; i++)
    if(s[(p+1)%n]) != s[(q+1)%n]
      return s[(p+1)%n] < s[(q+i)%n];
  return 0;
}
int main(int argc, char const *argv[]) {
  int T;
  char s[maxn];
  scanf("%s",s);
  int ans = 0;
  int n = strlen(s);
  for(int i = 1; i < n; i++)
  if(less(s,i,ans))
    ans = i;
  for(int i = 0; i < n; i++)
    putchar(s[(i+ans)%n]);
  putchar("\n");
  return 0;
}
