#include <stdio.h>
#include <assert.h>


int min(int [], int);

int min(int a[], int i){
 int m=a[0];
  for (int j=0;j<i;j++){
  if m>a[j]{m=a[j];}
  }
return m;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
