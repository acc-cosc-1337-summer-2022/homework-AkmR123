//write include statements
#include "dna.h"
#include <iostream>
#include <string>

//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
void display_options() {
	cout << "1 - Get GC Content\n";
	cout << "2 - Get DNA Complement\n";
}
int main() 
{
	string retry;
	do{
	int choice = 0;

	display_options();
	cout << "\nMake your choice: ";
	cin >> choice;

	if (choice == 1){
		string input_dna;
		cout << "\nInput the DNA you'd like the GC Content of: ";
		cin >> input_dna;
		cout << get_gc_content(input_dna);
	} else if (choice == 2) {
		string input_dna;
		cout << "\nInput the DNA you'd like the DNA Complement of: ";
		cin >> input_dna;
		cout << get_dna_complement(input_dna);
	}
	cout << "\nWould you like to try again? ";
	cin >> retry;
	} 
	while (retry == "y" || retry == "Y");
	return 0;
}