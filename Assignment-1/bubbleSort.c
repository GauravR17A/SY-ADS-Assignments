#include <stdio.h>

void bubbleSort(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size - 1; j++){
      if(arr[j] > arr[j + 1]){
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[10];
  for(int i = 0; i < 10; i++){
    printf("Enter a number: ");
    scanf("%d", &arr[i]);
  }
  bubbleSort(arr, 10);
  printf("Sorted array: ");
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
