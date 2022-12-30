#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}
int main(void){
	int x=5, y=10;
	cout<< "Before Swap: ";
	cout<< "X= "<<x<<", Y= "<< y << endl;
	swap(&x, &y);
	cout<< "After Swap: ";
	cout<< "X= "<<x<<", Y= "<< y << endl;
	return 0;
}

