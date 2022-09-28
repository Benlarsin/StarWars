// Ben Larsin
// Date:9/14/2022
// Program Title:Student Score
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> // Header file for input output file

using namespace std;

// Named constants

int main()
{

	string name1, name2, name3, name4, name5, name6, name7, name8, name9;
	int year1, year2, year3, year4, year5, year6, year7, year8, year9;

	// Declare file stream variable
	ifstream inData;
	ofstream outData;

	//Open the input output files
	inData.open("star_wars.txt");
	outData.open("star_wars_output.out");



	//Code for data manipulation
	getline(inData, name1);
	inData >> year1;
	inData.ignore();
	getline(inData, name2);
	inData >> year2;
	inData.ignore();
	getline(inData, name3);
	inData >> year3;
	inData.ignore();
	getline(inData, name4);
	inData >> year4;
	inData.ignore();
	getline(inData, name5);
	inData >> year5;
	inData.ignore();
	getline(inData, name6);
	inData >> year6;
	inData.ignore();
	getline(inData, name7);
	inData >> year7;
	inData.ignore();
	getline(inData, name8);
	inData >> year8;
	inData.ignore();
	getline(inData, name9);
	inData >> year9;
	
	

	//Calculation


	//Output to the file


	outData << setw(30) << left << "Episode" << setw(50) << "Movie" << setw(30) << "Release Year" << endl;
	outData << "-------------------------------------------------------------------------------------------" << endl;
	outData << setw(30) << left << "I" << setw(50) << name1 << setw(30) << year1 << endl;
	outData << setw(30) << left << "II" << setw(50) << name2 << setw(30) << year2 << endl;
	outData << setw(30) << left << "III" << setw(50) << name3 << setw(30) << year3 << endl;
	outData << setw(30) << left << "IV" << setw(50) << name4 << setw(30) << year4 << endl;
	outData << setw(30) << left << "V" << setw(50) << name5 << setw(30) << year5 << endl;
	outData << setw(30) << left << "VI" << setw(50) << name6 << setw(30) << year6 << endl;
	outData << setw(30) << left << "VII" << setw(50) << name7 << setw(30) << year7 << endl;
	outData << setw(30) << left << "VIII" << setw(50) << name8 << setw(30) << year8 << endl;
	outData << setw(30) << left << "IX" << setw(50) << name9 << setw(30) << year9 << endl;

	//Output to the screen 
	cout << "Processing data" << endl;
	cout << "Please check star_wars_output.out file" << endl;

	//Closing the files
	inData.close();
	outData.close();




	return 0;
}