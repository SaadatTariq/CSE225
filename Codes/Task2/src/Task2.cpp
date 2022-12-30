#include <iostream>
using namespace std;
int main(){
	int rows, cols;
	cout<<"Enter number of rows: ";
	cin>>rows;
	cout<<"Enter number of columns: ";
	cin>>cols;
	char **arr = new char*[rows];
	for (int i = 0; i < cols; i++){
		arr[i] = new char[cols];
	}
	cout<<"Enter "<<rows<<" strings of max length "<<cols<<":"<<endl;
	for(int i=0;i<rows;i++){
		cin>>arr[i];
	}
	cout<<"\nThe entered string are:"<<endl;
	for (int i=0; i<rows; i++) {
		cout<<arr[i]<<endl;
	}
 delete [] arr;
 return 0;
}
