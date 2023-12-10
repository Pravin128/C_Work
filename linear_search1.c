#include"stdio.h"
void main()
{
int arr[15],i,key,pos,size,flag=0;
printf("enter size ");
scanf("%d",&size);
printf("enter array elements : ");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter element to search :");
scanf("%d",&key);
for(i=0;i<size;i++)
{
if(key==arr[i])
{
printf("element found at %d position \n ",i);
flag=1;
}
}
if(flag==0)
printf("element not found");
}
