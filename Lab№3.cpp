#include <iostream>
#include <iomanip>
using namespace std;
void func(int** arr, int n)

{
	int n2, i, j;
	if (n % 2 == 0)
		n2 = n / 2 - 1;
	else
		n2 = (n - 1) / 2;
	for (i = 0; i < n; i++) {
		if (i <= n2) {
			for (j = n2 + 1; j < n; j++)
				arr[i][j] = 0;

		}
		else {
			for (j = 0; j <= n2; j++)
				arr[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << setw(4) << arr[i][j];
		cout << endl << endl;
	}
}
int main() {
	int** arr, n;
	cout << "Matrix size = ";
	cin >> n;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 1;
		}
	}
	func(arr, n);
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
	return 0;
}




