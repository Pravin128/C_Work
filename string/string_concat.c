#include"stdio.h"
#include"string.h"
int main (void){
    char s[50],s1[50];
    strcpy(s,"pravin");
    strcpy(s1," thorve.");
    printf("%s\n",strncat(s,s1,6));
    printf("%s",strcat(s,s1));

}