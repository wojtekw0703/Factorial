#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

int isilnia (int n)
{
    int i;
    int wynik = 1;

     for(i=1; i<=n; i++)
     {
         wynik*=i;
     }

     return wynik;
}
unsigned short int sisilnia (int n)
{
    int i;
    unsigned short int wynik = 1;

     for(i=1; i<=n; i++)
     {
         wynik*=i;
     }

     return wynik;
}
long long int lsilnia (int n)
{
      int i;
      long long int wynik = 1;

     for(i=1; i<=n; i++)
     {
         wynik*=i;
     }

     return wynik;
}

int rekurencyjnie_silnia(n)
{
    if (n == 0) return 1;
    else return n*rekurencyjnie_silnia(n-1);
}

unsigned long long int unsigned_lsilnia (int n)
{
    int i;
   unsigned long long int wynik = 1;

     for(i=1; i<=n; i++)
     {
         wynik*=i;
     }

     return wynik;
}


#endif // FUNKCJE_H_INCLUDED
