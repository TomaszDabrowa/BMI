#include <stdio.h>

//deklaracja zmiennych

float masa;
float wzrost;
float bmi;


int main()
{
    printf("Podaj swoja mase w kg: ");
    scanf("%f", &masa);
    printf("Podaj swoj wzrost w m: ");
    scanf("%f", &wzrost);

    bmi = masa / (wzrost*wzrost);

    printf("Twoje BMI to: ");
    printf("%f", bmi);
    printf("Twoj stan to: ");

    if (bmi<16)
    {
        printf("wyglodzenie");
    }

    else if (bmi==100)
    {
        printf("blad");
    }

    if ((bmi>=16)&&(bmi<=16.99))
    {
        printf("wychudzenie");
    }

    if ((bmi>=17)&&(bmi<=18.49))
    {
        printf("niedowaga");
    }

    if ((bmi>=18.5)&&(bmi<=24.99))
    {
        printf("waga prawidlowa");
    }

    if ((bmi>=25)&&(bmi<=29.99))
    {
        printf("nadwaga");
    }

    if ((bmi>=30)&&(bmi<=34.99))
    {
        printf("otylosc 1 stopnia");
    }

    if ((bmi>=35)&&(bmi<=39.99))
    {
        printf("otylosc 2 stopnia");
    }

    if (bmi>=40)
    {
        printf("otylosc 3 stopnia");
    }

    else
    {
        printf("blad");
    }

    return 0;
};
