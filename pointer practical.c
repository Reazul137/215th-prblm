#include<stdio.h>
int main()
{
    int *pc, c;

    c=22;
    printf("Adress of C: %d\n",&c);
    printf("Value of C: %d\n\n",c);

    pc=&c;
    printf("Adress of pointer pc : %d\n",pc);
    printf("Content of pointer pc : %d\n\n",*pc);

    c=11;
    printf("Adress of pointer PC: %d\n",pc);
    printf("Content of pointer pe : %d\n\n", *pc);

    *pc=2;
    printf("Adress of C: %d\n",&c);
    printf("Value of C: %d\n\n",c);

    return 0;
}
