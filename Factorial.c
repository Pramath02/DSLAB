#include<stdio.h>

int fact(int);                                                                          //Function Prototype
void main()
{
    int num;
    printf(" Enter the Number to Find Factorial :");
    scanf("%d",&num);
    printf(" Factorial is %d",fact(num));                               //Function call

}
int fact(int a)                                                                            //Function definition to calculate factorial
{
    if(a==0||a==1)                                                                   //Base Condition
        return(1);
    else
        return(a*fact(a-1));                                                       //Recursive function call
}