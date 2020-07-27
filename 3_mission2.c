#include <stdio.h>
#include <cs50.h>
#define SIZE 500000

int main(int argc, char*argv[])
{
    int n;
    int sum = 0, total = 0;
    int k;

    scanf("%d", &n);

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i=0; i < lengthOfPartArr; i++)
    {
        scanf("%d", &partArr[i]);
    }

    // n(n+1) / 2
    sum = n * (n + 1) / 2;
    for (int i = 0; i < lengthOfPartArr; i++)
    {
        total += partArr[i];
    }
    k = sum - total;
    printf("K = %i\n", k);
}
