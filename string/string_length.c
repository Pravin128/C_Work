#include"stdio.h"
int main(void)
{
    int i,count=0;
    char s[50]="pravinthorve";
    printf("%s\n",s);
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }

    printf("length of string is %d\n",count);

   

}