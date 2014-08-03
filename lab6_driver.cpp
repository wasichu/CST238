//--- Test driver for class Account
#include <iostream>

#include "Account.h"

using namespace std;

int main() {
  bool flag;
  Account chase("John", 1000, 1, 50);
  Account citi("Tom", 2000, 2, 50);
  
  flag = (chase == citi);
  cout << "Chase account: " << chase << endl;
  cout << "Citi account: " << citi << endl;
  cout << "Chase == Citi: " << boolalpha << flag << endl;

  chase.deposit(4, 75);
  citi.deposit(5, 10);

  flag = (chase > citi);
  cout << "Chase account: " << chase << endl;
  cout << "Citi account: " << citi << endl;
  cout << "Chase > Citi: " << boolalpha << flag << endl;
 
  chase.withdrawal(4, 75);
  citi.withdrawal(5, 15);

  flag = (chase == citi);
  cout << "Chase account: " << chase << endl;
  cout << "Citi account: " << citi << endl;
  cout << "Chase == Citi: " << boolalpha << flag << endl;
  
  return 0;
}
