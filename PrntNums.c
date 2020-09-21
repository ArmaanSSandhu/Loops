#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    
    printf("---------1 to n---------\n");
    
    while(i <= n)
    {
        printf("%d \n",i);
        i++;
    }
    
    printf("---------n to 1---------\n");
    
    i = n;
    
    while (i >= 1)
    {
        printf("%d \n",i);
        i--;
    }
    
    return 0;
}