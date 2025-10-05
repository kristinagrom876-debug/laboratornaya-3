/********************************
 * Автор: Щербакова Кристина    *
 * Вариант: 14                  *
 ********************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double liftingTime;
  double liftingHeight, averageTemperature;
  int numOfIteration = 5;
  double index;
  int howManyDigitsAfterTheDecimalPoint  = 2;
  
  for (index = 0; index < numOfIteration; ++index) {
  cout << "lifting time = ";
  cin >> liftingTime;

  liftingHeight = 4.87 * sqrt(liftingTime);

  if (liftingHeight < 11.0) {
      averageTemperature = 15.2 - 6.55 * liftingHeight;
  } else {
      averageTemperature = -56.6 + 0.01 * liftingHeight;
  }

  cout << fixed << setprecision(howManyDigitsAfterTheDecimalPoint);
  cout << liftingHeight << endl;
  cout << averageTemperature << endl;
  }
  return 0;
}
