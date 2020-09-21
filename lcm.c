#include <stdio.h>

int main(){
    
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    
    int lcm;
    int i = n1;
    
    while(true)
    {
        if(i%n1 == 0 && i%n2 == 0)
        {
            lcm = i;
            
            break;
        }
        
        i += n1;
    }
    
    printf("lcm %d \n", lcm);
    
    return 0;
}