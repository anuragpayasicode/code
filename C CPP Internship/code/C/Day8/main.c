#include <stdio.h>

int main() {
    
    int arr[] = {1,0,0,2,0,3,4,0,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    // Move non-zero elements forward
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining places with 0
    while(j < size) {
        arr[j] = 0;
        j++;
    }

    // Print array
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}