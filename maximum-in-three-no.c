#include <stdio.h>

int main()
{
  int a = 20, b = 10, c = 30;

  if(a >= b && a >= c)
  {
    printf("a is greater : %d", a);
  }
  else if(b >= c && b >= a)
  {
    printf("b is greater : %d", b);
  }
  else{
    printf("c is greater : %d", c);
  }
}