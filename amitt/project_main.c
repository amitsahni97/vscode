
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include"sum.h"
#include"sub.h"
#include"mul.h"
#include"mod.h"


void calculator_operations();
 
// Start of Main Program
int main()
{
    int X=1;
    char ch;
 
    // Function call 
    calculator_operations();
 
    while(X)
    {
        printf("\n");
        printf("Enter the calculator Operation you want to do: ");
 
        ch=getch();
 
        switch(ch)
        {
            case '+': addition();
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;
 
            
 
            case '?': modulus();
                      break;
 
            
 
            case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    
        }
    }
    test_main();
    return 0;
}
 
//Function Definitions
 
void calculator_operations()
{
    
    printf("\n             Welcome to C calculator \n\n");
 
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    
    printf("Enter ? symbol for Modulus\n");
    
}
 
void addition()
{
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    float total=sum(a,b);
    printf("Value = %f",total);
}
 
void subtraction()
{ 
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    float total=sub(a,b);
    printf("Value = %f",total);
}
 
void multiplication()
{
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    float total=mul(a,b);
    printf("Value = %f",total);
}

 
void modulus()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int total=mod(a,b);
    printf("Value = %d",total);
}

