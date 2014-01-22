#include <iostream>

void showArrayValues(int *tab, int size)
{
  for (int i = 0; i<size; i++)
  {
    std::cout << "Tab[" << i << "] = "<<tab[i];
  }
}
