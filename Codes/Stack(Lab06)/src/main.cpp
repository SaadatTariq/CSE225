#include <iostream>
#include "StackList.cpp"
using namespace std;

void PrintStack(StackType<char> S1) {
	StackType<char> temp;
	while (!S1.IsEmpty()) {
		temp.Push(S1.Top());
		S1.Pop();
	}
	while (!temp.IsEmpty()) {
		int t = temp.Top();
		cout << t << " ";
		temp.Pop();

		S1.Push(t);
	}
}
/*int main() {
	StackType<int> S1;
	int n;
	if (S1.IsEmpty()) {
		cout << "Stack is empty" << endl;
	} else {
		cout << "Stack is not empty" << endl;
	}
	cout << "Push 4 items : " << endl;
	for (int i = 0; i < 4; i++) {
		cin >> n;
		S1.Push(n);
	}
	if (S1.IsEmpty()) {
		cout << "Stack is empty" << endl;
	} else {
		cout << "Stack is not empty" << endl;
	}
	if (S1.IsFull()) {
		cout << "Stack is Full" << endl;
	} else {
		cout << "Stack is not Full" << endl;
	}
	PrintStack(S1);
	cout << endl;
	int x;
	cout << "Enter New Element: " << endl;
	cin >> x;
	S1.Push(x);
	PrintStack(S1);
	cout << endl;
	if (S1.IsFull()) {
		cout << "Stack is Full" << endl;
	} else {
		cout << "Stack is not Full" << endl;
	}
	S1.Pop();
	S1.Pop();
	x = S1.Top();
	cout << x << endl;
}*/
bool areBracketsBalanced(string p)
{
	// Declare a stack to hold the previous brackets.
	StackType<char> temp;
	for (int i = 0; i < p.length(); i++) {
		if (temp.IsEmpty()) {
			// If the stack is empty
			// just push the current bracket
			temp.Push(p[i]);
		}
		else if ((temp.Top() == '(' && p[i] == ')')) {
			// If we found any complete pair of bracket
			// then pop
			temp.Pop();
		}
		else {
			temp.Push(p[i]);
		}
	}
	if (temp.IsEmpty()) {
		// If stack is empty return true
		return true;
	}
	return false;
}

// Driver code
int main()
{
	string expr = "(()())";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
