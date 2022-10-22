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

    int freq = 0;
    int maxFreq = 0;
    int maxValue;

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[i] == A[j])
            {
                freq++;
            }
        }

        if (freq > maxFreq)
        {
            maxFreq = freq;
            maxValue = A[i];
        }
    }

    printf("%d ", maxValue);

    return 0;
}