#include<stdio.h>
#include<stdbool.h>
void bubblesort(int arr[], size_t size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print_array(int xs[], size_t size){
    for(int i = 0; i < size; i++)
     printf("%d", xs[i]);
      printf("\n");
}
int main(){
    int arr[] = { 4,2,3,5,6};
    size_t size = sizeof arr /sizeof arr[0];
    bubblesort(arr, size);
    print_array(arr, size);
    return 0;
}