#include <stdio.h>
#include <stdlib.h>
// Example 1
// int* func()
// {
//     int a = 5;
//     return &a;
// }
// int main(int argc, char const *argv[])
// {
//     /* Here 'ptr' acts as dangling pointer as, the variable whose address is stored by the ptr has been
//     vanished/released at the end of the function call*/
//     int *ptr;
//     ptr = func();
//     printf("%d",*ptr);
//     return 0;
// }

// Example 2
int main(int argc, char const *argv[])
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 98;
    printf("%d\n", *ptr);
    free(ptr);
    printf("%d", *ptr);

    return 0;
}
