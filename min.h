#include <algorithm>

int min(int* tab, int size)
{
   return *std::min_element(tab, tab + size);
}
