#include <stdio.h>
#include <iostream>
using namespace std;

double func(int* arr, int length) {
	if (length > 0) {
		int a = 0;
	
		for (int i = 0; i < length; i++) {
			a = a + arr[i];
		}
		return (double) (a / length);
	}
	else {
		return 0;
	}
}

double func(double* arr, int length) {
	if (length > 0) {
		double c = 0;
		
		for (int i = 0; i < length; i++) {
			c = c + arr[i];
		}
		return (double) (c / length);
	}
	else {
		return 0;
	}
	}

int main() {
	double res1 = 0;
	double res2 = 0;

	static double arr[5];
	static int ar[5];

	for (int i = 0; i < 5; i++) {
		double x;
		cin >> x;
		arr[i] = x;
	}
	for (int i = 0; i < 5; i++) {
		int x;
		cin >> x;
		ar[i] = x;
	}

	res1 = func(arr, 5);
	res2 = func(ar, 5);
	 
	cout << "Result 1 = " << res1 << endl;
	cout << "Result 2 = " << res2 << endl;

	return 0;
}

