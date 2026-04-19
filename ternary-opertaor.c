#include <stdio.h>

int main()
{
  int a = 20, b = 10;

  int max = a > b ? a : b;

  printf("maxmum number : %d", max);

  // a > b ? printf("a is greater"):printf("b is greater");

  return 0;
}