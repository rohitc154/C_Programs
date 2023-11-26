#include <stdio.h>
void bubbleSort();

int main(int argc, char const *argv[])
{
    int k;
    int arr[] = {6, 5, 1, 0, 4, 7, 3, 2, 9, 8};
    // Calculating size of array
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    // Printing of the sorted array
    printf("Sorted Array using Bubble Sort : \n");
    for (k = 0; k < len; k++)
        printf("%d\t", arr[k]);

    return 0;
}
void bubbleSort(int arr[], int len)
{
    int flag, i, j, temp;
    // Outer loop which checks for number of Passes
    for (i = 0; i < len - 1; i++)
    {
        flag = 0;
        // Inner loop checks for elements to be sorted
        for (j = 0; j < len - 1 - i; j++)
        {
            // Swapping of the element if precedding element is greater than successive element
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        // If No elements of the array is swaped in a pass then, break the outer loop, which means array is already sorted, there is no need to iterate the array
        if (flag == 0)
            break;
    }
}