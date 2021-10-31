#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VAL_DEF_SIZE 16

char type;

char add_fact(void *val, int i)
{
    char cmp_res;

    if (type == 'c')
    {
        char val_before = *((char *)val);
        *((char *)val) *= i;
        cmp_res = *((char *)val) > val_before;
    }
    else if (type == 'i')
    {
        int val_before = *((int *)val);
        *((int *)val) *= i;
        cmp_res = *((int *)val) > val_before;
    }
    else
    {
        long long val_before = *((long long *)val);
        *((long long *)val) *= i;
        cmp_res = *((long long *)val) > val_before;
    }
    
    return cmp_res;
}

int main()
{
    int d;
    printf("Ievadiet decimalu skaitli ");
    scanf(" %d", &d);

    printf("Izvelties vienu datu tipu - (c - char, i - int, l - long): ");
    scanf(" %c", &type);

    if (type != 'c' && type != 'i' && type != 'l')
    {
        printf("Nepariezs datu tips!\n");
        return 1;
    }

    char my_val[VAL_DEF_SIZE];
    memset(my_val, 0, VAL_DEF_SIZE);
    my_val[0] = 1;
    char last_res;

    for (int i = 2; i <= d; i++)
    {
        last_res = add_fact(my_val, i);
        if (!last_res)
            break;
    }

    if (!last_res && d > 0)
    {
        printf("Izveletais datu tips ir mazs!\n");
        return 1;
    }

    switch (type)
    {
        case 'c':
            printf("Rezultats: %d\n", *((char *)my_val));
            break;
        case 'i':
            printf("Rezultats: %d\n", *((int *)my_val));
            break;
        case 'l':
            printf("RRezultatses: %lld\n", *((long long *)my_val));
            break;
    }

    return 0;
     }
