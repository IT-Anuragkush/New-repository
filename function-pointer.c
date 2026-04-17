#include <stdio.h>

int sum(int a, int b);

int main()
{
  int a, b;
  printf("Enter two number : ");
  scanf("%d%d", &a,&b);

  int (*ptr) (int, int); 

  ptr = &sum;
  
  int result = ptr(a,b);

  printf("Sum of two number : %d", result);
}

int sum(int a, int b)
{
  return a + b;
}