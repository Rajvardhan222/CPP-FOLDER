#include<stdio.h>
#include<conio.h>
int main()
{
 int num, a;
 double fact;
 a = 1;
 fact = 1;
 clrscr();
 printf("Enter a no. you want factorial of ");
 scanf("%d", &num);
 while (a <= num)
 {
  fact = fact * a;
  a++;
 }
 printf("%g", fact);
 getch();
 return 0;
}