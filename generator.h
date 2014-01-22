#include <cstdlib>

int* generateRandom()
{
  int tab[10];
  for(int i=0; i<10; i++)
  {
     tab[i] =( rand() % 100 );
  }
  return tab;
}