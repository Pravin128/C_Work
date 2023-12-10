#include"stdio.h"
#include"string.h"
int main(void)
{
    char s[50]="pravinthorve",s1[50];
    int i;

    
    strncpy(s1,s,6);
    printf("%s\n",s1);

    for(i=0;s[i]!='\0';i++)
    {
        s1[i]=s[i];
    }

    printf("%s\n",s1);

    // OR
    strcpy(s1,s);
    printf("%s\n",s1);

}