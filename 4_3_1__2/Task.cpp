#include "Class0.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

void Class1::fillList() {

	cin >> length;

	list = new int[length];

	for (int i = 0; i < length; i++) {
		cin >> list[i];
	}
}
void Class2::printList() {

	for (int i = 0; i < length; i++) {
		printf("%5d", list[i]);
	}
}
void Class2::sortList() {

	int buff;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {

			if (list[j] > list[i]) {
				buff = list[j];
				list[j] = list[i];
				list[i] = buff;
			}
		}
	}
}
void Class3::printInformation() {
	fillList();
	cout << "Array dimension: " << length << endl;
	cout << "The original array:";
	printList();
	sortList();
	cout << '\n' << "An ordered array:";
	printList();
}