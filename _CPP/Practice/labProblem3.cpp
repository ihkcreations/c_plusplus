// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int N, i;
    int A[100000];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int temp;
    int j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}