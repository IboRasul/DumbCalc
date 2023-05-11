#include<iostream>

using namespace std;

int main() {


	cout << "Welcome to MyName Calculator Please specify what operation you want to do. press: \n";

	char operation;
	float num1, num2;

	cout << " + sign if you want addition of two number" << endl	
		<< " - sign if you want subtraction of two number" << endl	
		<<	" * sign if you want multiplication of two number" << endl
		<<" / sign if you want divison of two number" << endl 
		<<" % sign if you want modulus of two number" << endl;


	cout << "the number";
	cin >> num1>> num2;
	cout << "now the operation";
	cin >> operation;
	switch (operation) {
	case '+':
		cout << "addition "<< num1 + num2 <<endl;
		break;
	case '-':
		cout << "sub " << num1 - num2 << endl;
		break;
	case '*':
		cout << "multiply" << num1 * num2 << endl;
		break;
	case'/':
		cout << "division" << num1 / num2 << endl;
		break;
		
	}
	system("pause");
	return 0;






	/*if (operation == '+') {
		cout << "you have chosen + sign\n" << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;

		cout << "the result is " << num1 + num2 << endl;
	}
			else if (operation == '-') {
		cout << "you have chosen - sign\n" << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;

		cout << "the result is " << num1 - num2 << endl;
			}


			else if (operation == '*') {
		cout << "you have chosen * sign\n" << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;

		cout << "the result is " << num1 * num2 << endl;
			}

			else if (operation == '/') {	
		cout << "you have chosen / sign\n" << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;

		cout << "the result is " << num1 / num2 << endl;
			}

			else if (operation == '%') {
		cout << "you have chosen % sign\n" << "Enter first number\n";
		cin >> num1;
		cout << "Enter second number\n";
		cin >> num2;

		cout <<"the result is " << (int)num1 % (int)num2 << endl;
	
			}
	*/
}



