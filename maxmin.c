#include <stdio.h>
 
 
int main()
{
    int arr[100],i,n,min,max;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
 
    min=max=arr[0];
    for(i=1; i<n; i++)
    {
         if(min>arr[i])
		  min=arr[i];   
		   if(max<arr[i])
		    max=arr[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
 
 
    return 0;
}
