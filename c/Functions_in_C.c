#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ar[4] = {a,b,c,d};
    int mx = ar[0];
    for(int i=0; i<4; i++){
        if(ar[i] > mx){
            mx = ar[i];
        }
        
    }
    printf("%d\n", mx);
    return 0;
}