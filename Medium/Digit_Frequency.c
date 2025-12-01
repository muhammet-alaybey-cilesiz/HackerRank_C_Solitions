#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char num[1000];
    scanf("%s",num);
    
    int frequency[10] = {0};
    
    for(int i = 0; i < strlen(num); i++){
        if(isdigit(num[i])){
            int index = (num[i] - '0');
            frequency[index]++;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ",frequency[i]);
    }
    
    return 0;   
}
