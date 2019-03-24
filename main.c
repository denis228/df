#include <stdio.h>
int main()
{
    int A , B , C;
    printf("\nEnter A\n");
    scanf("%d",&A);
    printf("Enter B\n");
    scanf("%d",&B);
    C=A+B;
    printf("%d + %d = %d\n",A,B,C);
    C=A-B;
    printf("%d - %d = %d\n",A,B,C);
    return 0;
}