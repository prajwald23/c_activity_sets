#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main() 
{
    printf("Enter the first number: ");
    int a = input();
    printf("Enter the second number: ");
    int b = input();
    int sum = add(a, b);
    output(a, b, sum);
}
int input()
{
    int x;
    scanf("%d", &x);
    return x;
}
int add(int a, int b)
{
    return (a + b);
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n", a, b, sum);
}
