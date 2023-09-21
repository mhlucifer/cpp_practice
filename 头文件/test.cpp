# include<iostream>
# include"log.h"
void log(const char* message)
{
	std::cout << message << std::endl;
}
int main()
{
	int x = 5;
	bool comp = x == 5;
	if (comp)
	{
		log("hello world");
	}
	initlog();
	log("hello world");
	return 0;
}