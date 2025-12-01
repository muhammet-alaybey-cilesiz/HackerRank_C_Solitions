#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    /* First Solition 
    int d5 = n / 10000;
    int d4 = (n % 10000) / 1000;
    int d3 = (n % 1000) / 100 ; 
    int d2 = (n % 100) / 10;
    int d1 = (n % 10) ;
    int sum_of_digits = (d5 + d4 + d3 + d2 + d1);
    */
    
    // Advanced solition 
    
    int sum_of_digits;
    
    while (n > 0){
        sum_of_digits += n % 10;
        n /= 10 ;
    }
    
    printf("%d",sum_of_digits);
    
    return 0;
}
