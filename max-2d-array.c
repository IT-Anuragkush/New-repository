#include <stdio.h>

int main()
{
  int arr[3][3] = {{2,5,8},{5,8,9},{5,8,6}};

  int max = arr[0][0];

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j <  3; j++)
    {
      if(arr[i][j] > max)    // for min - if(arr[i][j] < max) 
      {
        max = arr[i][j];
      }
    }
  }
  printf("maximum element of 2d array : %d",  max);
}