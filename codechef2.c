/*

 Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

Program is very simple, Given two integers A and B, write a program to add these two numbers.
Input

The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.
Output

Add A and B and display it.


*/


#include <stdio.h>

int main() 
{
    int t,a,b;
    //printf("enter number of testcases ");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
   {
   // printf("\nenter 2 numbers ");
    scanf("%d %d",&a,&b);
    printf("\n%d ",a+b);
    }
   return 0;
}
