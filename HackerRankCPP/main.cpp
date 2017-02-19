#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
//#include "Person.h"
#include "StringEx1.h"
#include "DynamicArray.h"
#include "StreamReader.h"


void threadRead(string fileName, string &res)
{
	StreamReader threadReader(fileName);
	threadReader.Read();
	res = threadReader.GetResult();
}

int main()
{
	string threadRes = "";
	string threadFileName = "../file2.txt";
	thread myThread(threadRead, threadFileName, std::ref(threadRes));

	string mainRes = "";
	StreamReader mainReader("../file1.txt");
	mainReader.Read();
	mainRes = mainReader.GetResult();
	
	myThread.join();
	int a;

	cout << mainRes + threadRes << endl;

	for (;;);
}



