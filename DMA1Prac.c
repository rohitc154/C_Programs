#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr1, *ptr2;
    printf("Enter First Value : ");
    ptr1 = (int *)malloc(sizeof(int));
    scanf("%d", ptr1);
    printf("Enter Second Value : ");
    ptr2 = (int *)malloc(sizeof(int));
    scanf("%d", ptr2);
    int sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is %d.", *ptr1, *ptr2, sum);
    free(ptr1);
    free(ptr2);
}