#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int term1 = a, term2 = b, term3 = c, nth_term;
  
  if(n==1) return term1;
  if(n==2) return term2;
  if(n==3) return term3;
  
  for(int i = 4; i <= n; i++){
    nth_term = term1 + term2 + term3;
    term1 = term2;
    term2 = term3;
    term3 = nth_term;
  }
  
  return nth_term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
