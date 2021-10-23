#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *mycap;

    int i=0;
    char a[100];

    mycap = fopen("mycap.txt","r");
    char ch;

    while(ch!=EOF){
        ch = getc(mycap);
        a[i]=ch;

        i++;
    }
    int j;
    for (j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }

    fclose(mycap);


    return 0;
}
