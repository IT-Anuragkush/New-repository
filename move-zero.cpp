#include <iostream>
#include <vector>
using namespace std;

void movezero(vector<int> &arr){
  int k = 0;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] != 0){
      swap(arr[i], arr[k]);
    k++;
    }
  }
}
int main(){
  vector<int> arr = {2,6,0,5,3,0,0,6,5};

  movezero(arr);

  for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}