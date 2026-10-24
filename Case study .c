#include <stdio.h>
int main()
{
    int choice;
    float balance, amount;
    printf("Enter initial balance");
    scanf("%f",&balance);
    printf("\n 1.Balance Inquiry");
    printf("\n 2.Cash Withdrawal");
    printf("\n 3.Cash Deposit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Current Balance = %.2f\n",balance);
        break;
    case 2:
        printf("Enter withdrawal amount");
        scanf("%f",&amount);
        if(amount<0)
            printf("Invalid amount\n");
        else if(amount<=balance)
        {
            balance = balance - amount;
            printf("Transaction successful\n");
            printf("Remaining Balance = %.2f\n",balance);
        }
        else
        {
            printf("Insufficient balance\n");
        }
        break;
    case 3:
        printf("Enter deposit amount");
        scanf("%f",&amount);
        if(amount<=0)
        {
            printf("Invalid amount\n");
        }
        else
        {
            balance = balance + amount;
            printf("Deposit successful\n");
            printf("Updated Balance = %.2f\n",balance);
        }
        break;
    default:
        printf("Invalid option\n");
    }
    return 0;
}
