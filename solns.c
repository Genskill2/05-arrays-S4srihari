/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>


float average(int a[], int);


float average(int a[], int i){int sum=0;float avg;
for (int j=0;j<i;j++){
 sum =sum + a[j];
 }
avg = sum/(float)i;
 return avg;                             
}
int factors(int, int []);
int isprime(int);


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
int max(int a[], int);


int max(int a[],int i){
int m= a[0];
  for (int j=0;j<i;j++){
  if (m<a[j]){m=a[j];}
  }
return m;}
int min(int [], int);


int min(int a[], int i){
 int m=a[0];
  for (int j=0;j<i;j++){
  if (m>a[j]){m=a[j];}
  }
return m;
}
int mode(int [], int);


int mode(int a[],int length){
    int value=0;
    int max_count=0;
    for(int i=0;i<length;i++){
          int count=0;
          for(int j=0;j<length;j++){
            if(a[j]==a[i]){count=count+1;}
          }
          if (max_count<count){
            value=a[i];
            max_count=count;
          }
    }
    return value;
}
