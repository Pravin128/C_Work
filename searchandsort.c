#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int choice,n,a[50],i,up,down,key,flag=0,j,low=0,high,mid,temp,min,ch;
    do
    {
        printf("\n menu \n");
        printf("\n 1.insert array \n");
        printf("\n 2.searching \n");
        printf("\n 3.sorting \n");
        printf("\n 4.exit \n");
        printf("\n enter your choice :  \n");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
              printf("enter size of array(max size 50) :");
              scanf("%d",&n);
              printf("enter array elements :");
              for(i=0;i<n;i++)
                {
                  scanf("%d",&a[i]);
                }
             printf("array elemetns are\n");
             for(i=0;i<n;i++)
                {
                 printf("%d\t",a[i]);
                }
            break;
        
         case 2:
            printf("srarching array element");
            printf("by which method you want to search \n 1.linear search\n2.binary search\n");
            scanf("%d",&up);
            switch(up)
            {
                case 1:
                  printf("1.By linear search\n");
                  printf("enter the element to be search: \n");
                  scanf("%d",&key);
                  for(i=0;i<n;i++)
                   {
                     if(key==a[i])
                      {
                        printf("element %d found at position %d \n",key,i);
                        flag=1;
                      
                      }
                   }
                   if(flag==0)
                    {
                    printf("elemnt %d is not in your array",key);
                    } 
                break;
                case 2: 
                  printf("2.By binary search\n");
                  printf("\nEnter the element to be found in the array:\n");
	                scanf("%d",&key);
                  for(i=0;i<n-1;i++)
	                {
                   for(j=0;j<n-i-1;j++)
	                  {
	                   if(a[j]>a[j+1])
	                    {
	                     temp=a[j];
	                     a[j]=a[j+1];
	                     a[j+1]=temp;
	                    }
	                 }
	               }
	                low=0;
                  high=n-1;
	                mid=(low+high)/2;
	                for(i=0;i<n;i++)
	                 {
		               if(key==a[mid])
		                 {
			               flag=1;
			               break;
		                 }
		               else if(key<a[mid])
		                 {
			               high=mid-1;
			               mid=(low+high)/2;	
		                 }
		               else
		                 {
			               low=mid+1;
			               mid=(low+high)/2;
		                }
	                 }
	                if(flag==1)
	                 {
		                printf("The element %d found at %d position.\n",key,mid);
	                 }
	                else
	                 {
		                printf("Element %d isnot found in the array.\n",key);
                     }
	            break;
                    
            }
         break;
         case 3:
            printf("by which method do you want to sort your array:\n1.bubble sort\n2.selection sort\n3.insertion sort");
            scanf("%d",&down);
            switch(down)
             {
	        case 1:
	          printf("bubble sort\n");
	          for(i=0;i<n-1;i++)
	            {
                  for(j=0;j<n-i-1;j++)
	               {
	                if(a[j]>a[j+1])
	                 {
	                   temp=a[j];
	                    a[j]=a[j+1];
	                    a[j+1]=temp;
	                 }
	               }
	            }
            break;
            case 2:
               printf("seletion sort\n");
               for(i=0;i<n;i++)
                 {
                  min=i;
                  for(j=i+1;j<n;j++)
                    {
    	              if(a[j]<a[min])
	                    {
	                     temp=a[i];
	                     a[i]=a[j];
	                     a[j]=temp;
	                    }
                    }
                 }
            break;
            case 3:
	            printf("insertion sort\n");
	            for(i=0;i<n;i++)
	             {
	               temp=a[i];
	               j=i-1;
	               while(j>=0&&temp<=a[j])
  	                {
	                 a[j+1]=a[j];
	                 j--;
                    }
	               a[j+1]=temp;
	             }
           break;
           case 4:
              exit(0);
           break;  
           }
           printf("sorted array is\n");
           for(i=0;i<n;i++)
           printf("%d\t",a[i]);
        break;
        }
                   

    printf("\n do you want to try another operations (1 for yes/0 for no)\n");
    scanf("%d",&ch);

    }while(ch==1);
return 0;
}


