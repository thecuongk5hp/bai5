#include <stdio.h>

void xoaPhanTu(int arr[], int *n, int k) {
    int found = 0;

    for (int i = 0; i < *n; i++) {
        if (arr[i] == k) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1]; 
            }
            (*n)--;
            i--;
        }
    }

    if (!found) {
        printf("Thong bao: Khong co phan tu day trong mang\n");
    }
}

int main() {
    int n, k;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri phan tu can xoa: ");
    scanf("%d", &k);

    xoaPhanTu(arr, &n, k);

    if (n > 0) {
        printf("Mang sau khi xoa phan tu %d: ", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

