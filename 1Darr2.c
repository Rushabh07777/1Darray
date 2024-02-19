#include <stdio.h>

main() {
    int size, i;
    float sum = 0, average;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size]; 
    
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i]; 
    }
    
    average = sum / size;
    
    printf("Average of the array: %.2f\n", average);
}
