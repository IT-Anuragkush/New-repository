#include <iostream>
#include <vector>
using namespace std;

int maxElements(vector<int> &arr)
{
  int max = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}
int main()
{
  vector<int> arr = {20, 50, 60, 80, 30, 10};

  cout << maxElements(arr);
}