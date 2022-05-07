#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	while(b==0){
		cin>>b;
	}

	cout << "Somma: " << a+b << endl;
	cout << "Differenza: " << a-b << endl;
	cout << "Moltiplicazione: " << a*b << endl;
	cout << "Quoziente: " << a/b << endl;
	cout << "Resto: " << a%b;

	return 0;
}
 
