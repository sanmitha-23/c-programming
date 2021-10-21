#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    //upper half of pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n);j++)
        {
            if((i+j)<=(n-1))//upper left triangle
                printf("*");
            else
                printf(" ");
            if((i+n)<=j)//upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    //lower half of the pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n);j++)
        {
            if(i>=j) //bottom left triangle
                printf("*");
            else
                printf(" ");
            if(i>=(2*n-1)-j) //bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
