#include <stdio.h>
#include <stdlib.h>

int prime(int num);
int main()
{
    int num,k;
    printf("Enter a number: ");
    scanf("%d",&num);

    k=prime(num);

    if(k==0)
    {
        printf("%d is a prime number\n",num);
    }
    else
        printf("The number is composite\n");

    return 0;
}

int prime(int num)
{
    int l=2;
    if(num%l==0)
    {
        return 1;
    }
     l++;

    if(l<=(num/2))
    {
        prime(num);

    }
    return 0;
}
