#include <stdio.h>

int main()
{
    char inp1, inp2, inp3, type;
    char res_str[6] = "     ";

    printf("Ievadiet 3 skailjus ");
    scanf(" %c %c %c", &inp1, &inp2, &inp3);
    printf("Ievadiet + vai -, lai sakartotu augoshaa vai dilstoshaa secibaa: ");
    scanf(" %c", &type);

    int dir = type == '+' ? -1 : 1, start = type == '+' ? 4 : 0;


    if (inp1 > inp2)
        if (inp1 > inp3)
        {
            res_str[start] = inp1;
            if (inp3 > inp2)
            {
                res_str[start + dir * 2] = inp3;
                res_str[start + dir * 4] = inp2;
            }
            else
            {
                res_str[start + dir * 2] = inp2;
                res_str[start + dir * 4] = inp3;
            }
        }
        else
        {
            res_str[start] = inp3;
            res_str[start + dir * 2] = inp1;
            res_str[start + dir * 4] = inp2;
        }
    else
    {
        if (inp2 > inp3)
        {
            res_str[start] = inp2;
            if (inp3 > inp1)
            {
                res_str[start + dir * 2] = inp3;
                res_str[start + dir * 4] = inp1;
            }
            else
            {
                res_str[start + dir * 2] = inp1;
                res_str[start + dir * 4] = inp3;
            }
        }
        else
        {
            res_str[start] = inp3;
            res_str[start + dir * 2] = inp2;
            res_str[start + dir * 4] = inp1;
        }
    }

    printf("Rezultats: %s\n", res_str);

    return 0;
}
