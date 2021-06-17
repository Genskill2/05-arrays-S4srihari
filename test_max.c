#include <stdio.h>
#include <assert.h>


int max(int a[], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int a[],int i){
int m= a[0];
  for (int j=0;j<i;j++){
  if (m<a[j]){m=a[j];}
  }
return m;}
