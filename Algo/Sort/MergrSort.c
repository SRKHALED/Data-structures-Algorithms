#include <stdio.h>
void merge (int A[], int a, int B[], int b, int C[])
{
  int i,j,k;
  i = 0;
  j = 0;
  k = 0;
  while (i < a && j < b) {
    if (A[i] <= B[j]) {
	  C[k] = A[i];
	  i++;
	  k++;
    }
    else {
      C[k] = B[j];
      j++;
      k++;
    }
  }
  while (i < a) {
    C[k]= A[i];
    i++;
    k++;
  }
  while (j < b)  {
    C[k]= B[j];
    j++;
    k++;
  }
}
void merge_sort(int A[], int n)
{
  int i;
  int A1[100], A2[100];
  int n1, n2;

  if (n < 2)
    return;

  n1 = n / 2;
  n2 = n - n1;
  for (i =0; i < n1; i++) {
    A1[i] = A[i];
  }
  for (i = 0; i < n2; i++) {
    A2[i] = A[i+n1];
  }
  merge_sort(A1, n1);
  merge_sort(A2, n2);
  merge(A1, n1, A2, n2, A);
}
void PrintArray(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],n,i;
    printf("Enter array size :");
    scanf("%d",&n);
    printf("Enter array element : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,n);
    PrintArray(a,n);
    return 0;
}

