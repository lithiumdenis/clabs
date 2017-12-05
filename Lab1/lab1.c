#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

#define N 10

void printArray(int *arr);

int main()
{
    int arr[N];
    int i;

    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        arr[i] = rand();
    }
    printArray(arr);
    return 0;
}


void printArray(int *arr)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if(arr[i] % 2 == 1)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
}

//gcc lab1.c && ./a.out