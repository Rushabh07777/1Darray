#include <stdio.h>
main() {
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arrayA[size], arrayB[size], result[size]; 
    
        printf("Enter array A's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }
    printf("Enter array B's elements:\n");
    for (i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }
    
    for (i = 0; i < size; i++) {
        result[i] = arrayA[i] + arrayB[i];
    }
    
    printf("Result array:\n");
    for (i = 0; i < size; i++) {
        printf("result[%d] = %d\n", i, result[i]);
    }
}
