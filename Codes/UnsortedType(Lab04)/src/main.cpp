#include<iostream>
#include "UnsortedType.cpp"
#include "UnsortedType.h"

using namespace std;
class studentInfo {
private:
	int id;
	string name;
	double cgpa;
public:
	studentInfo() {
		id = 0;
		name = "";
		cgpa = 0;
	}
	studentInfo(int ID, string n, double cg) {
		id = ID;
		name = n;
		cgpa = cg;
	}
	void Print() {
		cout << id << ", " << name << ", " << cgpa << endl;
	}
};
int main() {
	//Create a list of integers
	UnsortedType<int> list;
	int item, val;
	//Insert four items
	cout << "Insert four items: ";
	for (int i = 0; i < 4; i++) {
		cin >> val;
		list.InsertItem(val);
	}
	//Print the list
	list.ResetList();
	for (int i = 0; i < list.lengthIs(); i++) {
		int item = 0;
		list.GetNextItem(item);
		cout << item << " ";
	}
	cout << endl;
	//Print the length of the list
	cout << "Length of List: " << list.lengthIs() << endl;
	//Insert one item
	cout << "Insert one item: ";
	cin >> val;
	list.InsertItem(val);
	//Print the list
	list.ResetList();
	for (int i = 0; i < list.lengthIs(); i++) {
		int item = 0;
		list.GetNextItem(item);
		cout << item << " ";
	}
	cout << endl;
	//Retrieve 4 and print whether found or not
	item = 4;
	bool found = false;
	list.RetrieveItem(item, found);
	if (found == true) {
		cout << "Item is found" << endl;
	} else {
		cout << "Item is not found" << endl;
	}
	//Retrieve 5 and print whether found or not
	item = 5;
	list.RetrieveItem(item, found);
	if (found == true) {
		cout << "Item is found" << endl;
	} else {
		cout << "Item is not found" << endl;
	}
	//Retrieve 9 and print whether found or not
	item = 9;
	list.RetrieveItem(item, found);
	if (found == true) {
		cout << "Item is found" << endl;
	} else {
		cout << "Item is not found" << endl;
	}
	//Retrieve 10 and print whether found or not
	item = 10;
	list.RetrieveItem(item, found);
	if (found == true) {
		cout << "Item is found" << endl;
	} else {
		cout << "Item is not found" << endl;
	}
	//Print if the list is full or not
	if (list.IsFull()) {
		cout << "List is full";
	} else {
		cout << "List is not full";
	}
	cout << endl;
	//Delete 5
	item = 5;
	list.DeleteItem(item);
	//Print if the list is full or not
	if (list.IsFull()) {
		cout << "List is full";
	} else {
		cout << "List is not full";
	}
	cout << endl;
	//Delete 1
	item = 1;
	list.DeleteItem(item);
	//Print the list
	list.ResetList();
	for (int i = 0; i < list.lengthIs(); i++) {
		int item = 0;
		list.GetNextItem(item);
		cout << item << " ";
	}
	cout << endl;
	//Delete 6
	item = 6;
	list.DeleteItem(item);
	//Print the list
	list.ResetList();
	for (int i = 0; i < list.lengthIs(); i++) {
		int item = 0;
		list.GetNextItem(item);
		cout << item << " ";
	}
	cout << endl;
	studentInfo t;
	UnsortedType<studentInfo> x;
	x.InsertItem(studentInfo(154, "Saadat", 3.63));
	x.InsertItem(studentInfo(120, "ME", 3.51));
	x.ResetList();
	for (int i = 0; i < x.lengthIs(); i++) {
		studentInfo item;
		x.GetNextItem(item);
		item.Print();
	}
	cout << endl;
	x.DeleteItem(studentInfo(154, "Saadat", 3.63));
	x.ResetList();
	for (int i = 0; i < x.lengthIs(); i++) {
		studentInfo item;
		x.GetNextItem(item);
		item.Print();
	}
	cout << endl;
	return 0;
}
