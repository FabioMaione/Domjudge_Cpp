#include <iostream>
using namespace std;

int inverti (int n)
{
	int inv=0;

	while(n!=0)
	{
		inv=inv*10 + n%10;
		n/=10;
	}

	return inv;

}

int main()
{
	int num;
	cin>>num;
	int ninv=inverti(num);
	int dif;
	dif=num-ninv;
	cout<<dif;
return 0;
}
