#include <iostream>

long long factorial (int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*factorial(n-1);
};

int main()
{
	std::cout<<"Please enter a non-negative number to calculate the factorial\n";
	int userNumber;
	std::cin>>userNumber;
	if (userNumber<0)
	{
		std::cout<<"Invalid input";
	}
	else
	{
	std::cout<<"The factorial for "<<userNumber<<" is "<<factorial(userNumber)<<endl;
	};
}
