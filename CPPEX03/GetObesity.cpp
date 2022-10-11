#include"getObesity.h"

int getObesity(double bmi) {
	int obesity;
	if (bmi < 18.5) {
		obesity = -1;
	}
	else if (bmi < 25) {
		obesity = 0;
	}
	else if (bmi < 30) {
		obesity = 1;
	}
	else if (bmi < 35) {
		obesity = 2;
	}
	else if (bmi < 40) {
		obesity = 3;
	}
	else {
		obesity = 4;
	}

	return obesity;
}