#include <iostream>
#include <string>

using namespace std;

void merge_sorted_vectors(int* vector1, int size1, int* vector2, int size2, int* result) {
	int i = 0, j = 0, k = 0;

	while (i < size1 && j < size2) {
		if (vector1[i] < vector2[j]) {
			result[k] = vector1[i];
			++i;
		}
		else {
			result[k] = vector2[j];
			++j;
		}
		++k;
	}

	while (i < size1) {
		result[k] = vector1[i];
		++i;
		++k;
	}
	while (j < size2) {
		result[k] = vector2[j];
		++j;
		++k;
	}
}
void randSortedVect(int* vect, int size, int min, int max) {
	if (min > max) { swap(min, max); }
	for (int i = 0; i < size; i++) {
		vect[i] = rand() % (max - min + 1) + min;
	}

	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (vect[j] < vect[minIndex])
				minIndex = j;
		}
		swap(vect[i], vect[minIndex]);
	}
}
string vectToString(int* vect, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s += to_string(*(vect + i)) + " ";
	}
	return s;
}

int main() {
	srand(time(0));
	int size1, size2, min1, max1, min2, max2;
	do {
		cout << "Input size of first and size of second array: ";
		cin >> size1 >> size2;
	} while (size1 <= 0 || size2 <= 0);
	cout << "Input min and max of arrays: ";
	cin >> min1 >> max1 >> min2 >> max2;

	int* vector1 = new int[size1];
	int* vector2 = new int[size2];
	int* result = new int[size1 + size2];
	randSortedVect(vector1, size1, min1, max1);
	randSortedVect(vector2, size2, min2, max2);
	cout << "Array 1: " << vectToString(vector1, size1) << "\n";
	cout << "Array 2: " << vectToString(vector2, size2) << "\n";
	merge_sorted_vectors(vector1, size1, vector2, size2, result);

	cout << "Resulting vector: " << vectToString(result, size1+size2) << "\n";
	return 0;
}
