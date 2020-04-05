#ifndef JustinMath_H
#define JustinMath_H
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
class JustinMath
{
	ifstream in_stream;
	public:
		JustinMath(char*);
		~JustinMath();
		int avg();
		int mad();
		int sum();
};

#endif
