#include "UnsortedType.h"

template <class t>
UnsortedType<t>::UnsortedType() {
	length = 0;
	currentPos = -1;
}
template <class t>
void UnsortedType<t>::MakeEmpty() {
	length = 0;
}
template <class t>
bool UnsortedType<t>::IsFull() {
	return (length == MAX_ITEM);
}
template <class t>
int UnsortedType<t>::lengthIs() {
	return length;
}
template <class t>
void UnsortedType<t>::ResetList() {
	currentPos = -1;
}
template <class t>
void UnsortedType<t>::GetNextItem(t &item) {
	currentPos++;
	item = info[currentPos];
}
template <class t>
void UnsortedType<t>::InsertItem(t item) {
	info[length] = item;
	length++;
}
template <class t>
void UnsortedType<t>::DeleteItem(t item) {
	int location = 0;
	while (item != info[location]) {
		location++;
	}
	info[location] = info[length - 1];
	length--;
}
template <class t>
void UnsortedType<t>::RetrieveItem(t &item, bool &found) {
	found = false;
	int location = 0;
	bool moretosearch = (location < length);
	while (moretosearch && !found) {
		if (item == info[location]) {
			found = true;
			item = info[location];
		} else {
			location++;
			moretosearch = (location < length);
		}
	}
}
