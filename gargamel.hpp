#include <iostream>
#include <cstdio>

using namespace std;

class gargamel
{
	
private:
	int x;
	int y;
	
public:
	gargamel()
	{
	srand(time(NULL));
	x=rand() % 256;
	y=rand() % 256;
	}

	void changeDir()
	{
	x += (rand() % 3) * ( rand() %3 == 0 ? -1:1};
	y += (rand() % 3) * ( rand() %3 == 0 ? -1:1};	
	}		
};

