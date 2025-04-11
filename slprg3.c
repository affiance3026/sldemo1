#include <stdio.h>

// Function to sort the array
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of K: ");
    scanf("%d", &k);

    if (k > 0 && k <= n) {
        sortArray(arr, n);
        
        printf("Kth Minimum element: %d\n", arr[k-1]);
        printf("Kth Maximum element: %d\n", arr[n-k]);
    } else {
        printf("Invalid value of K\n");
    }
    
    return 0;
}
