// Write, a C Program to convert Decimal number to Binary number and vice versa.
#include <stdio.h>
#include <math.h>
void main()
{
    int ch, dec, temp = 0, a[20], i = 0, c = 0, bin, rem, dec_1, j = 0, x;
    printf("Enter your choice :\n 1.decimal to binary \n2.Binary to decimal:->");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter the decimal no :");
        scanf("%d", &dec);
        while (dec > 0)
        {
            temp = dec % 2;
            dec /= 2;
            a[i] = temp;
            i++;
        }
        while (i - 1 >= 0)
        {
            i--;
            printf("%d", a[i]);
        }
        break;
    case 2:
        printf("Enter the binary number :->");
        scanf("%d", &bin);
        while (bin > 0)
        {
            rem = bin % 10;
            x = rem * pow(2, j);
            dec_1 += x;
            bin = bin / 10;
            j++;
        }
        printf("%d", dec_1);
    default:
        break;
    }
}