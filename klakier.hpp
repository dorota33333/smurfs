#include <iostream>
#include <cstdio>
using namespace std;

class klakier
{
 	 int x;
	 int y;
	 int xVelocity;
	 int yVelocity;	
public:
	klakier()
	{
		srand(time(NULL));
		x=rand () % 256;
		y=rand () % 256;
	}
	~`klakier();

	
	void changeDir()
	{
		x += (rand() % 5) * ( rand() % 5 == 0 ? -1:1);
		y += (rand() % 5) * ( rand() % 5 == 0 ? -1:1);
	}
	void fun()
	{
		if (x < 0 || x >256 ) {
			x = 128;
			y = 128;
		 	return;
		}
	if (y < 0 || y > 256 ) {
			x = 128;
			y = 128;
		 	return;
		}
			
	
	
	}



}
