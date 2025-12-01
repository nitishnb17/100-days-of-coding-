#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;   

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;      
            high = mid - 1; 
        } 
        else {
            low = mid + 1;  
        }
    }
    return ans;
}

int main() {
    int n, x;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Ceil index: %d\n", index);

    return 0;
}
