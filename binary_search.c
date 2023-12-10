#include"stdio.h"
int main(void)
{
int i,swap,j,high,n,size,flag=0,low=0,element,mid,pos,arr[20];
clrscr();
printf("ENTER SIZE OF ARRAY : ");
scanf("%d",&size);
printf("enter elements in array :");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
{
for(j=0;j<size-i-1;j++)
{
if(arr[j]>arr[j+1])
{
swap=arr[j];
arr[j]=arr[j+1];
arr[j+1]=swap;
 }
 }
 }
for(n=0;n<size;n++)
{
printf(" %d ",arr[n]);
}
printf("enter element to find :");
scanf("%d",&element);
high=arr[size-1];
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==element)
{
flag=1;
pos=mid;
break;
}
 else if(arr[mid]<element)
 {
 low=mid+1;
 }
 else
 {
 high=mid-1;
 }
 }
 if(flag==1)
 printf("element %d found at %d position",element,pos);
 else
 printf("element not found");
return 0;

}
