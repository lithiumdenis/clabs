#include <stdlib.h>
#include <stdio.h>

struct Student
{
    char name[20];
    char surname[20];
    int course;
};

void init(struct Student ** ptr, int n)
{
    *ptr  = (struct Student*)malloc(n * sizeof(struct Student));
}

void fill_info(struct Student * ptr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter name, surname and course in one string for [%d]: ", i);
        scanf("%s %s %d", &(ptr[i].name), &(ptr[i].surname), &(ptr[i].course));
    }
}

void print_info(struct Student * ptr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s \t %s \t %d \n", ptr[i].name, ptr[i].surname, ptr[i].course);
    }
}

void finit(struct Student * ptr)
{
    free(ptr);
}

int main()
{
    struct Student *ptr;
    int noOfRecords = 3;
    //printf("Enter number of student:");
    //scanf("%d", &noOfRecords);
    init(&ptr, noOfRecords);
    fill_info(ptr, noOfRecords);
    print_info(ptr, noOfRecords);
    finit(ptr);
    return 0;
}

//gcc lab2.c && ./a.out
