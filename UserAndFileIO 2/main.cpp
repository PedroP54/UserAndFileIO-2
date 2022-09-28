/*
* Pedro Pablo Aragon 
* C++ Fall of 2022
* Due: sep 30, 2022
* Lab 3 User and File I.O 
* On this lab we needed to be able to calculate the meand and the staandar deviation population, 
for the ones we needed to do 4 values as output from the keyboard and other four values as part of an input file and 
show the answer of the calculations on a output file 
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void meanCalc();
/*My funcion to recall my equation for mean*/
void standardDev();
/* My function to recall my euqation for the standar deviation*/
void keyboard();
/* my function for the values that ar input from the keboard*/
void file();
/*My function for input and the output file*/
int val1;
int val2;
int val3;
int val4;
float mean;
double standard;

string inputFileName = "inMeanStd.dat";
string outputFileName = "outMeanStd.dat";

int main()
{
	keyboard();
	file();

	
	
}

void meanCalc()
{
	mean = (val1 + val2 + val3 + val4) / 4.0;
	/*A setup a function call meanCalc that would calculate 4 values and the divided by 4 */
}
void standardDev()
{
	standard = sqrt(pow((val1 - mean), 2) + pow((val2 - mean), 2) + pow((val3 - mean), 2) + pow((val4 - mean), 2)) / 2;
	/* Equation for standar deviation*/
}
void keyboard()
{
	/*I output statements to ask the user for four values and on my code cin>>val# represents de value that the user choose*/
	cout << "Enter value #1:\t";
	cin >> val1;

	cout << "Enter value #2:\t";
	cin >> val2;

	cout << "Enter value #3:\t";
	cin >> val3;

	cout << "Enter value #4:\t";
	cin >> val4;

	meanCalc();
	standardDev();
	/*On this part I call both of my function, my mean and my stadardDev function in wich each one of these contains there own equation
	so the program will run the prgram and evaluate the equation with the values that the user chooss*/
	cout << endl << "Result of the mean: \t" << mean;
	cout << endl << "Result population standard deviation: \t" << standard;
}
void file()
{
	ifstream infile;
	infile.open(inputFileName);
	/*Ifstream it lets you read content in a file and with infile.open i tell the program to open the file 
	inputFileName the which one is a string for inMeanStd.dat*/
	if (!infile)
		cout << "cant read  the file!";
	/*This states that if the program doesnt find an value it will pop a message that says "cant read file!" */

	infile >> val1;
	infile >> val2;
	infile >> val3;
	infile >> val4;
	/*Tells the prgram to read the 4 values in the file*/
	ofstream outfile;
	outfile.open(outputFileName);
	/*ofstream lets you output information to another file, and with the command outfile.open(outputFileName) 
	I tell the programm that what he gets as a result it will outputed on the other file*/

	outfile << val1 << "	" << val2 << "	" << "	" << val3 << "	" << val4;
	meanCalc();
	standardDev();
	/*Recalled my equations */
	outfile << endl << "Result of mean:\t" << mean;
	outfile << endl << "Result of standard deviation: \t" << standard;
}