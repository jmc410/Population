#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  int days;
  double population, dailyInc;

  cout << "Input the initial population (min 2): ";
  cin >> population;
  while (population < 2) {
    cout << "Invalid. Retry: ";
    cin >> population;
  }

  cout << "Enter the daily increase (min 0): ";
  cin >> dailyInc;
  while (dailyInc < 0) {
    cout << "Invalid. Retry: ";
    cin >> dailyInc;
  }

  cout << "Enter the number of days (min 1): ";
  cin >> days;
  while (days < 1) {
    cout << "Invalid. Retry: ";
    cin >> days;
  }

  cout << fixed << setprecision(2);
  cout << "\nDay\tPopulation\n";

  for (int i = 1; i <= days; i++) {
    cout << i << "\t" << population << endl;
    population += (population * dailyInc / 100);
  }

  return 0;

}