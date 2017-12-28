#include <stdlib.h>
#include <stdio.h>

void init(int ***p, int nrows, int ncolumns)
{
    int i;
    int **tmp = malloc(nrows * sizeof(int *) + nrows * ncolumns * sizeof(int));
	
	  for(i = 0; i < nrows; i++)
	  {
		    tmp[i] = (int*)(tmp + nrows) + i * ncolumns;
		}

    *p = tmp;
}


void fill_info(int **arr, int nrows, int ncolumns)
{
    int i, j;
    for(i = 0; i < nrows; i++)
    {
        for(j = 0; j < ncolumns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_info(int **arr, int nrows, int ncolumns)
{
    int i, j;
    for(i = 0; i < nrows; i++)
    {
        for(j = 0; j < ncolumns; j++)
        {
            if(arr[i][j] % 2 == 1)
            {
                printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
            }
        }
    }
}

void finit(int **arr)
{
	  free(arr);
}

int main()
{
    int i, j, nrows = 2, ncolumns = 3;
    int **arr;
    init(&arr, nrows, ncolumns);
    fill_info(arr, nrows, ncolumns);
    print_info(arr, nrows, ncolumns);
    finit(arr);
    return 0;
}

//gcc lab3best.c && ./a.out
