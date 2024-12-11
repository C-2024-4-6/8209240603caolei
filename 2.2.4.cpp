#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size1) {
		list3[k++] = list1[j++];
	}
}
int main() {
	int list1[80], size1;
	int list2[80], size2;
	cout << "Enter size1:" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:" << endl;
	cin >> size2 ;
	for (int i = 0; i < size2 ; i++) {
		cin >> list2[i];
	}
	int list3[80];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 +size2; i++) {
		cout << list3[i] << " ";
	}
	
}