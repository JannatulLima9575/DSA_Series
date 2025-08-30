#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX], n, i, sum = 0;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}