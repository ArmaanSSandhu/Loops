#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    
    printf("---------------------------\n");
    
    for(i = 0; i<= 10; i++)
    {
        int prod = n*i;
        printf("%d \n", prod);
    }
    
    return 0;
}