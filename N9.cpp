#include <iostream>
using namespace std;


int main()
{
	int n;
	int cont=0;

	cin>>n;
	while(n!=0)
	{
		if(n%2!=0 && n%3==0)
			cont++;
		cin>>n;
	}
	cout<<cont;


	return 0;
}
