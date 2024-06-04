#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    char s[100];
    char sen[100];
    scanf("%c",&c);
    getchar();
    fgets(s,sizeof(s),stdin);
    fgets(sen,sizeof(sen),stdin);
    printf("%c\n",c);
    printf("%s",s);
    printf("%s\n", sen);

    
    return 0;
}