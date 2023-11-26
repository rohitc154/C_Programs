#include <stdio.h>
void binSearch();
void main()
{
    int arr[] = {2, 4, 6, 8, 9, 10, 12, 16, 27, 74};
    int size = sizeof(arr) / sizeof(arr[0]);
    binSearch(arr, 1, size);
}
void binSearch(int arr[], int target, int size)
{
    int start = 0, end = size - 1, mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            printf("Value Found!");
            return;
        }
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    printf("Value not found!");
}