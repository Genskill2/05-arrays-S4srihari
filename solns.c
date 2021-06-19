/* Enter your solutions in this file */
#include <stdio.h>

float average(int a[],int length){
    float total=0;
    for(int i=0;i<length;i++){
        total=total+a[i];
    }
    float avg=total/(float)length;
    return avg;
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
int max(int a[],int length){
    int largest=a[0];
    for(int i=0;i<length;i++){
        if(largest<a[i]){largest=a[i];}
        else{largest=largest;}
    }
    return largest;
}

int min(int a[],int length){
    int smallest=a[0];
    for(int i=0;i<length;i++){
        if(smallest>a[i]){smallest=a[i];}
        else{smallest=smallest;}
    }
    return smallest;
}

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
