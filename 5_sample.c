#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
    return 0;
}
