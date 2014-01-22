#include <algorithm>

int min(int* tab, int size)
{
  return *std::max_element(tab, tab + size);
}
