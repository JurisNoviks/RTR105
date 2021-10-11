#include <stdio.h>

int main()
{
    printf("Ievadiet skaitli (0 - 255)- ");
    char a;
    scanf("%d", &a);
    for (int i =0; i < 8; i++)
        printf("%d", a & (1 << (7 - i)) ? 1 : 0);
    printf("\n");
    return 0;
}
