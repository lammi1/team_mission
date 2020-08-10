#include <stdio.h>

int main(void)
{
    int arr[6][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
    int (*ptr)[5] = arr;

    int n = 5;
    int m = 5;

    for(int i = n; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }
}
