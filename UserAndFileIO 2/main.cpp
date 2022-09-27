#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

double mean(int val1, int val2, int val3, int val4);
string inputFileName = "inMeanStd.dat";
string outputFileName = "outMeanStd.dat";

int main()
{
	int val1;
	{
		cout << "Enter value #1:\t";
		cin >> val1;
	}
	int val2;
	{
		cout << "Enter value #2:\t";
		cin >> val2;
	}
	int val3;
	{
		cout << "Enter value #3:\t";
		cin >> val3;
	}
	int val4;
	{
		cout << "Enter value #4:\t";
		cin >> val4;
	}
	cout << endl << "Result of the mean and population standar deviation: \t" << mean(val1, val2, val3, val4);

}

double mean(int val1, int val2, int val3, int val4) 
{
		return  (val1, val2, val3, val4);
}

int main2()
{
		ifstream infile;
		infile.open(inputFileName);
		string readIn;
		int vala, valb, valc, vald;
		infile >> vala;
		infile >> valb;
		infile >> valc;
		infile >> vald;
	
		cout << readIn;

		ofstream outfile;
		outfile.open(outputFileName);
	
		outfile << readIn;
		return 0;

}