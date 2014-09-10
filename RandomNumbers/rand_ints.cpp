#include <chrono>
#include <iostream>
#include <random>

using namespace std;

int main() {
  // Mersenne Twisters require a seed value
  // Use the current epoch time stamp
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();

  mt19937 int_gen(seed);

  cout << "5 random ints:\n";
  for (int i = 0; i < 5; i++) {
    cout << int_gen() << "\n";
  }
  cout << endl;

  cout << "5 random ints in the range [0, 10):\n";
  for (int i = 0; i < 5; i++) {
    cout << int_gen() % 10 << "\n";
  }
  cout << endl;

  return 0;
}
