#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0, max_or = 0, max_xor = 0, and_val, or_val, xor_val;
  for(int a = 1; a <= n; a++){
    for(int b = a+1; b <= n; b++){
        and_val = a & b;
        or_val = a | b;
        xor_val = a ^ b;
        
        if(and_val > max_and && and_val < k) max_and = and_val; 
        if(or_val > max_or && or_val < k) max_or = or_val ;
        if(xor_val > max_xor && xor_val < k) max_xor = xor_val;
    
        }  
    }
    printf("%d\n%d\n%d",max_and, max_or, max_xor);
}
int main(){
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
