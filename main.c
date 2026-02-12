#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int partition(int arr[], int l, int h) {
    int x = arr[h];
    int i = (l - 1);
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[h];
    arr[h] = temp;
    return i + 1;
}

void quick_sort_iterative(int arr[], int l, int h) {
    int stack[h - l + 1];
    int top = -1;

    stack[++top] = l;
    stack[++top] = h;

    while (top >= 0) {
        h = stack[top--];
        l = stack[top--];

        int p = partition(arr, l, h);

        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }
        if (p + 1 < h) {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }
}

int binary_search(int* arr, int size, int target) {
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
    int b[] = {4, 3, 2, 1};
    quick_sort_iterative(b, 0, (int)(sizeof(b) / sizeof(b[0])) - 1);
    for (int i = 0; i < 4; i++) printf("%d ", b[i]);
    return 0;
}
