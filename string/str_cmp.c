#include"stdio.h"
#include"string.h"
int main(void)
{
    char s[50],s1[50];
    // strcpy(s,"pravin");
    // strcpy(s1,"thorve");
    printf("enter two strings : ");
    scanf("%s%s",s,s1);
    printf("%d\n",strcmp(s,s1));
    if(strcmp(s,s1)==0)
    printf("Same\n");
    else 
        printf("different\n");
    printf("%d\n",strncmp(s,s1,4));
    if(strncmp(s,s1,4)==0)
    printf("first 5 are same");
    else
    printf("not same");

}