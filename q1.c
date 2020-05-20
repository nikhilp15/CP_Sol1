#include <stdio.h>
#include <stdlib.h>

int abs_sum(int a, int b){
    if(a+b<0){
        return -(a+b);
    }
    return a+b;
}

int main()
{
    int n, i, j, A[100], res[2];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    int min_sum = abs_sum(A[0], A[1]);

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(abs_sum(A[i],A[j])<=min_sum){
                min_sum = abs_sum(A[i],A[j]);
                res[0]=A[i];
                res[1]=A[j];
            }
        }
    }
    printf("[%d %d]", res[0], res[1]);
    return 0;
}
