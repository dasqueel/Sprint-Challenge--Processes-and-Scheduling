#include <stdio.h>   
#include <stdlib.h> 

int **alloc_2d(int rows, int cols)
{
    // instantiate the 2d array variable we will use with the amount of bytes needs for all the numbers
    // plus number of bytes for how much a row pointer is
    int **arr = malloc(rows * sizeof(int *) + (rows * cols * sizeof(int)));

    // intiate a memory pointer for the rows
    int *mem = (int *)(arr + rows);
    // printf("%p\n", mem);

    // add memory spots for each row in the 2d array
    for(int i = 0; i < rows; i++) {
        arr[i] = mem + (i * cols);
    }

    // return the 2d array
    return arr;
}

int main(void)
{
	int **my_array = alloc_2d(10, 20);

	// First array index is row, second is column:
    my_array[9][19] = 3490;
    my_array[0][0] = 55;

	// The same array access could be made with pointer arithmetic:
    // *(*(my_array+2)+3) = 3490;
    // *(*(my_array+2)+4) = 55;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.
	
    printf("my_array[9][19] = %d\n", my_array[9][19]);
    printf("my_array[0][0] = %d\n", my_array[0][0]);
    
    return 0;
}