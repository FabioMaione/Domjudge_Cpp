#include <iostream>
using namespace std;


int main()
{
	int cont=0;
	bool z=false;
	int x;
	cin>>x;

	int n;
	cin>>n;

	while(n!=-1)
	{
		if(n==0)
		{
			cont++;
			if(cont >= x)
				z=true;
		}
		else if(n!=0 && z==false)
			cont=0;
		cin>>n;
	}


	if(z==true)
		cout<<"OK";
	else
		cout<<"NO";


	return 0;
}
