#include <iostream>
#include <stack>
using namespace std;

int cases;
char input;
bool blue = false;
bool red = false;
stack <char> reversalPurple;

int main() {
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> input;
		if (input == '(' && blue == false) {
			reversalPurple.push(input);
			blue = true;
		}
		else if (input == '[' && blue == false) {
			reversalPurple.push(input);
			blue = true;
		}
		else if (input == '{' && blue == false) {
			reversalPurple.push(input);
			blue = true;
		}
		if (input == ')' && red == false && reversalPurple.top() == '(') {
			reversalPurple.pop();
			red = true;
		}
		else if (input == ']' && red == false && reversalPurple.top() == '[') {
			reversalPurple.pop();
			red = true;
		}
		else if (input == '}' && red == false && reversalPurple.top() == '{') {
			reversalPurple.pop();
			red = true;
		}
	}
	cout << "\n";
	if (reversalPurple.size() > 0) {
		cout << "the size is: " << reversalPurple.size() << '\n';
		cout << "the top is: " << reversalPurple.top() << '\n';
	}
	else
		cout << "The number of parantheses, braces, and curly braces are 'balanced'\n";
}