#include <iostream>

using namespace std;

int main()
{
  int size = 5, largest = INT32_MIN;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  cout << largest << endl;

  return 0;
}