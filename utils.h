#include <algorithm>
#include <cstdlib>
#include <iostream>

void showArrayValues(int *tab, int size)
{
  for (int i = 0; i<size; i++)
  {
    std::cout << "Tab[" << i << "] = "<<tab[i];
  }
}

int sum(int* tab, int size)
{
   return std::accumulate(tab, tab + size, 0);
}

int min(int* tab, int size)
{
   return *std::min_element(tab, tab + size);
}

int max(int* tab, int size)
{
  return *std::max_element(tab, tab + size);
}

void generuj(int tab[],int n)
{
    for(int i=0;i<n;++i)
    {
        tab[i]=(rand()%100)+1; // od 1 do 100
    }
}