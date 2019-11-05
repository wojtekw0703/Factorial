#include <stdio.h>
#include <stdlib.h>
#include "Funkcje.h"
#include "zmienna.c"


int main()
{

    printf("Podaj liczbe: ");
    scanf("%d",&n);

    printf("%d! : ",n);
    printf("\nWynik (funkcja int): %d",isilnia(n));
    printf("\nWynik (unsigned short int): %u",sisilnia(n));
    printf("\nWynik (funkcja long long int): %llu",lsilnia(n));
    printf("\nWynik (funkcja rekurencyjna int): %d",rekurencyjnie_silnia(n));
    printf("\nWynik (funkcja rekurencyjna unsigned long long int): %llu",unsigned_lsilnia(n));


    return 0;
}


