#ifndef FUNCTION_H
#define FUNCTION_H
#include"wordlist.h"
#include<fstream>
#include<thread>
void Box::wordgen()
{
	srand(time(NULL));
	std::ofstream uFile;
	uFile.open("Password.txt",std::ios::app);
	if(uFile.fail())
	{
		std::cerr << "Failed to open File" << std::endl;
	}

	std::cout << "Enter lenght\n: ";
	std::cin  >> lenght;
	std::cout << "How many passwords you want: example: 10 \n:";
	std::cin  >> var;
	for(int count=0;count <= var;count++)
	{
	using namespace std::literals::chrono_literals;
		for(int i=0;i<=lenght;i++)
		{
			std::this_thread::sleep_for(1s);
			num = rand() % 74 +1;
			uFile << charecter[num];	
		}
	uFile << "\n";
	}
	std::cout << "Looks for Password.txt in same folder." << std::endl;
}
#endif
