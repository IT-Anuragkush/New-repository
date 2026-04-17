#include <iostream>
#include <vector>
using namespace std;

bool palindrome(vector<int> &arr){
  int start = 0;
  int end = arr.size() - 1;
  while(start <= end){
    if(arr[start] != arr[end]){
      return false;
    }
  start++;
  end--;
  }
  return true;
}

int main(){
  vector<int> arr = {1,2,3,2,1};
  
  bool result = palindrome(arr);

  if(result == true){
    cout << "given vector is a paliindrome : ";
  }
  else
    cout << "not palindrome :";
}