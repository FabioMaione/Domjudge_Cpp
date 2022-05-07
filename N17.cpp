#include <iostream>
using namespace std;

bool pari(int x)
{
	if(x!=0)
	{
		if(x%2==0)
			return true;
		return false;
	}
	else
		return false;
}

bool multi(int x, int y)
{
	if(y!=0)
	{
		int sum=x+y;
		int c=(sum%x);
		int v=(sum%y);
		if(c==0 || v==0)
			return true;
		return false;
	}
	else
		return false;
}


int main()
{
	int n;
	bool ok=false;
	int prec=0;

	cin>>n;

	while(n!=0)
	{
		prec=n;
		cin>>n;

		if(pari(prec) && pari(n))
			ok=true;
		else if(multi(prec, n))
			ok=true;
	}

	if(ok==true)
		cout<<"SI";
	else
		cout<<"NO";


	return 0;
}
