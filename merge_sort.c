#include <stdio.h>

typedef struct {
    int id;
    int weight;
} Package;

void merge(Package a[], int left, int mid, int right) {
    Package temp[100];
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right) {
        if (a[i].weight <= a[j].weight)
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];
}

void mergeSort(Package a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main(void) {
    Package a[] = {
        {1, 20}, {2, 15}, {3, 20}, {4, 10},
        {5, 15}, {6, 20}, {7, 25}, {8, 10}
    };
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);

    printf("Package ID\tWeight\n");
    for (int i = 0; i < n; i++)
        printf("P%d\t\t%d\n", a[i].id, a[i].weight);

    return 0;
}