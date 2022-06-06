#include <stdio.h>
int main()
 {
   int array[] = {2,4,6,8};
   int size = sizeof array/sizeof array[0];
   int total = 0;
   printf("The sizeof array %lu and the sizeof array[0] %lu \n", sizeof array, sizeof array[0]);
     for(int i = 0; i < size; i++)
     {
         total = total + array[i];
     }
   printf("The sum of array = %d\n", total);
    return 0;
}