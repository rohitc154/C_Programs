#include <stdio.h>
int search();
void main()
{
    int arr[] = {5, 7, 9, 2, 4, 8, 6};
    int size = sizeof(arr) / 4;
    int target = 10;
    int val;

    if (search(arr, size, target))
        printf("Target Found!");
    else
        printf("Target not found!");
}
int search(int arr[], int size, int target)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == target)
            return 1;
    }
    return 0;
}