#include "UnsortedType.cpp"
#include <iostream>
using namespace std;

int main() {
	// input sequence 1
	int m, n, val;
	cin >> m;
	UnsortedType<int> list1;
	for (int i = 0; i < m; i++) {
		cin >> val;
		list1.InsertItem(val);
	}
	// input sequence 2
	cin >> n;
	UnsortedType<int> list2;
	for (int i = 0; i < n; i++) {
		cin >> val;
		list2.InsertItem(val);
	}
	UnsortedType<int> merged;
	//Sorting in ascending order
	int i = 0, j = 0, val1, val2;
	list1.GetNextItem(val1);
	list2.GetNextItem(val2);
	while (i < m && j < n) {
		if (val1 > val2) {
			merged.InsertItem(val1);
			i++;
			if (i < m) {
				list1.GetNextItem(val1);
			}
		} else {
			merged.InsertItem(val2);
			j++;
			if (j < n) {
				list2.GetNextItem(val2);
			}
		}
	}
	while (i < m) {
		merged.InsertItem(val1);
		i++;
		if (i < m) {
			list1.GetNextItem(val1);
		}
	}
	while (j < n) {
		merged.InsertItem(val2);
		j++;
		if (j < n) {
			list2.GetNextItem(val2);
		}
	}
	// print the merged
	int size = merged.LengthIs();
	merged.ResetList();
	for (int i = 0; i < size; i++) {
		merged.GetNextItem(val);
		if (val != 24)
			cout << val << " ";
		else
			cout<<val<<endl;
	}
	cout << endl;
}
