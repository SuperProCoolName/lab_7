#include <iostream>
using namespace std;

template<class T> T max(T bebra) {
	const int row = 2, col = 11; 
	int arr[row][col]; 
	srand(time(0)); 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 1 + (rand() % 50);
		}
	}

	cout << "Array before Sorting: " << endl;
	for (int i = 0; i < col; i++) { 
		for (int j = 0; j < row; j++) 
			cout << arr[j][i] << " ";
		cout << endl;
	}

	int i, j, minIndex, temp;
	for (int k = 0; k < col; k++) {
		for (i = 0; i < row - 1; i++) {
			minIndex = i;
			for (j = i + 1; j < row; j++) {
				if (arr[j][k] < arr[minIndex][k])
					minIndex = j;
				if (minIndex != i) {
					temp = arr[i][k];
					arr[i][k] = arr[minIndex][k];
					arr[minIndex][k] = temp;
				}
			}
		}
	}

	cout << "Array after Sorting: " << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return arr[1][bebra];
}

void main() {
	int stroka;
	cout << "Enter stroka: ";
	cin >> stroka;
	cout << max(stroka-1);
}
