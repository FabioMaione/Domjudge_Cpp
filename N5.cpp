#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	bool controllo=false;
	cin>>a>>b>>c;

	if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
		controllo=true;

	if(controllo==false)
		cout<<"NO";
	else
	{
		if((a==b) && (a==c))
			cout<<"TRIANGOLO EQUILATERO";
		else if((a==b && a!=c)||(a==c && a!=b)||(b==c && b!=a))
			cout<<"TRIANGOLO ISOSCELE";
		else
			cout<<"TRIANGOLO SCALENO";
	}


	return 0;
}
