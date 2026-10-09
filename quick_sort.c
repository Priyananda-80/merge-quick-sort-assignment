
#include <stdio.h>

typedef struct {
    int id;
    int weight;
} Package;

void quickSort(Package a[], int n) {
    if (n <= 1)
        return;

    Package less[100], equal[100], greater[100];
    int l = 0, e = 0, g = 0;
    int pivot = a[n - 1].weight;

    for (int i = 0; i < n; i++) {
        if (a[i].weight < pivot)
            less[l++] = a[i];
        else if (a[i].weight == pivot)
            equal[e++] = a[i];
        else
            greater[g++] = a[i];
    }

    quickSort(less, l);
    quickSort(greater, g);

    int k = 0;
    for (int i = 0; i < l; i++)
        a[k++] = less[i];
    for (int i = 0; i < e; i++)
        a[k++] = equal[i];
    for (int i = 0; i < g; i++)
        a[k++] = greater[i];
}

int main(void) {
    Package a[] = {
        {1, 20}, {2, 15}, {3, 20}, {4, 10},
        {5, 15}, {6, 20}, {7, 25}, {8, 10}
    };
    int n = sizeof(a) / sizeof(a[0]);

    quickSort(a, n);

    printf("Package ID\tWeight\n");
    for (int i = 0; i < n; i++)
        printf("P%d\t\t%d\n", a[i].id, a[i].weight);

    return 0;
}