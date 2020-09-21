#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    int sumAll = 0;
    int sumEven = 0;
    
    for(i = 1; i <=n; i++)
    {
        if(i%2 == 0)
        {
            sumEven = sumEven + i;
        }
        
        sumAll = sumAll + i;
    }
    
    printf("sum of all numbers %d \n", sumAll);
    printf("sum of even nums %d \n", sumEven);
    
    return 0;
}