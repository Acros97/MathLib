/*
You can test the library here.
*/

#include <iostream>
#include "Math_D.h"
using namespace std;

int main() {
	// example
	float* getArray = getPointer_NormalizeVector_2Dimensional(3, 4);

	for (int i = 0; i <= 1; i++) {
		cout << getArray[i] << " ";
	}

	cout << endl;
	return 0;
}