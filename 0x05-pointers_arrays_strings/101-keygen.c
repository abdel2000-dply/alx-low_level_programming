#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 *      passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char pswd[84];
    int i, j, sum = 0;
    int a, b;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        j = rand() % 3;
        if (j == 0)
            pswd[i] = 'A' + rand() % 26;
        else if (j == 1)
            pswd[i] = 'a' + rand() % 26;
        else
            pswd[i] = '0' + rand() % 10;
    }

    while (sum < 2772)
    {
        i = rand() % 10;
        if (pswd[i] >= 'A' && pswd[i] <= 'Z')
            pswd[i] = 'a' + rand() % 26;
        else if (pswd[i] >= 'a' && pswd[i] <= 'z')
            pswd[i] = 'A' + rand() % 26;
        else
            pswd[i] = 'A' + rand() % 26;
        sum = 0;
        for (j = 0; j < 10; j++)
            sum += pswd[j];
    }
    pswd[10] = '\0';
    a = (sum - 2772) / 2;
    b = (sum - 2772) / 2;
    if ((sum - 2772) % 2 != 0)
        a++;
    for (i = 0; pswd[i]; i++)
    {
        if (pswd[i] >= ('A' + a))
        {
            pswd[i] -= a;
            break;
        }
    }
    for (i = 0; pswd[i]; i++)
    {
        if (pswd[i] >= ('A' + b))
        {
            pswd[i] -= b;
            break;
        }
    }
    printf("%s\n", pswd);
    return (0);
}

