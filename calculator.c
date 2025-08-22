//Program to make a functional calculator with calculation history

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX_HISTORY 100
int main()
{
    char history[MAX_HISTORY][100];
    int historyCount = 0;
    char choice,calhischeck;
    do 
    {
    int cat,fun;
    float num1,num2,res;
    printf("\n");
    printf("-----------------------\n");
    printf(" WELCOME TO CALCULATOR\n");
    printf("-----------------------\n");
    printf("\n");
    //input
    printf("What type of function do you wanna perform :  \n");
    printf("\n");
    printf("For Arithmetic calculations     enter - (1)\n");
    printf("For Scientific calculations     enter - (2)\n");
    printf("For Trigonometric calculations  enter - (3)\n");
    printf("\n");
    printf("The function selected = ");
    scanf("%d",&cat);
    printf("\n");
    if(cat == 1)
    {
        printf("For addition        enter - (1) \n");
        printf("For subtraction     enter - (2) \n");
        printf("For multiplication  enter - (3) \n");
        printf("For division        enter - (4) \n");
        printf("\n");
        printf("The function selected = ");
        scanf("%d",&fun);
        printf("\n");
        printf("Enter the two values - ");
        scanf("%f%f",&num1,&num2);
    }
    else if(cat == 2)
    {
        printf("To access power function        enter - (1) \n");
        printf("To access square root function  enter - (2) \n");
        printf("To access logarithms function   enter - (3) \n");
        printf("To access exponent function     enter - (4) \n");
        printf("To access absolute function     enter - (5) \n");
        printf("\n");
        printf("The function selected = ");
        scanf("%d",&fun);
        printf("\n");
    }
    else if(cat == 3)
    {
        printf("To access sine function        enter - (1) \n");
        printf("To access cosine function      enter - (2) \n");
        printf("To access tan function         enter - (3) \n");
        printf("\n");
        printf("The function selected = ");
        scanf("%d",&fun);
        printf("\n");
    }
    else 
    {
        printf("Entered data invalid");
        return 0;
    }
    //calculation
    if(cat == 1)
    {
        if(fun == 1)
        {
            res = num1+num2;
        }
        else if(fun == 2)
        {
            res = num1-num2;
        }
        else if(fun == 3)
        {
            res = num1*num2;
        }
        else if(fun == 4)
        {
            if (num2 == 0) 
            {
                printf("Error: Cannot divide by zero.\n");
                return 0;
            }
            res = num1/num2;
        }
        else 
        {
            printf("Entered data invalid ");
            return 0;
        }
    }
    else if(cat == 2)
    {
        if(fun == 1)
        {
            printf("Enter the base and exponent - ");
            scanf("%f%f",&num1,&num2);
            res = pow(num1, num2);
        }
        else if(fun == 2)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = sqrt(num1);
        }
        else if(fun == 3)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = log(num1);
        }
        else if(fun == 4)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = exp(num1);
        }
        else if(fun == 5)
        {
            printf("enter the number - ");
            scanf("%f",&num1);
            ///res = abs(num1);
        }
        else
        {
            printf("Entered data invalid ");
            return 0;
        }
    }
    else if(cat == 3)
    {
        if(fun == 1)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = sin(num1);
        }
        else if(fun == 2)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = cos(num1);
        }
        else if(fun == 3)
        {
            printf("Enter the number - ");
            scanf("%f",&num1);
            res = tan(num1);
        }
        else 
        {
            printf("Entered data invalid ");
            return 0;
        }
    }
    //display
    printf("\n");
    printf("----------------------\n");
    printf(" The result is = %.2f",res);
    printf("\n");
    printf("----------------------\n");
    printf("\n");
    //updating history
    sprintf(history[historyCount], "Function: %d | Inputs: %.2f, %.2f | Result: %.2f", fun, num1, num2, res);
    historyCount++;

    //looping  
    printf("Do you want to perform another calculation? (Y/N): ");
    scanf(" %c", &choice);
    printf("\n");
    
    }
    while (choice == 'Y' || choice == 'y');
    
    printf("\n");
    printf("--------------------------------\n");
    printf(" THANK YOU FOR USING CALCULATOR \n");
    printf("--------------------------------\n");
    //calculation history
    printf("\n--- Calculation History ---\n");
    for (int i = 0; i < historyCount; i++) 
    {
        printf("%d. %s\n", i + 1, history[i]);
    }
    return 0;
}
