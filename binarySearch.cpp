// Doga Barsgan
// An implementation of Binary Search

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> ar1, int target, int first, int last)
{

  int middle = (first + last) / 2;

  //base case

  if (target == ar1[middle])
  {
    return middle;
  }

  if (target < ar1[middle])
  {
    last = middle;
    return binarySearch(ar1, target, first, last);
  }
  else if (target > ar1[middle])
  {
    first = middle + 1;
    return binarySearch(ar1, target, first, last);
  }

  return -1;

}

int main()
{

  vector<int> array1;

  for (int i = 0; i < 10000; i++)
  {
    array1.push_back(i * 2);
  }

  cout << endl;
  cout << "Index: " << binarySearch(array1, 350, 0, array1.size()) << endl;

  return 0;
  
}