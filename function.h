#ifndef FUNCTION_H
#define FUNCTION_H
#include"wordlist.h"
#include<fstream>
#include<thread>
#include<stdlib.h>
void Box::wordgen()
{
	srand(time(NULL));
	std::ofstream uFile;
	uFile.open("Password.txt",std::ios::app);
	if(uFile.fail())
	{
		std::cerr << "Failed to open File" << std::endl;
	}

	std::cout << "Enter lenght of password\n: ";
	std::cin  >> lenght;
	std::cout << "How many passwords you want(example: 10) \n:";
	std::cin  >> var;

	for(int count=0;count <= var;count++)
	{
	using namespace std::literals::chrono_literals;
		for(int i=0;i<=lenght;i++)
		{	
            system("clear");
			std::cout << "Working Wait.." << std::endl;
			std::this_thread::sleep_for(1s);
			num = rand() % 74 +1;
			uFile << charecter[num];	
		}
	uFile << "\n";
	}
	std::cout << "Look for Password.txt in current path." << std::endl;
}
void Box::banner()
{
    std::cout << R"(
                        _   _ _     _      _____                           _             
                       | | | (_)   | |    / ____|                         | |            
 __      _____  _ __ __| | | |_ ___| |_  | |  __  ___ _ __   ___ _ __ __ _| |_ ___  _ __ 
 \ \ /\ / / _ \| '__/ _` | | | / __| __| | | |_ |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__|
  \ V  V / (_) | | | (_| | | | \__ \ |_  | |__| |  __/ | | |  __/ | | (_| | || (_) | |   
   \_/\_/ \___/|_|  \__,_| |_|_|___/\__|  \_____|\___|_| |_|\___|_|  \__,_|\__\___/|_|   
                                                                                        
)";
}
#endif
