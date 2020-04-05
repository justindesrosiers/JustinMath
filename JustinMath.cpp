#include "JustinMath.h"

JustinMath::JustinMath(char* FilePath)
{
	
	in_stream.open(FilePath);
	//Check for connection
	if(in_stream.fail())
	{
		cout << "Failed to open file: " << FilePath << "\n";
		exit(1);
	}
}

JustinMath::~JustinMath()
{
	in_stream.close();
}

int JustinMath::avg()
{
	float sum = 0;
	int count = 0, next = 0;
	// Seek begining of stream
	in_stream.clear();
	in_stream.seekg(0, ios::beg);
	// Calculate the Average
	while(in_stream >> next)
	{
		sum = sum + next;
		count++;
	}
	return (sum / count);
}

int JustinMath::mad()
{
	float deviation = 0, avg = 0;
	int next = 0, count = 0;
	avg = this->avg();
	// Seek begining of stream
	in_stream.clear();
	in_stream.seekg(0, ios::beg);
	//Calculate MAD
	while(in_stream >> next)
	{
		deviation = deviation + abs(avg - next);
		count++;
	}
	return (deviation / count);
}

int JustinMath::sum()
{
	int next = 0, sum = 0;
	//Seek begining of stream
	in_stream.clear();
	in_stream.seekg(0, ios::beg);
	//Calculate the Sum
	while(in_stream >> next)
	{
		sum += next;
	}
	return sum;
}
