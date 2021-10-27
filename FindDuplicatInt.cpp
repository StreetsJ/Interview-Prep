
#include<iostream>
#include<iomanip>

using namespace std;


// This function takes O(n * (n - 1)/2) = O(n^2) time
int find_duplicate_integer(int* arr, int n)
{
  int cnt = 0;
  int i, j = 0;
  int time_complexity = 0;
  for (i = 0; i < n; i++)
  {
    cnt = 1;
    time_complexity++;
    // cout << "--Testing: " << arr[i] << endl;
    for (j = i + 1; j < n; j++)
    {
      // cout << "\t Comparing to:" << arr[j] << endl;
      time_complexity++;
      if (arr[i] == arr[j]) cnt++;
      if (cnt > 1) 
      {
        cout << "n = " << n << " and finished with " << time_complexity << " iterations\n";
        return arr[i];
      }
    }
  }

  return -1;
}

int main()
{
  // Test 1
  int n = 4;
  int* test{ new int[n+1]{1, 2, 3, 2, 4} };
  cout << "Test array1: \n" << setw(4);
  for (int i = 0; i < n+1; i++) cout << test[i] << ' ';
  cout << endl;

  cout << find_duplicate_integer(test, n+1) << endl;

  delete[] test;

  // Test 2
  n = 7;
  test = { new int[n+1]{1, 6, 3, 6, 5, 5, 1, 2} };

  cout << "Test array1: \n" << setw(4);
  for (int i = 0; i < n+1; i++) cout << test[i] << ' ';
  cout << endl;

  cout << find_duplicate_integer(test, n+1) << endl;

  delete[] test;

  // Test 3
  n = 9;
  test = { new int[n+1]{1, 2, 3, 4, 5, 6, 7, 8, 9, 9} };

  cout << "Test array1: \n" << setw(4);
  for (int i = 0; i < n+1; i++) cout << test[i] << ' ';
  cout << endl;

  cout << find_duplicate_integer(test, n+1) << endl;

  delete[] test;

  // Test 4
  n = 4;
  test = { new int[n+1]{1, 2, 3, 4, 4} };

  cout << "Test array1: \n" << setw(4);
  for (int i = 0; i < n+1; i++) cout << test[i] << ' ';
  cout << endl;

  cout << find_duplicate_integer(test, n+1) << endl;

  delete[] test;

  return 0;
}