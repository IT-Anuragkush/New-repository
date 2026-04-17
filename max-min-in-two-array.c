#include <stdio.h>

// int main()
// {
//   int arr1[5] = {5,6,8,4,5};
//   int arr2[5] = {5,8,6,9,3};

//   int max1 = arr1[0];
//   for(int i = 0; i < 5; i++)
//   {
//     if(arr1[i] > max1)
//     {
//       max1 = arr1[i];
//     }
//   }
//   // printf("max1 is : %d \n", max1);

//   int max2 = arr2[0];
//   for(int i = 0; i < 5; i++)
//   {
//     if(arr2[i] > max2)
//     {
//       max2 = arr2[i];
//     }
//   }
//   // printf("max2 is : %d \n", max2);

//   max1>max2 ? printf("max in first array : %d", max1):printf("max in second array : %d", max2);
// }

int main()
{
  int arr1[5] = {5,6,8,4,5};
  int arr2[5] = {5,8,6,9,3};

  int max = arr1[0];
  for(int i = 0; i < 5; i++)
  {
    if(arr1[i] > max)
    {
      max = arr1[i];
    }
    if(arr2[i] > max)
    {
      max = arr2[i];
    }
  }
   printf("max is : %d \n", max);
}