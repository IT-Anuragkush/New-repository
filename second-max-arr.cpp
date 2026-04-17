#include <iostream>
#include <vector>
using namespace std;

int secondmaximum(vector<int> &arr){

  int firstmx = arr[0];
  int secondmx = arr[0];

  for(int i = 0; i<arr.size(); i++){
    if(arr[i] > firstmx){
      secondmx = firstmx;
      firstmx = arr[i];
    }
    else if(arr[i] > secondmx && arr[i] != firstmx){
      secondmx = arr[i];
    }
  }
  return secondmx;
}
int main(){
  vector<int> arr = {20,30,60,80,90,50};

  cout << secondmaximum(arr);
}