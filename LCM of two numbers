#include <stdio.h>
#include <stdlib.h>

int lcm(int a,int b);
int main()
{
    int a,b,l;

    printf("Enter any two numbers: \n");
    scanf("%d %d",&a,&b);

    l=lcm(a,b);
    printf("The LCM of %d and %d is %d\n",a,b,l);

    return 0;
}

int lcm(int a,int b)
{
    static int temp=1;

    if(temp%a==0 && temp%b==0)
        return temp;

    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}
