#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int originalNum = n;
    int armstrong = 0;
    int a;
    
    while(n != 0)
    {
        a = n%10;
        n = n/10;
        armstrong = armstrong + (a*a*a);
    }
    
    if(armstrong == originalNum)
    {
        printf("It is armstrong num \n");
    }
    else
    {
        printf("not armstrong num \n");
    }
    
    return 0;
}