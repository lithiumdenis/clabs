#include <stdlib.h>
#include <stdio.h>

void init(char ***p, int nrows, int ncolumns)
{
    int i;
    char **tmp = malloc(nrows * sizeof(char *));
	tmp[0] = malloc(nrows * ncolumns * sizeof(char));
	for(i = 1; i < nrows; i++)
		tmp[i] = tmp[0] + i * ncolumns;

    *p = tmp;
}

void fill_info(char **arr, int nrows)
{
    int i;
    for(i = 0; i < nrows; i++)
    {
        printf("str_in[%d] = ", i);
        scanf("%s", arr[i]);
    }
}

void print_info(char **arr, int nrows)
{
    int i, j;
    for(i = 0; i < nrows; i++)
    {
        printf("str_out[%d] = %s\n", i, arr[i]);
    }
}

void finit(char **arr)
{
    free((void *)arr[0]);
	free((void *)arr);
}

int main()
{

    int i, j, nrows = 5, ncolumns = 200;
    char **arr;

    init(&arr, nrows, ncolumns);
    fill_info(arr, nrows);
    print_info(arr, nrows);
    finit(arr);
    return 0;
}

//gcc lab3str.c && ./a.out