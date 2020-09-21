#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    
    for(i =2; i < n; i++)
    {
        if (n%i ==0)
        {
            printf("Not prime \n");
            break;
        }
    }
    
    printf("number is prime \n");
    
    return 0;
}