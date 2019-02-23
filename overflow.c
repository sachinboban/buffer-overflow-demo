#include <stdio.h>
#include <stdlib.h>

/*
 * A function that is never called!
 */
void not_used(void)
{
        printf("I am never here!\n");
        exit(1);
}

/*
 * Function to read an array and return the product of
 * all the elements in the array.
 */
int serial_mult(void)
{
        int a[5];
        int size;
        int i;
        int ret;

        printf("Enter array size\n");
        scanf("%d", &size);

        printf("Enter array the array\n");
        for (i=0; i < size; ++i) {
                scanf("%d", &a[i]);
        }

        ret = 1;
        for (i=0; i < size; ++i) {
                ret *= a[i];
        }
        return ret;
}

int main()
{
        int prod;

        prod = serial_mult();
        printf("Product: %d\n", prod);
        return 0;
}
