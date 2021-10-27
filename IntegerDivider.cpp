#include<iostream>

using namespace std;

int integer_divider(int a, int b)
{
  int temp = a;
  int res = 1;
  while ((temp - b) > b)
  {
    temp -= b;
    res++;
  }
  
  return res;
}

int main()
{
  // Test 1
  int a = 3, b = 3;
  printf("Test values (%d, %d)\n", a, b);

  printf("%d / %d = %d\n", a, b, integer_divider(a, b));

  // Test 2
  a = 5, b = 3;
  printf("Test values (%d, %d)\n", a, b);

  printf("%d / %d = %d\n", a, b, integer_divider(a, b));

  // Test 3
  a = 9, b = 3;
  printf("Test values (%d, %d)\n", a, b);

  printf("%d / %d = %d\n", a, b, integer_divider(a, b));

  // Test 4
  a = 10, b = 3;
  printf("Test values (%d, %d)\n", a, b);

  printf("%d / %d = %d\n", a, b, integer_divider(a, b));


  return 0;
}