
#include "test.h"
#include "common.h"
#include <string>
#include <chrono>
#include <iostream>
#include <thread>

int Test::Print()
{
	for (unsigned int i = 0; i < 300; i++)
	{
		Log::Info(std::to_string(i));
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	return 0;
}