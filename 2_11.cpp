#include "stdio.h"
int main(int argc, char const *argv[]) {
  FILE *fin, *fout;
  fin = stdin;
  fout = stdout;
  int x,min,max,n,s;
  fscanf(fin,"%d",&x);
  s=min=max=x;
  n = 1;
  while(fscanf(fin,"%d",&x) == 1){
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
    n++;
  }
  fprintf(fout,"%d %d %.3f\n", min, max, (double)s/n );
  fclose(fin);fclose(fout);
  return 0;
}
