#include <stdio.h>
//Code contributed by Nabhya
void andTable(){
     int a, b, temp, i;
    printf("\tA   B   A.B'\n");
    for (i = 0; i < 4; i++)
    {
        temp = i;
        a = i % 2;
        temp /= 2;
        b = temp % 2;
        printf("\n\t%d    %d    %d\n", b, a, a && b);
    }
}
void orTable(){
     int a, b, temp, i;
    printf("\tA   B   A+B\n");
    for (i = 0; i < 4; i++)
    {
        temp = i;
        a = i % 2;
        temp /= 2;
        b = temp % 2;
        printf("\n\t%d    %d    %d\n", b, a, a || b);
    }
}
void notTable(){
     int a, b, temp, i;
    printf("\tA   A'\n");
    for (i = 0; i < 2; i++)
    {
        temp = i;
        a = i % 2;
        temp /= 2;
        b = temp % 2;
        printf("\n\t%d    %d\n", b,!b);
    }
}
int main()
{
    printf("Truth Table for AND operation\n");
    andTable();
    printf("Truth Table for OR operation\n");
    orTable();
    printf("Truth Table for NOT operation\n");
    notTable();
    return 0;
}