/********************************
 * Автор: Щербакова Кристина    *
 * Вариант: 14                  *
 ********************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double t;
  double h, t_cr;
  double n=5;
  double index;
  
  for (index = 0; index < n; ++index) {
  cout << "t = ";
  cin >> t;

  h = 4.87 * sqrt(t);

  if (h < 11) {
      t_cr = 15.2 - 6.55 * h;
  } else {
      t_cr = -56.6 + 0.01 * h;
  }

  cout << fixed << setprecision(2);
  cout << h << endl;
  cout << t_cr << endl;
  }
  return 0;
}
