#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "*******"))
		pwd.incorrect = false;

	if (!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}


/*
 the input needs to be 16 chars because the size of the string is 16
 and the last char is \0 and its equal to 0
 and when the user puts a 16 chars string the \0 goes to the incorrect variable
 then the value of it is flase which mean that the password will be correct
 */