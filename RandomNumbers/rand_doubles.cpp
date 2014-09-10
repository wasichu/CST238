#include <iomanip>
#include <iostream>
#include <limits>
#include <random>

using namespace std;

int main() {
  double lower_bound = numeric_limits<double>::min();
  double upper_bound = numeric_limits<double>::max();

  uniform_real_distribution<double> unid(lower_bound, upper_bound);
  default_random_engine dre;

  cout << "5 random doubles:\n";
  cout << fixed << showpoint << setprecision(2);
  for (int i = 0; i < 5; i++) {
    cout << unid(dre) << "\n";
  }
  cout << endl;

  return 0;
}
