#include<iostream>
#include"function.h"
#include"wordlist.h"
#include<ctime>
#include<thread>
int main()
{
	Box b;
	std::thread work(&Box::wordgen, b);
	if(work.joinable())
		work.join();
}
