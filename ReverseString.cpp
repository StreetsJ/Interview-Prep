#include<string>
#include<iostream>

using namespace std;

string reverse_string(string input)
{
  string res;
  int len = input.size();
  for (int i = 0; i < len; i++) res.push_back(input.at(len-1 - i));

  return res;
}

int main()
{
  string test;
  cout << "Enter test string: ";
  getline(cin, test);
  
  cout << test << endl << "Reversed string is: " << reverse_string(test) << endl;
  
  return 0;
}