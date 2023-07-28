#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[20];
    int age;
    int phone;
    float salary;
}emp[10];

int main()
{
    int n,i;

    printf("Enter the number of employees: \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter the details of the employee\n");

        printf("Enter the name:\n");
        scanf("%s",emp[i].name);

        printf("Enter the age:\n");
        scanf("%d",&emp[i].age);

        printf("Enter the phone number:\n");
        scanf("%d",&emp[i].phone);

        printf("Enter the salary:\n");
        scanf("%f",&emp[i].salary);
    }

    for(i=1;i<=n;i++)
    {
        printf("Details of employee\n");

        printf("Name: %s\n",emp[i].name);
        printf("Age: %d\n",emp[i].age);
        printf("Phone number: %d\n",emp[i].phone);
        printf("Salary: %.2f\n",emp[i].salary);
    }

    return 0;
}
