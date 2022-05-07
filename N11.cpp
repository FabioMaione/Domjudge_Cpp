#include <iostream>
using namespace std;

int main()
{
	unsigned long int n;
	cin>>n;

	int c=0;
	bool trovato=false;

	if(n==0)
		trovato=true;

	while(n!=0)
	{
		c=n%10;
		if(c==0)
			trovato=true;
		n/=10;
	}

	if(trovato==false)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}
