#include <iostream>
#include <fstream>	
#include <cstdlib>
#include "JustinMath.h"

using namespace std;
/**
 * Reads a set of integers from a file.
 * Calculates the Sum, Average and Mean Average Deviation.
 * */
int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int sum, avg, mad;
		JustinMath mathClass(argv[1]);
		avg = mathClass.avg();
		mad = mathClass.mad();
		sum = mathClass.sum();
		//Display results
		cout << "The Sum of the set is: " << sum << endl;
		cout << "The Average of the set is: " << avg << endl;
		cout << "The Mean Average Deviation of the set is: " << mad << endl;
	}
	else
	{
		cout << "Please run the program again with a valid file path...\n";
	}
	return 0;
}

