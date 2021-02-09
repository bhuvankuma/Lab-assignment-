#include <stdio.h>
#include <conio.h>
void printeven(int, int);
int main()
{
    int m, i, n;
    printf("Enter the range of numbers within which you want to print all the even numbers. First input M(lower limit) then, N(higher limit). \n");
    scanf("%d %d", &m, &n);
    printeven(m, n);
    getch();
    return 0;
}
void printeven(int a, int b)
{
    int i;
    i = a;
    printf("The even numbers ranging from %d to %d are : ", a, b);
    while (i <= b)
    {
        if (i % 2 == 0)
        {
            printf("%d , ", i);
        }
        i++;
    }
    return;
}
