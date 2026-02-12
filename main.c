#include <stdio.h>
#include <stdlib.h>

int binary_search(int *arr, int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else if (arr[mid] > target) {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i_result = binary_search(arr, 6, 2);
    int i_result2 = binary_search(arr, 6, 3);
    int i_result3 = binary_search(arr, 6, 5);
    printf("%d", i_result);
    printf("%d", i_result2);
    printf("%d", i_result3);
    return 0;
}
