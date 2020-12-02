#include <iostream>
#include <exception>
using namespace std;

long long factorial(int n)
{
	if (n < 0) throw logic_error("Factorial won't work for a negative number");
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
};

int main()
{
	std::cout << "Please enter a number to calculate the factorial\n";
	int userNumber, result;
	std::cin >> userNumber;
	try 
	{
		result = factorial(userNumber);
	}
	catch (exception ex) 
	{
		cout << ex.what() << endl;
		result = -1;
	}
	cout << "The factorial for " << userNumber << " is " << result << endl;
}

