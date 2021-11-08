#include <stdio.h>

void noargnoreturn()
{
    printf("Funkcija bez argumentiem un return vertibam\n");
}

void argnoreturn (int ag1, char ag2, char * ag3)
{
    printf("Funkcija ar argumentiem bez return\n");
}

int noargreturn ()
{
    printf("Funkcija bez argumentiem bet ar return\n");
    return 1;
}

int argreturn (int ag1, char ag2, char * ag3)
{
    printf("Funkcija ar argumentiem un return vrtb\n");
    return 1;
}

int main()
{
    noargnoreturn();
    argnoreturn(1, 2, NULL);
    noargreturn();
    argreturn(1, 2, NULL);
}
