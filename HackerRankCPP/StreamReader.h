#pragma once
#include<string>
#include <fstream>
using namespace std;

class StreamReader
{
public:
	StreamReader(string fileName);
	void Read();
	string GetResult();
private:
	std::ifstream stream;
	string result;
};

StreamReader::StreamReader(string fileName)
{
	stream.open(fileName, std::ifstream::in);
}

void StreamReader::Read()
{
	if (stream.is_open())
	{
		while (!stream.eof())
		{
			string tmp;
			getline(stream, tmp);
			result += tmp + " " + "\n";
		}
		stream.close();
	}
	else cout << "Unable to open file";
}

string StreamReader::GetResult()
{
	return result;
}

