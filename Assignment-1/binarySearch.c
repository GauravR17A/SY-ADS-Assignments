// Online C compiler to run C program online
#include <stdio.h>

int binarySearch(int arr[], int size, int target){
  int left = 0;
  int right = size - 1;
  while (left <= right){
    int mid = (left + right) / 2;
    if (arr[mid] == target){
      return mid;
    }
    if(arr[mid] > target){
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return -1;
}

int main() {
  int arr[10];
  for(int i = 0; i < 10; i++){
    printf("Enter a number: ");
    scanf("%d", &arr[i]);
  }

  int target;
  printf("Enter the target: ");
  scanf("%d", &target);

  int index = binarySearch(arr, 10, target);
  if (index != -1)
    printf("Target found at index %d\n", index);
  else
    printf("Target not found\n");

  return 0;
}
