#include <stdio.h>

int main()
{
  int arr[7] = {2,3,5,6,8,2,3};

  int max = arr[0];

  for(int i = 0; i < 7; i++)
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }
  printf("maximum element of this array : %d", max);
}