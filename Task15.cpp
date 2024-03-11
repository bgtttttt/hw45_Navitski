#include <iostream>
#include <string>

using namespace std;

void randVect(int* vect, int min, int max, int size);
string vectToString(int* vect, int size);
int getMinIndex(int* vect, int size);
int sum(int* vect, int Index1, int Index2);
int countZeros(int* vect, int size);

int main() {
	int size, min, max;
	do {
		cout << "Input size, min and max value:\n";
		cin >> size >> min >> max;
	} while (size <= 0);
	int* arr = new int[size];
	randVect(arr, min, max, size);
	cout << "Array elements: " << vectToString(arr, size);
	int sumAftMin = sum(arr, getMinIndex(arr, size), size);

	cout << "Number of zeros: " << countZeros(arr,size) << "\n";
	cout << "Sum after min is " << sumAftMin << "\n";

	return 0;
}

void randVect(int* vect, int min, int max, int size) {
	if (min > max) { swap(min, max); }
	srand(time(0));
	for (int i = 0; i < size; i++) {
		vect[i] = rand() % (max - min + 1) + min;
	}
}
string vectToString(int* vect, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s += to_string(*(vect + i)) + " ";
	}
	return s;
}
int getMinIndex(int* vect, int size) {
	int minIndex = 0;
	for (int i = 1; i < size; i++) {
		if (*(vect + i) < *(vect+minIndex)) {
			minIndex = i;
		}
	}
	return minIndex;
}
int sum(int* vect, int Index1, int Index2) {
	if (Index1 > Index2) { swap(Index1, Index2); }
	int sum = 0;
	for (int i = Index1 + 1; i < Index2; i++) {
		sum += *(vect + i);
	}
	return sum;
}
int countZeros(int* vect, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(vect + i) == 0) {
			count++;
		}
	}
	return count;
}