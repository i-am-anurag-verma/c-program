#include <stdio.h>

int main()
{
    int size, a[100], i, j, counter = 0, temp, last_index = 0;
    printf("Please Enter Size of Array: \t");
    scanf("%d", &size);

    // Insert element in Array in Ascending order

    for(i = 0; i < size; i++) {
        printf("Element at index %d: \t", i);
        scanf("%d", a[i]);
    }

    // Logic for finding duplicate number;
    // [1, 1, 1, 4,4, 6,7,7,7,9]
    for(i = 0; i < size; i++) {
        if(last_index != 0 && last_index == i) {
            continue;
            }
       for(j = i + 1; j < size; j++) {
           if(a[i] == a[j]) {
               if(temp != a[j]) {
                   counter++;
                    temp = a[j];
               } else {
                   last_index = j;
                  continue;
               }
               
               
           } else {
               last_index = j;

           }
       }
    }
    return 0;
}