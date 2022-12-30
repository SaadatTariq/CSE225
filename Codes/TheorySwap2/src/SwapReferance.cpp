#include<iostream>
using namespace std;

void swap(int &ref1, int &ref2){
	int temp;
	temp = ref1;
	ref1 = ref2;
	ref2=temp;
}
int main(void){
	int x=5, y=10;
	cout<< "Before Swap: ";
	cout<< "X= "<<x<<", Y= "<< y << endl;
	swap(x, y);
	cout<< "After Swap: ";
	cout<< "X= "<<x<<", Y= "<< y << endl;
	return 0;
}

