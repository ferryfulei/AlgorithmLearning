#include "stdio.h"
#define INF 100000000
int main(int argc, char const *argv[]) {
  FILE *fin, *fout;
  fin = fopen("data.in","rb");
  fout = fopen("data.out","wb");
  fin = stdin;
  fout = stdout;
  int x, n = 0, kase= 0;
  while(fscanf(fin,"%d", &n) == 1&&n){
    int s = 0, min = INF, max = -INF;
    for(int i = 0; i < n; i++){
      fscanf(fin,"%d",&x);
      s += x;
      if(x < min) min = x;
      if(x > max) max = x;
    }
    if(kase) printf("\n");
    fprintf(fout,"Case %d: %d %d %.3f\n",++kase, min, max,(double) s/n );
  }
  fclose(fin);
  fclose(fout);
  return 0;
}
