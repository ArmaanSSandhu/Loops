#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int counter = 0;
    int sum = 0;
    int prod = 1;
    int a;
    
    while(n != 0)
    {
        a = n % 10;
        n = n/10;
        sum = sum + a;
        prod = prod*a;
        counter = counter + 1;
    }
    
    printf("number of digits %d \n", counter);
    printf("Sum of digits %d \n", sum);
    printf("Product of digs %d \n", prod);
    
    return 0;
}