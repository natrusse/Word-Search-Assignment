// Word Search Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <fstream>

using namespace std;


int main()
{
	int sum = 0;
	int x;
	ifstream inFile;

	inFile.open("C:\\Users\\natrusse\\Downloads\\word-search datafiles\\inputfile1.txt");
	if (!inFile) {
		cerr << "Unable to open file inputfile1.txt" << endl;
		system("pause");
		exit(1);
	}
	while (inFile >> x) {
		sum = sum + x;
	}

	inFile.close();
	cout << "Sum = " << sum << endl;
	system("pause");
	return 0;




	//read in a file containing 10 words

	//read in a file with 3 paragraphs in it

	//function to read in file


/*
	string input;
	cout << "Hello, this program will tell you how many times 10 predetermined words appear in a Paragraph.\n";
	cout << "Please input a line to test." << endl;
	getline(cin, input);

	int bypass = 0;
	int dash = 0;
	int point = 0;

	for (unsigned int i = 0; i < input.length(); i++) 
	{
		if ((input.at(i) == 'b') | (input.at(i) == 'B')) {
			if (input.at(i + 1) == 'y') {
				if (input.at(i + 2) == 'p') {
					if (input.at(i + 3) == 'a') {
						if (input.at(i + 4) == 's') {
							if (input.at(i + 5) == 's') {
								bypass++;	
							}
						}
					}
				}
			}
		}
		if ((input.at(i) == 'd') | (input.at(i) == 'D')) {
			if (input.at(i + 1) == 'a') {
				if (input.at(i + 2) == 's') {
					if (input.at(i + 3) == 'h') {
						dash++;
					}
				}
			}
		}
		if ((input.at(i) == 'p') | (input.at(i) == 'P')) {
			if (input.at(i + 1) == 'o') {
				if (input.at(i + 2) == 'i') {
					if (input.at(i + 3) == 'n') {
						if (input.at(i + 4) == 't') {
							point++;
						}
					}
				}
			}
		}
	}
	cout << "Bypass: " << bypass << endl;
	cout << "Dash: " << dash << endl;
	cout << "Point: " << point << endl;
	system("pause");
	return 0;*/
}

