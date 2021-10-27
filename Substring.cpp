#include<string>
#include<iostream>

using namespace std;

bool ip_is_valid(string ip_addr)
{
  cout << "Ip address: " << ip_addr << endl;

  while (ip_addr.size() > 2)
  {
    string ip1 = ip_addr.substr(0, ip_addr.find('.'));
    if (stoi(ip1) >= 0 && stoi(ip1) < 256) ;
    else return false;
    ip_addr = ip_addr.substr(ip_addr.find('.') + 1, ip_addr.size()-1);
  }

  return true;
}

int main()
{
  string ip_addr = "192.102.98.10";

  if (ip_is_valid(ip_addr)) cout << "Test PASSED, ip address is VALID\n";
  else cout << "Test FAILED, ip address is VALID\n";

  ip_addr.clear();
  ip_addr = "192.102.98.256";

  if (ip_is_valid(ip_addr)) cout << "Test FAILED, ip address is NOT VALID\n";
  else cout << "Test PASSED, ip address is NOT VALID\n";

  return 0;
}