#include "SortedType.cpp"
#include <iostream>

using namespace std;

void printList(SortedType<int> list) {
	list.ResetList();
	for (int i = 0; i < list.LengthIs(); i++) {
		int item = 0;
		list.GetNextItem(item);
		cout << item << " ";
	}
	cout << endl;
}
void printBool(bool found) {
	if (found == true) {
		cout << "Item is found" << endl;
	} else {
		cout << "Item is not found" << endl;
	}
}
int main() {
	//Task1
	SortedType<int> list;
	int item, val;
	//Task2
	cout << list.LengthIs() << endl;
	//Task3
	for (int i = 0; i < 5; i++) {
		cin >> val;
		list.InsertItem(val);
	}
	//Task4
	printList(list);
	//Task5
	item = 6;
	bool found = false;
	list.RetrieveItem(item, found);
	printBool(found);
	//Task6
	item = 5;
	list.RetrieveItem(item, found);
	printBool(found);
	//Task7
	if (list.IsFull()) {
		cout << "List is full";
	} else {
		cout << "List is not full";
	}
	cout << endl;
	//Task8
	item = 1;
	list.DeleteItem(item);
	//Task9
	printList(list);
	//Task10
	if (list.IsFull()) {
		cout << "List is full";
	} else {
		cout << "List is not full";
	}
	return 0;
}
