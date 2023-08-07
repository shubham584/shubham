#include<stdio.h>
#include<conio.h>
long int factorial(int n);
void main()
{
    int n;
   //66 clrscr();
    printf("Enter the number : ");
    scanf("Factorial of %d is %1d ", n, factorial(n));
    getch();

}
long int factorial(int n)
{
    if (n<=1)
    {
        return(01);
    }
    else
    {
        n=n*factorial(n-1);
        return(n);
    }
}
