/* Enter your solutions in this file */
#include <stdio.h>


float average(int a[], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
float average(int a[], int i){int sum=0;float avg;
for (int j=0;j<i;j++){
 sum =sum + a[j];
 }
avg = sum/(float)i;
 return avg;                             
}
