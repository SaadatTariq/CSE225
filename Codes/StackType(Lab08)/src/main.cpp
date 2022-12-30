#include<iostream>
#include "StackType.cpp"
#include "StackType.h"
using namespace std;
bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		return true;
	} else {
		return false;
	}
}
int precedence(char c) {
	if (c == '*' || c == '/')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}
string InfixTopostfix(StackType<char> s, string infix) {
	string postfix;
	for (int i = 0; i < infix.length(); i++) {
		if (infix[i] >= '0' && infix[i] <= '9') {
			postfix += infix[i];
		} else if (infix[i] == '(') {
			s.Push(infix[i]);
		} else if (infix[i] == ')') {
			while ((s.Top() != '(') && (!s.IsEmpty())) {
				char temp = s.Top();
				postfix += temp;
				s.Pop();
			}
			if (s.Top() == '(') {
				s.Pop();
			}
		} else if (isOperator(infix[i])) {
			if (s.IsEmpty()) {
				s.Push(infix[i]);
			} else {
				if (precedence(infix[i]) > precedence(s.Top())) {
					s.Push(infix[i]);
				} else if ((precedence(infix[i]) == precedence(s.Top()))
						&& (infix[i] == '^')) {
					s.Push(infix[i]);
				} else {
					while ((!s.IsEmpty())
							&& (precedence(infix[i]) <= precedence(s.Top()))) {
						postfix += s.Top();
						s.Pop();
					}
					s.Push(infix[i]);
				}
			}
		}
	}
	while (!s.IsEmpty()) {
		postfix += s.Top();
		s.Pop();
	}
	return postfix;
}
float applyOp(float a, float b, char op) { // @suppress("No return")
	if (op == '+')
		return a + b;
	else if (op == '-')
		return a - b;
	else if (op == '*')
		return a * b;
	else if (op == '/')
		return a / b;
}
float evaluate(string infix) {
	int i;
	StackType<float> values;
	StackType<char> ops;
	for (i = 0; i < infix.length(); i++) {
		if (infix[i] == '  ') {
			continue;
		} else if (infix[i] == '(') {
			ops.Push(infix[i]);
		} else if (isdigit(infix[i])) {
			float val = 0;
			while (i < infix.length() && isdigit(infix[i])) {
				val = (val * 10) + (infix[i] - '0');
				i++;
			}
			values.Push(val);
			i--;
		} else if (infix[i] == ')') {
			while (!ops.IsEmpty() && ops.Top() != '(') {
				float val2 = values.Top();
				values.Pop();
				float val1 = values.Top();
				values.Pop();
				char op = ops.Top();
				ops.Pop();
				values.Push(applyOp(val1, val2, op));
			}
			if (!ops.IsEmpty())
				ops.Pop();
		} else {
			while (!ops.IsEmpty()
					&& precedence(ops.Top()) >= precedence(infix[i])) {
				float val2 = values.Top();
				values.Pop();
				float val1 = values.Top();
				values.Pop();
				char op = ops.Top();
				ops.Pop();
				values.Push(applyOp(val1, val2, op));
			}
			ops.Push(infix[i]);
		}
	}
	while (!ops.IsEmpty()) {
		float val2 = values.Top();
		values.Pop();
		float val1 = values.Top();
		values.Pop();
		char op = ops.Top();
		ops.Pop();
		values.Push(applyOp(val1, val2, op));
	}
	return values.Top();
}
int main() {
	string infix_exp, postfix_exp;
	cout << "Enter a Infix Expression :" << endl;
	cin >> infix_exp;
	StackType<char> S1;
	cout << "INFIX EXPRESSION: " << infix_exp << endl;
	postfix_exp = InfixTopostfix(S1, infix_exp);
	cout << "POSTFIX EXPRESSION: " << postfix_exp << endl;
	float x;
	try {
		x=evaluate(infix_exp);
	} catch (EmptyStack &e) {
		cout << "Invalid Expression";
	}
	cout<<"Output: "<<x;
	return 0;
}
