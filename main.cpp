#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(5);
  
  for(auto item:nums)
  {
    cout << item << ' ';
  }
  cout << '\n';
  cout << "there are " << count(begin(nums), end(nums), 3) << " threes";
  cout  << '\n';
  cout << "At place 1 is a " << nums[1];
  cout  << '\n';

  return 0;
}