#include <stdio.h>
#include <assert.h>


int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);
  printf("average: passed\n");
  
  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }

