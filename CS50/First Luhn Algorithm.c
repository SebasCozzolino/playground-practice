#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long input;
    int counter = 0;
    do
    {
        input = get_long_long("Input: ");
    }
    while (input < 0);

    long long x = input;

    while (input > 0)
    {
        input = input / 10;
        counter++;
    }
    int rleven0 = (x % 10);
    int rlodd0  = (((x % 100) / 10) * 2);
    int rleven1 = ((x % 1000) / 100);
    int rlodd1  = (((x % 10000) / 1000) * 2);
    int rleven2 = ((x % 100000) / 10000);
    int rlodd2  = (((x % 1000000) / 100000) * 2);
    int rleven3 = ((x % 10000000) / 1000000);
    int rlodd3  = (((x % 100000000) / 10000000) * 2);
    int rleven4 = ((x % 1000000000) / 100000000);
    int rlodd4  = (((x % 10000000000) / 1000000000) * 2);
    int rleven5 = ((x % 100000000000) / 10000000000);
    int rlodd5  = (((x % 1000000000000) / 100000000000) * 2);
    int rleven6 = ((x % 10000000000000) / 1000000000000);
    int rlodd6  = (((x % 100000000000000) / 10000000000000) * 2);
    int rleven7 = ((x % 1000000000000000) / 100000000000000);
    int rlodd7  = (((x % 10000000000000000) / 1000000000000000) * 2);

    int oddsum = ((rlodd0 % 10) + ((rlodd0 % 100) / 10));
    oddsum = oddsum + (rlodd1 % 10) + ((rlodd1 % 100) / 10);
    oddsum = oddsum + (rlodd2 % 10) + ((rlodd2 % 100) / 10);
    oddsum = oddsum + (rlodd3 % 10) + ((rlodd3 % 100) / 10);
    oddsum = oddsum + (rlodd4 % 10) + ((rlodd4 % 100) / 10);
    oddsum = oddsum + (rlodd5 % 10) + ((rlodd5 % 100) / 10);
    oddsum = oddsum + (rlodd6 % 10) + ((rlodd6 % 100) / 10);
    oddsum = oddsum + (rlodd7 % 10) + ((rlodd7 % 100) / 10);

    int evensum = rleven0 + rleven1 + rleven2 + rleven3 + rleven4 + rleven5 + rleven6 + rleven7;

    int total = oddsum + evensum;
    int visa = x / 1000000000000000;
    int visav = x / 1000000000000;
    int master = x / 100000000000000;
    int amex = x / 10000000000000;

    if (total % 10 == 0)
    {
        if ((counter == 13 || counter == 16) && (visa == 4 || visav == 4))
        {
            printf("VISA\n");
        }
        else if ((counter == 15) && (amex == 34 || amex == 37))
        {
            printf("AMEX\n");
        }
        else if ((counter == 16) && (master > 50 && master < 56))
        {
            printf("MASTERCARD\n");
        }
        else if ((counter > 16) || (counter < 13) || (counter == 14))
        {
            printf("INVALID\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
