#include <iostream>
using namespace std;
int main() {
	int row;
	cout << "Enter the number of rows: ";
	cin >> row;
	//cout << "Enter the number of columns: ";
	//cin >> col;
	int *num=new int[row];
	int** mat=new int*[row];

	for(int i=0;i<row;i++){
		cout << "Enter the number of columns ["<<i<<"]: ";
		cin>>num[i];
		mat[i]=new int[num[i]];
	}
	int c=0;
	cout<<"Enter elements: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<num[i];j++) {
			cout << "Row " << i << ":- Enter value " << c++ << ": ";
			cin>>mat[i][j];
		}
	}
	cout<<"You entered: "<<endl;
	for(int i=0;i<row;i++) {
		for(int j=0;j<num[i];j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<row;i++) {
		delete [] mat[i];
	}
	delete [] mat;
	return 0;
}
