#include "show.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n=4;
  int r=3;
  char *c[] = {"a","b","c","d"};
  int t[] = {1,2,3,4};
  int a_[3] = {25,320,1700};
  double b_[3] = {1.2,1.32,1.432};
  char c_[3] = {'d','e','f'};
  char *d_[3] = {"asdf","kjljxy","123456789"};

  void *v[4] = {a_,b_,c_,d_};

  char *a = show(n,r,c,t,v);
  if(a) {
    printf("%s",a);
    free(a);
  }

  return 0;
}
