#include <stdio.h>

int main()
{
  int arr[3][3] = {{5,6,8},{6,8,9},{2,6,7}};

  for(int i = 0; i < 3; i++)
  {
    for(int j  = 0; j < 3; j++)
    {
      if( i + j == 2 )
      {
        printf("%d", arr[i][j]);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}