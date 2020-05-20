#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, A[100];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of array : \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }


    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(A[i]==0){
                A[i] = A[i] + A[j];
                A[j] = A[i] - A[j];
                A[i] = A[i] - A[j];
            }

        }
    }
    for(i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
