#include<stdio.h>
#include<stdlib.h>
void prt(int *a, int *b){
    int sum = *a+*b;
    int abosolute_value= abs(*a-*b);
    *a = sum;
    *b = abosolute_value;
}
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    prt(&a,&b);
    printf("%d\n%d",a,b);
    return 0;
}