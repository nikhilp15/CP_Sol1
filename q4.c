#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, k=0, m, n, A[100], B[100], R[200];
    
    printf("Enter the size of 1st array: ");
    scanf("%d", &n);
    printf("Enter the elements of 1st array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    
    printf("Enter the size of 2nd array: ");
    scanf("%d", &m);
    printf("Enter the elements of 2nd array: \n");
    for(i=0; i<m; i++){
        scanf("%d", &B[i]);
    }
    
    i=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            R[k] = A[i];
            k++;
            i++;
        }else{
            R[k] = B[j];
            k++;
            j++;
        }
    }
    while(i<n){
        R[k] = A[i];
        k++;
        i++;
    }
    while(j<m){
        R[k] = B[j];
        k++;
        j++;
    }
    
    for(i=0; i<n+m; i++){
        printf("%d ", R[i]);
    }
    
    return 0;
}
