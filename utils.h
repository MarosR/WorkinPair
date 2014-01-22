#include <iostream>
#include <algorithm>

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
