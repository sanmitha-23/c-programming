#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice=0;

    printf("Enter your choice:\n 1.Pizza,Rs 239\n 2.Burger,Rs 129\n 3.Pasta,Rs 179\n 4.French Fries,Rs 99\n 5.Sandwich,Rs 149\n");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Food item-Pizza\n");
            printf("Price- Rs 239\n");
            break;
        }
    case 2:
        {
            printf("Food item-Burger\n");
            printf("Price- Rs 129\n");
            break;
        }
    case 3:
        {
            printf("Food item-Pasta\n");
            printf("Price- Rs 179\n");
            break;
        }
    case 4:
        {
            printf("Food item-French Fries\n");
            printf("Price- Rs 99\n");
            break;
        }
    case 5:
        {
            printf("Food item-Sandwich\n");
            printf("Price- Rs 149\n");
            break;
        }
    default : printf("Invalid choice\n");
    }

    return 0;
}
