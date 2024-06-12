#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int len = strlen(s);

    for(int i=0; i<len; i++){
        if(s[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
    }
    return 0;
}