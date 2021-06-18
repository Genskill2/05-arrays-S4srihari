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
int factors(int, int []);
int isprime(int);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
int isprime(int n){
  for (int i = 2; i<n; i++){
    if(n%i==0){
       return 0;
    }
    else{
     return 1;
     }
  }

}

int factors(int x, int arr[]){
 int cnt=0;
   for( int i = 2; i < x; i++){
      while( x % i == 0){
                if(isprime(i)){
                     arr[cnt] = i ;
                     x = x/i ; 
                     cnt++;
                     }
                          
                            if (isprime(x)){
                               arr[cnt] = x;
                              
                               
                           }
                }
        
     }
   return cnt+1;
 }
