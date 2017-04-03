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
	string threadFileName = "/home/willy/gitLocal/PullProj/file2.txt";//"../file2.txt";
	thread myThread(threadRead, threadFileName, std::ref(threadRes));

	string mainRes = "";
	StreamReader mainReader("/home/willy/gitLocal/PullProj/file1.txt");//("../file1.txt");
	mainReader.Read();
	mainRes = mainReader.GetResult();
	
	myThread.join();
	int a, b, c;

	cout << mainRes + threadRes << endl;

	for (;;);
}



