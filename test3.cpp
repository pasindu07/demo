#include <iostream>
using namespace std;

int gcd(int,int);


int main()
{
	int num1,num2;
	cout << "Finding GCD" << "\n";

	cout << "Enter:";
	cin >> num1 >> num2;

	printf("%d\n",gcd(num1,num2));

return 0;
}

int gcd(int a,int b)
{
	if(b==0)
	return a;
	
	else if(a<b)
		return gcd(b,a);

	else
		return gcd(b,a%b);
}
