#include <stdio.h>

int main()
{

    int N;
    int i, j;
    int a[100000];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int hold;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }

    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}