#include <stdio.h>

void selectionSort(int arr[], int size){
  for(int i = 0; i < size; i++){
    int min = i;
    for(int j = i + 1; j < size; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

int main() {
  int arr[] = {500, -20, 30, 14, 50};
  selectionSort(arr, 5);
  printf("Sorted array: ");
  for(int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
