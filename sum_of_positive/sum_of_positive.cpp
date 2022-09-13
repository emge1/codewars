#include<iostream>
#include<vector>
using namespace std;

int sumOfPositive (const std::vector<int> &arr){
  int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > 0) sum += arr[i];
    }
  return sum;
}

int main() {
    int x = sumOfPositive(std::vector <int> {1,2,3,4,5});
    cout << x << endl;
    int y = sumOfPositive(std::vector <int> {-1,-2,-3,-4,-5});
    cout << y << endl;
}