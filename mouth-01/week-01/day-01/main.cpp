#include <iostream>

using namespace std;

int ageConverter (const int& years) {
	return years * 365;
}

int main() {
  int years;

	cout << "Insira a quantidade de meses que deseja converter:" << endl;
	cin >> years;

	if (years < 0) {
		return 0;
	}

	cout << ageConverter(years) << endl;
}