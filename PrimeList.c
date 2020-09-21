#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int j;
    int isPrime;
    
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        
        for(j = 2; j <= i-1; j++)
        {
            if(i%j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1)
        {
            printf("%d \n", i);
        }
    }
    
    return 0;
}