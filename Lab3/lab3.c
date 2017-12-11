#include <stdlib.h>
#include <stdio.h>

int init(int ***p, int size_x, int size_y)
{
    int **array = malloc (size_x * sizeof (int *));

    for (int i = 0; i < size_x; i++)
        array[i] = malloc(size_y * sizeof(int));

    *p = array;
    return 0;
}


void fill_info(int **array2, int nrows, int ncolumns)
{

    int i, j;
    for(i=0; i < nrows; i++)
    {
        for(j=0; j < ncolumns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
}

void print_info(int **array2, int nrows, int ncolumns)
{
    int i, j;
    for(i=0; i < nrows; i++)
    {
        for(j=0; j < ncolumns; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, array2[i][j]);
        }
    }
}

void finit(int **x, int nrows)
{
    for (int i = 0; i < nrows; i++) 
    {
        free(x[i]);
    }
    free(x);
}

int main()
{

    int i, j, nrows = 2, ncolumns = 2;

    int **array2;
    init(&array2, nrows, ncolumns);

    fill_info(array2, nrows, ncolumns);
    print_info(array2, nrows, ncolumns);
    finit(array2, nrows);
    return 0;
}

//gcc lab3.c && ./a.out