#include <stdio.h>
void insertSort();
void display();
void main()
{
    int arr[] = {25, 26, 41, 37, 81, 91, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    // Display of Unsorted Array
    printf("Unsorted Array :\n");
    for (int i = 0; i < len; i++)
        printf("%d\t", arr[i]);

    // Callint insertSort() function
    insertSort(arr, len);
    // Calling display() function
    display(arr, len);
}
void insertSort(int arr[], int len)
{
    // Outer loop iterate over each element of the array starting from index 1.
    for (int i = 0; i < len; i++)
    {
        int val = arr[i];
        int j = i - 1;
        /* It check for the element left to val are greater than the val or not.If, it is then, it shifts the greater element to one place right and checks
        for the remainig element present at left untill it reaches index 0. now, creating place val at its correct position, and repeat untill entire array is
        not sorted*/
        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = val;
    }
}
void display(int arr[], int len)
{
    // Display of Sorted Array
    printf("\nSorted Array :\n");
    for (int i = 0; i < len; i++)
        printf("%d\t", arr[i]);
}