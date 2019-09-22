#include<iostream>
#include"function.h"
#include"wordlist.h"
#include<ctime>
#include<thread>
int main()
{
	Box b;
    b.banner();
    std::thread work(&Box::wordgen, b);
	if(work.joinable())
	{
		work.join();
	}
}
