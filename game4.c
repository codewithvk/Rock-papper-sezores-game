#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int winner(int);
int rendomNum(int n)
{
    srand(time(NULL));
    return rand() % n;
}
/*
0 = rock
1 = paper
2 = sesar
*/
void manu()
{
    printf("Select Any One option\n");
    printf("For rock Press 1\n");
    printf("For paper press 2\n");
    printf("For scizors press 3\n");
    //printf("for Exit Press 4\n");
}

void name(int n)
{
    if (n == 1)
    {
        printf("\t\tComputer Select :-rock\n");
    }
    if (n == 2)
    {
        printf("\t\tCompputer Select :-paper\n");
    }
    if (n == 3)
    {
        printf("\t\tComputer Select :-scizors\n");
    }
}

void select(int n)
{
    if (n == 1)
    {
        printf("\t\tYou Select :- rock\n");
    }
    if (n == 2)
    {
        printf("\t\tYou Select :- paper\n");
    }
    if (n == 3)
    {
        printf("\t\tYou Select :-scizors\n");
    }
}
int compared(int a, int b)
{
    if (a == 1 && b == 1)
    {
        printf("\t\trock vs rock\n");
        return (-1);
    }
    if (a == 1 && b == 2)
    {
        printf("\t\trock vs paper\n");
        return (2);
    }
    if (a == 1 && b == 3)
    {
        printf("\t\trock vs scizors\n");
        return (1);
    }
    if (a == 2 && b == 1)
    {
        printf("\t\tPaper vs Rock\n");
        return 2;
    }
    if (a == 2 && b == 2)
    {
        printf("\t\tPaper vs Paper\n");
        return (-1);
    }
    if (a == 2 && b == 3)
    {
        printf("\t\tPaper vs scizors\n");
        return (3);
    }
    if (a == 3 && b == 1)
    {
        printf("\t\tscizors vs rock\n");
        return 1;
    }
    if (a == 3 && b == 2)
    {
        printf("\t\tscizors vs paper\n");
        return (3);
    }
    if (a == 3 && b == 3)
    {
        printf("\t\tscizors vs scizors\n");
        return (-1);
    }
}
void rule()
{
    printf("-----------Game Rule------------\n");
    printf("-> Rock vs scizors then win rock\n");
    printf("-> paper vs scizors then win scizors\n");
    printf("-> paper vs rock then win paper\n");
    printf("-> This Is Not Single Player Game\n");
    printf("--Press Any key For Continues this game\n");
}
int main()
{
    int x, p, s;
    char m[30];
    int pp = 0, cp = 0;
    printf("Welcome To Game\n");
    printf("Enter Your Name\n");
    gets(m);
    printf("Welcome %s to this game\n",m);
    rule();
    getchar();
    manu();
    for (int i = 0; i < 3; i++)
    {
        printf("\t\tPlayer Turn\n");
        printf("\t\t");
        scanf("%d", &x);
        select(x);
        p = (rendomNum(2) + 1);
        name(p);
        s = compared(x, p);
        if (x == s)
        {
            pp++;
        }
        else if (p == s)
        {
            cp++;
        }
        else
        {
            pp++;
            cp++;
        }
        printf("\t\tYour Point:-  %d\n", pp);
        printf("\t\tComputer Point:-  %d\n", cp);
        printf("\n\n");
    }
    if (pp > cp)
    {
        printf("\t\t- - - - - - - - - - - - - - - - - ");
        printf("\t\t********Congratulation************ ");
        printf("\t\t       %s Win Game               ", m);
        printf("\t\t- - - - - - - - - - - - - - - - - ");
    }
    else if (pp < cp)
    {
        printf("\t\t- - - - - - - - - - - - - - - - - ");
        printf("\t\t********Bed Luck******************");
        printf("\t\t       %s Lost             ", m);
        printf("\t\t- - - - - - - - - - - - - - - - - ");
    }
    else
    {
        printf("\t\t-------------Draw-----------------");
    }

    printf("Thanks For Plaing this game\n");
}
