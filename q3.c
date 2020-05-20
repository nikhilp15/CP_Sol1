#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char A[100], res='#';
    printf("Enter string : \n");
    scanf("%[^\n]", &A);
    while(A[i]!='\0'){
        if( (A[i]>='A'&&A[i]<='Z') || (A[i]>='a'&&A[i]<='z')){
            res = A[i];
        }
        i++;
    }
    printf("%c", res);

    return 0;
}
