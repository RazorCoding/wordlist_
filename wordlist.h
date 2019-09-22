#ifndef WORDLIST_H
#define WORDLIST_H
#define SIZE 90
class Box
{
	private:                                                                                                       
		char charecter[SIZE] = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*()1234567890-=+_?/>.<,:;"};
		int lenght,num,var;
	public:
		void wordgen();
        void banner();
};

#endif
