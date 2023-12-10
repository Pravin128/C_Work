#include"stdio.h"
#include"string.h"
int main(void)
{
    int i;
    char s[50],s1[50];
    // strcpy(s,"pravin");
    // strcpy(s1,"thorve");
    printf("enter two strings : ");
    scanf("%s%s",s,s1);
    int flag=0;
    for(i=0;s[i]!='\0' || s1[i]!='\0';i++)
    {
        if(s[i]==s1[i])
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("same \n");

    }
    else 
    printf("not same");
}