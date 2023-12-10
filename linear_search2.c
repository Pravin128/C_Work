#include"stdio.h"
int main()
{
int size,flag=0,i,element,pos;
int arr[] = {1,3,4,5,6,7,8,9,0};
size=sizeof(arr)/sizeof(int);
printf("enter element to find : ");
scanf("%d",&element);
for(i=0;i<size;i++)
{
    if(arr[i]==element)
    pos=i;
    flag=1;
    
}
 printf("element %d found at %d position",element,pos);
if(flag==0)
{
    printf("element not found");
}
return 0;
}