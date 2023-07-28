#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];

    int i,j,sum;
    printf("Input elements in the matrix : \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("element - [%d],[%d]: ",i,j);
            scanf("%d",(*(a+i)+j));

        }
    }
    printf("\n\nThe matrix is :\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",*(*(a+i)+j));

        }
        printf("\n");
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==j){
                sum=sum + *(*(a+i)+j);
            }
        }
    }
    printf("\n\nThe sum of all diagonal elements is %d\n\n",sum);

    return 0;
}
