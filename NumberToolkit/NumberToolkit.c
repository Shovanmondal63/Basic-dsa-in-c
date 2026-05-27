#include<stdio.h>

/*
    Global variables
    copy1, copy2 -> used for storing original values
    temp         -> temporary variable used in calculations
*/
int copy1, copy2, temp;


/*-----------------------------------------------------------
    Function: lcm()
    Purpose : Find Least Common Multiple (LCM) of 2 numbers
-----------------------------------------------------------*/
void lcm(int num1, int num2)
{
    int lcm;

    // Store original values
    copy1 = num1;
    copy2 = num2;

    // Find GCD using Euclidean Algorithm
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // Formula: LCM = (a*b)/GCD
    lcm = ((copy1 * copy2) / num1);

    printf("%d & %d LCM value is: %d\n", copy1, copy2, lcm);
}


/*-----------------------------------------------------------
    Function: gcd()
    Purpose : Find Greatest Common Divisor (GCD)
-----------------------------------------------------------*/
void gcd(int num1, int num2)
{
    // Store original values
    copy1 = num1;
    copy2 = num2;

    // Euclidean Algorithm
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("%d & %d GCD value is: %d\n", copy1, copy2, num1);
}


/*-----------------------------------------------------------
    Function: oddeven()
    Purpose : Check whether a number is Odd or Even
-----------------------------------------------------------*/
void oddeven(int num1)
{
    // If remainder is 0, number is even
    if ((num1 % 2) == 0)
    {
        printf("%d is an Even number.\n", num1);
    }
    else
    {
        printf("%d is an Odd number.\n", num1);
    }
}


/*-----------------------------------------------------------
    Function: prime()
    Purpose : Check whether a number is Prime or not
-----------------------------------------------------------*/
void prime(int num1)
{
    int i;

    temp = 0;

    // Numbers less than or equal to 1 are not prime
    if (num1 <= 1)
    {
        temp = 1;
    }
    else
    {
        // Check divisibility from 2 to num1/2
        for (i = 2; i <= num1 / 2; i++)
        {
            if (num1 % i == 0)
            {
                temp = 1;
                break;
            }
        }
    }

    // Display result
    if (temp == 0)
    {
        printf("%d is a Prime number.\n", num1);
    }
    else
    {
        printf("%d is not a Prime number.\n", num1);
    }
}


/*-----------------------------------------------------------
    Function: factorial()
    Purpose : Find factorial of a number
-----------------------------------------------------------*/
void factorial(int num1)
{
    int i;

    temp = 1;

    // Multiply numbers from 1 to num1
    for (i = 1; i <= num1; i++)
    {
        temp *= i;
    }

    printf("%d factorial value is: %d\n", num1, temp);
}


/*-----------------------------------------------------------
    Function: armstrong()
    Purpose : Check Armstrong number
              Example: 153 = 1³ + 5³ + 3³
-----------------------------------------------------------*/
void armstrong(int num1)
{
    int arm = 0, cash;

    // Store original value
    copy1 = num1;

    // Separate digits and calculate cube sum
    while (num1 != 0)
    {
        cash = num1 % 10;

        arm = arm + (cash * cash * cash);

        num1 = num1 / 10;
    }

    // Compare result with original number
    if (arm == copy1)
    {
        printf("%d is an Armstrong number.\n", copy1);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", copy1);
    }
}


/*-----------------------------------------------------------
    Function: Krishnamurthy()
    Purpose : Check Krishnamurthy number
              Example: 145 = 1! + 4! + 5!
-----------------------------------------------------------*/
void Krishnamurthy(int num)
{
    int i, k = 0, s = 1;

    // Store original number
    copy1 = num;

    // Separate digits
    while (num != 0)
    {
        temp = num % 10;

        // Find factorial of each digit
        for (i = 1; i <= temp; i++)
        {
            s = s * i;
        }

        // Add factorial values
        k = k + s;

        // Reset factorial variable
        s = 1;

        // Remove last digit
        num = num / 10;
    }

    // Compare with original number
    if (k == copy1)
    {
        printf("%d is a Krishnamurthy Number.\n", copy1);
    }
    else
    {
        printf("%d is not a Krishnamurthy Number.\n", copy1);
    }
}


/*-----------------------------------------------------------
    Function: Palindrom()
    Purpose : Check palindrome number
              Example: 121, 1331
-----------------------------------------------------------*/
void Palindrom(int num)
{
    // Store original number
    copy1 = num;

    // Reverse number will be stored here
    copy2 = 0;

    // Reverse the number
    while (num != 0)
    {
        temp = num % 10;

        copy2 = (copy2 * 10) + temp;

        num = num / 10;
    }

    // Compare original and reversed number
    if (copy1 == copy2)
    {
        printf("%d is a Palindrome Number.\n", copy1);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", copy1);
    }
}


/*-----------------------------------------------------------
    Main Function
-----------------------------------------------------------*/
void main()
{
    int val1, val2;
    int loop = 1;
    int choice;

    // Loop until user exits
    while (loop == 1)
    {
        // Display menu
        printf("\n========= MENU =========\n");

        printf("1. Press 1 for LCM\n");
        printf("2. Press 2 for GCD\n");
        printf("3. Press 3 for Odd & Even\n");
        printf("4. Press 4 for Prime Number\n");
        printf("5. Press 5 for Factorial\n");
        printf("6. Press 6 for Armstrong Number\n");
        printf("7. Press 7 for Krishnamurthy Number\n");
        printf("8. Press 8 for Palindrome Number\n");
        printf("9. Press 9 for Exit\n");

        printf("========================\n");

        // Take user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on choice
        switch (choice)
        {
            case 1:
                printf("Enter 2 numbers:\n");
                scanf("%d %d", &val1, &val2);

                lcm(val1, val2);
                break;

            case 2:
                printf("Enter 2 numbers:\n");
                scanf("%d %d", &val1, &val2);

                gcd(val1, val2);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &val1);

                oddeven(val1);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &val1);

                prime(val1);
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &val1);

                factorial(val1);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &val1);

                armstrong(val1);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%d", &val1);

                Krishnamurthy(val1);
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%d", &val1);

                Palindrom(val1);
                break;

            case 9:
                printf("Program End...\n");

                // Exit loop
                loop++;
                break;

            default:
                printf("Invalid choice !!!\n");
        }
    }
}
