#include <stdio.h>   
#include <stdlib.h> 

// this what i first came up with, but doesnt behave the way i expect
int *alloc_1d(int cols)
{
    int *arr = malloc(sizeof(int) * cols);
    return arr;
}

int main(void)
{
	int *my_array = alloc_1d(0);

    my_array[13] = 3490;
    my_array[14] = 4;
    my_array[15] = 23;
    my_array[16] = 1114;
    my_array[17] = 4423;
	// The same array access could be made with pointer arithmetic:
	// *(my_array+8) = 3490;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.

    printf("my_array[14] = %d\n", my_array[14]);
    
    return 0;
}