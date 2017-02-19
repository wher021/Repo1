#pragma once
#include <string>
#include <iostream>

/*
Sample Input
abcd
ef

Sample Output
4 2
abcdef
ebcd af

*/
class StringEx1
{
public:
	StringEx1() 
	{
		std::string string1, string2;
		std::cin >> string1 >> string2;
		std::cout << string1.size() << " " << string2.size() << std::endl;
		std::cout << string1 + string2 << std::endl;

		std::string nstring1 = string2[0] + string1.substr(1, string1.size() - 1);
		std::string nstring2 = string1[0] + string2.substr(1, string2.size() - 1);
		std::cout << nstring1<<+" "+nstring2;
	}
	~StringEx1() {};
};

