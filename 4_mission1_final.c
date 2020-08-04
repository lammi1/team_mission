#include <stdio.h>

void bubble_sort(int number[]);

int main(void)
{
    int num1[5] = {1,1,1,3,2};
    int num2[5] = {2,1,1,3,1};
    bubble_sort(num1);
    bubble_sort(num2);

    for (int i = 0; i < 5; i++)
    {
        if (num1[i] != num2[i])
        {
            printf("False\n");
            return 1;
        }
    }

    printf("True\n");
    return 0;

}


void bubble_sort(int number[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if(number[j] > number[j+1])
            {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
}
