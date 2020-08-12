#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **ptr = NULL;
    ptr = (int**)malloc(sizeof(int*)*6);

    for (int i = 0; i < 6; i++)
    {
        ptr[i] = (int*)malloc(sizeof(int)*5);
    }

    int arr[6][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
    ptr = (int**)arr;

    /*ptr[0] = {1,2,3,4,5};
    ptr[1][0] = &{6,7,8,9,10};
    ptr[2][0] = {11,12,13,14,15};
    ptr[3] = {16,17,18,19,20};
    ptr[4] = {21,22,23,24,25};
    ptr[5] = {26,27,28,29,30};*/

    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 6; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
}


계속 error가 난다.ㅜ
