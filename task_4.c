#include <stdio.h>
void changeMax(int arr[], int n) {
    int max1 = arr[0], max2 = arr[0], ind1 = 0, ind2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            ind2 = ind1;
            max1 = arr[i];
            ind1 = i;
        } 
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
            ind2 = i;
        }
    }
    int mest = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = mest;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    changeMax(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}