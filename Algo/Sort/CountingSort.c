#include <stdio.h>
void counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[n], C[k+1];
    for (i=0; i<=k; i++)
        C[i] = 0;
    for (j=0; j<n; j++)
        C[A[j]] = C[A[j]] + 1;

    for (i=1; i<k+1; i++)
        C[i] = C[i] + C[i-1];

    for (j=n-1; j>=0; j--)
    {
        B[C[A[j]]-1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }


    printf("The Sorted array is : ");
    for (i=0; i<n; i++)
        printf("%d ", B[i]);
}


int main()
{
    int n, max = 0,i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements to be sorted :\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > max) {
            max= A[i];
        }
    }
    counting_sort(A, max, n);
    printf("\n");
    return 0;
}
