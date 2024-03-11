//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void randVect(int* vect, int min, int max, int size);
//string vectToString(int* vect, int size);
//string LocMinIndexes(int* vect, int size);
//string LocMaxIndexes(int* vect, int size);
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
//
//	cout << "\nIndexes of local mins: " << LocMinIndexes(arr, size);
//	cout << "\nIndexes of local maxs: " << LocMaxIndexes(arr, size);
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
//string LocMinIndexes(int* vect, int size) {
//	string s = "";
//	for (int i = 1; i < size - 1; i++) {
//		if (*(vect + i - 1) > *(vect + i) && *(vect + i + 1) > *(vect + i)) {
//			s += to_string(i) + " ";
//		}
//	}
//	return s;
//}
//string LocMaxIndexes(int* vect, int size) {
//	string s = "";
//	for (int i = 1; i < size - 1; i++) {
//		if (*(vect + i - 1) < *(vect + i) && *(vect + i + 1) < *(vect + i)) {
//			s += to_string(i) + " ";
//		}
//	}
//	return s;
//}