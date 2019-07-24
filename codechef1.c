/*
 Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.
Input

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.
Output

Display the second largest among A, B and C.
Constraints

    1 ≤ T ≤ 1000
    1 ≤ A,B,C ≤ 1000000




*/


#include <stdio.h>
#include <string.h>

int main() 
{
    int t,ab,c;
    //printf("enter number of testcases ");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
   {
  //printf("\nenter 3 numbers ");
    scanf("%d %d %d",&a,&b,&c);

if((b>a && c<a)||(c>a && b<a))
{
printf("\n%d ",a);
}

else if((a>b && c<b)||(c>b && b>a))
{
printf("\n%d ",b);
}

else
{

printf("\n%d ",c);

}

 }
   return 0;
}
