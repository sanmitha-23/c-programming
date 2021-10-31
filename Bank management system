#include <stdio.h>
int s=0;

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(struct customer[]);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;

    
    
    do
    {

        printf("\n***********Banking System Menu***********\n");
        printf("1.Create Account.\n");
        printf("2.Display all records.\n");
        printf("3.Search a record.\n");
        printf("4.Deposit amount.\n");
        printf("5.Withdraw amount.\n");
        printf("6.exit\n");
        printf("\nEnter choice(1-6) : ");
        scanf("%d", &choice);
        switch (choice)
        {
        	case 1:
        		accept(data);
        		break;
            case 2:
                display(data, s);
                break;
            case 3:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, s, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %05d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
                break;
            case 5:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, account_no, amount);
        }
    }
    while (choice != 6);

    return 0;
}

void accept(struct customer list[80])
{
    
    
        
        printf("\nCreate Account:\n", s+1);

        
        list[s].account_no=s+1;
        fflush(stdin);
        printf("Enter name : ");
        gets(list[s].name);
        printf("Account created successfully!!!\nYour account no. is %05d\n\n",list[s].account_no);
        list[s].balance = 0;
        s++;
    
}

void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%05d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    }
}

int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i <= s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        }
    }
    return  - 1;
}

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    }
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    }
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    }
}
