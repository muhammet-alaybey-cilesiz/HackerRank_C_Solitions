#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int array[] = {a,b,c,d};
    int n = sizeof(array) / sizeof(array[0]);
    int max = array[0];
    
    for(int i=1; i<n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max; 
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
