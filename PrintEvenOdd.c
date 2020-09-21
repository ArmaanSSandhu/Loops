#include <stdio.h>

int main(){
    int n = 100;
    int i;
    
    printf("---------even nums--------- \n");
    
    for(i=1; i<=n; i++)
    {
        if (i%2 ==0)
        {
            printf("%d \n", i);
        }
    }
    
    printf("---------odd nums-------- \n");
    
    for(i = 1; i<=n; i++)
    {
        if (i%2 != 0)
        {
            printf("%d \n", i);
        }
    }
    
    return 0;
}