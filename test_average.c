#include <stdio.h>
#include <assert.h>


float average(int a[], int);

float average(int a[], int i){int sum=0;float avg;
for (int j=0;j<i;j++){
 sum =sum + a[j];
 }
float avg = sum/(float)i;
 return avg;                             
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
