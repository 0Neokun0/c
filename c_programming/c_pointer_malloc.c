#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n; i++)
    {
        A[i] = i+1;
    }
    for(int i=0;i<n; i++)
    {
        printf("%d ", A[i]); // example : 1 2 3 4 5 
    }

    return 0;
}
