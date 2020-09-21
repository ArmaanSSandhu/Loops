#include <stdio.h>

int main(){
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int i;
    int hcf = 1;
    
    for(i = 1; i <= n1; i++)
    {
        if (n1%i == 0)
        {
            if (n2%i == 0)
            {
                hcf = i;
            }
            else
            {
                ;
            }
        }
        else
        {
            ;
        }
    }
    
    printf("hcf: %d \n", hcf);
    
    return 0;
}