#include "show.h"
#include <stdio.h>
#include <stdlib.h>

/* a couple of examples using show() */

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
  if(a) { printf("%s",a); free(a); }

  printf("\n\n");

  char *c2[] = {"name","age","city","state","score"};
  n=5;
  r=5;
  int t2[] = {4,1,4,4,2};
  char *name_[5] = {"Alan","Bob","Cindy","Dave","Edith"};
  int age_[5] = {32,25,37,49,19};
  char *city_[5] = {"New York","San Francisco","Dallas","Honolulu","Los Angeles"};
  char *state_[5] = {"NY","CA","TX","HI","CA"};
  double score_[5] = {4.0,3.9,3.2,4.0,3.0}; 
  void *v2[5] = {name_,age_,city_,state_,score_};
  a = show(n,r,c2,t2,v2);
  if(a) { printf("%s",a); free(a); }

  return 0;
}
