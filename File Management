#include <stdio.h>


int main()
{
    FILE *mycap;
    FILE *mycap1;

    int i=0;
    char a[100];
    char x[300];
    
    printf("Enter the file name along with its path: \n");
    scanf("%s",x);

    mycap = fopen(x,"r");
    mycap1 = fopen("output.txt","w");
    char ch;
    
    if (mycap==NULL)
    {
    	printf("File does not exist");
	  }
	
	  else
  	{
			ch = getc(mycap);
	    while(ch!=EOF){
	    fputc(ch, mycap1);
	   	a[i]=ch;
      ch = getc(mycap);
	    i++;
	    }
      
	    fputc('\0',mycap1);
	    int j;
      
	    for (j=i-1;j>=0;j--)
	    {
	        printf("%c",a[j]);
	    }
	
	    
	}
	fclose(mycap);
	fclose(mycap1);


    return 0;
}

