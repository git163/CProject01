#include <string>
#include <iostream>

class Log
{
public:
	static void Info(const std::string &st)
	{
		std::cout << "Execute: " << st << std::endl;
	}
};