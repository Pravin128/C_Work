#include"stdio.h"
// #include"math.h"


int ls(int arr[],int size,int element)
   {
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
       return i;
    }
   
return -1;
   }
  
int main()
{
    int element;
int arr[] = {1,2,3,4,5,6,7,8,88,77,66};
int size=sizeof(arr)/sizeof(int);

printf("enter element to find : ");
scanf("%d",&element);
int si=ls(arr,size,element);
printf("the element %d is found at %d position",element,si);
return 0;
}

