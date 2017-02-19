#pragma once
#include <iostream>
using namespace std;
class DynamicArray
{
public:
	DynamicArray() {};
	void Old();
};

void DynamicArray::Old()
{
	
	int numSequence, numQueries, k;

	std::cin >> numSequence >> numQueries;

	// sequence
	int** array = new int*[numSequence];
	// query 
	int** query = new int*[numQueries];

	for (int i = 0; i<numSequence; i++)//rows
	{
		std::cin >> k;
		array[i] = new int[k];//how many columns
		  
		for (int j = 0; j<k; j++) {
			std::cin >> array[i][j];
		}
	}
	//cout << array[0][0]<<" "<<array[1][0];

	
	for (int i = 0; i<numQueries; i++) {
		query[i] = new int[2];
		std::cin >> query[i][0] >> query[i][1];
		std::cout << array[query[i][0]][query[i][1]] << std::endl;
	
	}
	

	/*
	int numSequence;
	int numQueries;
	int size;

	// ask number of sequences and queries respectively
	cin >> numSequence >> numQueries;

	// where to store the sequence elements, dynamically allocate
	int** arr = new int*[numSequence];
	// where to store numbers for the queries, dynamically allocate
	int**   query = new int*[numQueries];

	// now enter sequences
	for (int i = 0; i < numSequence; i++) {
		cin >> size;
		arr[i] = new int[size];             // allocate memory for integer array
		for (int j = 0; j < size; j++) {    // enter numbers in the sequence
			cin >> arr[i][j];
		}
	}

	// now allocate memory for query elements
	for (int i = 0; i < numQueries; i++) {
		query[i] = new int[2];
	}

	// now enter queries
	for (int i = 0; i < numQueries; i++) {
		cin >> query[i][0] >> query[i][1];
	}

	// now output those queries
	for (int i = 0; i < numQueries; i++) {
		cout << arr[query[i][0]][query[i][1]] << endl;
	}
	*/
}