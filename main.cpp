#include "utils.h"

#include <iostream>
int main()
{
   int tab[10];
   generuj(tab, 10);
   showArrayValues(tab, 10);
   std::cout<<"Minimum in tab is: "<<min(tab, 10)<<std::endl;
   std::cout<<"Maximum in tab is: "<<max(tab, 10)<<std::endl;
   return 0;
}
