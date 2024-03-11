//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void randVect(int* vect, int min, int max, int size);
//string vectToString(int* vect, int size);
//int getMin(int* vect, int size);
//int sum(int* vect, int Index1, int Index2);
//int getFirstPosIndex(int* vect, int size);
//int getLastPosIndex(int* vect, int size);
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
//	int sumFL = sum(arr, getFirstPosIndex(arr,size), getLastPosIndex(arr, size));
//	int minV = getMin(arr, size);
//
//	cout << "Min value is " << minV << "\n";
//	cout << "Sum between first and last pos is " << sumFL << "\n";
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
//int getMin(int* vect, int size) {
//	int min = vect[0];
//	for (int i = 1; i < size; i++) {
//		if (*(vect + i) < min) {
//			min = *(vect + i);
//		}
//	}
//	return min;
//}
//int sum(int* vect, int Index1, int Index2) {
//	if (Index1 > Index2) { swap(Index1, Index2); }
//	int sum = 0;
//	for (int i = Index1 + 1; i < Index2; i++) {
//		sum += *(vect + i);
//	}
//	return sum;
//}
//int getFirstPosIndex(int* vect, int size) {
//	for (int i = 0; i < size-1; i++) {
//		if (*(vect + i) > 0) {
//			return i;
//		}
//	}
//	return -1;
//}
//int getLastPosIndex(int* vect, int size) {
//	for (int i = size - 1; i > 0; i--) {
//		if (*(vect + i) > 0) {
//			return i;
//		}
//	}
//	return -1;
//}