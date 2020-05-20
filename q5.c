#include <stdio.h>

int main()
{
    char A[100], B[100], res;
    int i=0,j=0,counter=0;
    printf("Enter the string: \n");
    scanf("%s", A);

    res = A[0];
    while(A[i]!='\0'){
        B[i]=A[i];
        i++;
    }
    i=0;
    while(A[i]!='\0'){
        while(B[j]!='\0'){
            if(A[i]==B[j]){
                counter++;
            }
            j++;
        }
        if(counter == 1){
            res = A[i];
            break;
        }
        counter = 0;
        j=0;
        i++;
    }

    printf("%c", res);
    return 0;
}
