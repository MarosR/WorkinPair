#include <cstdlib>

void generuj(int tab[],int n)
{
    for(int i=0;i<n;++i)
    {
        tab[i]=(rand()%100)+1; // od 1 do 100
    }
}