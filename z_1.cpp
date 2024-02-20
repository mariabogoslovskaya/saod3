#include <iostream>
#include <string>
#include "utils.h"
using namespace std;

void super();

int main(){
	setlocale(LC_ALL, "ru");

	char st[10] = "lala";
	string str = "popo";

	int x, y;
	cout << "x = "; 
	cin >> x; 
	cout << "y = "; 
	cin >> y; 
	cout << x << " + " << y << " = " << x + y << endl;


	cout << st << " " << str << endl;

	int a;
	cin >> a;
	cout << 2 * a;

	super();
	cout << endl;
	cout << minn(5, 6) << endl;
	cout << sum(5, 6) << endl;
	system("pause");
	return 0;
}

void super() {
	cout << "супер!";
}