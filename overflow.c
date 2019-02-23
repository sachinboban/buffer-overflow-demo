#include <stdio.h>
#include <stdlib.h>

/*
 * Function to print an array of integers
 */
void print_array(int* array, int size)
{
        int i;

        for (i=0; i < size; ++i) {
                printf("%d ", array[i]);
        }
        printf("\n");
}

/*
 * A function that is never called!
 */
void not_used(void)
{
        printf("I am never here!\n");
        exit(1);
}

int main()
{
        int a[5];
        int size;
        int i;

        printf("Enter array size\n");
        (void)scanf("%d", &size);

        for (i=0; i < size; ++i) {
                (void)scanf("%d", &a[i]);
        }

        print_array(a, size);

        return 0;
}
