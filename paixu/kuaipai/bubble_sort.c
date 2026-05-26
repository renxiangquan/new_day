#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int n;

    printf("请输入数组元素个数: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("输入无效。\n");
        return 1;
    }

    int arr[n];

    printf("请输入 %d 个整数: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("输入无效。\n");
            return 1;
        }
    }

    bubble_sort(arr, n);

    printf("排序结果: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
