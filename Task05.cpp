//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void randVect(int* vect, int min, int max, int size);
//string vectToString(int* vect, int size);
//int getMaxModule(int* vect, int size);
//int sum(int* vect, int Index1, int Index2);
//int getNextPosIndex(int* vect, int size, int Index);
//
//int main() {
//	int size, min, max;
//	do {
//		cout << "Input size, min and max value:\n";
//		cin >> size >> min >> max;
//	} while (size <= 0);
//	int* arr = new int[size];
//	randVect(arr, min, max, size);
//	cout << "Array elements: " << vectToString(arr, size);
//	int firstPosIndex = getNextPosIndex(arr, size, -1);
//	int sumI1I2 = sum(arr, firstPosIndex, getNextPosIndex(arr, size, firstPosIndex));
//	int maxModule = getMaxModule(arr, size);
//
//	cout << "Max module is " << maxModule << "\n";
//	cout << "Sum between first and second pos is " << sumI1I2 << "\n";
//
//	return 0;
//}
//
//void randVect(int* vect, int min, int max, int size) {
//	if (min > max) { swap(min, max); }
//	srand(time(0));
//	for (int i = 0; i < size; i++) {
//		vect[i] = rand() % (max - min + 1) + min;
//	}
//}
//string vectToString(int* vect, int size) {
//	string s = "";
//	for (int i = 0; i < size; i++) {
//		s += to_string(*(vect + i)) + " ";
//	}
//	return s;
//}
//int getMaxModule(int* vect, int size) {
//	int max = vect[0];
//	for (int i = 1; i < size; i++) {
//		if (avg(*(vect + i)) > avg(max)) {
//			max = *(vect + i);
//		}
//	}
//	return max;
//}
//int sum(int* vect, int Index1, int Index2) {
//	if (Index1 > Index2) { swap(Index1, Index2); }
//	int sum = 0;
//	for (int i = Index1 + 1; i < Index2; i++) {
//		sum += *(vect + i);
//	}
//	return sum;
//}
//int getNextPosIndex(int* vect, int size, int Index) {
//	for (int i = Index + 1; i < size; i++) {
//		if (*(vect + i) > 0) {
//			return i;
//		}
//	}
//	return Index;
//}