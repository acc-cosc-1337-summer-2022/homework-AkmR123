//write include statements
#include "decisions.h"
#include <iostream> 

using std::cout;
using std::cin;

int main() 
{
	// Initial variable declarations
	double credit_points = 0;
	int grade_points = 0;
	char letter_grade = 0;
	int input = 0;
	int credit_hours = 0;
	int choice = 2;
	double final_gpa = 0;

	do 
	{

	cout << "\n\nEnter your letter grade for the course\n"; //Getting letter grades
	cin >> letter_grade;

	grade_points = get_grade_points(letter_grade);  //Converting letter grades to number values

	cout << "Enter credit hours for the course\n";
	cin >> input;  //Getting credit hours and reading them into a different variable, input
	credit_hours += input;  //Adding the value input into credit_hours, retaining credit_hours prior value to add onto so we can get the total later 

	credit_points += input * grade_points; //Multiplying the credit hours for only this course (input) by grade_points

	cout << "\n1 - Add information for another class\n";
	cout << "2 - Exit and calculate GPA\n";
	cout << "Enter corresponding NUMBER for your choice\n"; //Here this just asks if you'd like to continue or exit
	cin >> choice;

	} 
	while (choice != 2); //As long as choice does not equal 2, keep running that loop

	final_gpa = calculate_gpa(credit_hours,credit_points);  //Calculating the GPA given the total of credit_points and credit_hours

	if (final_gpa == -1) { //This if function accounts for division by 0, saying GPA was not calculated if credit hours is 0
		cout << "You had a credit hour sum of 0, thus your GPA could not be calculated. ";
	} else {  //This else acts if credit_hours was not 0 and final_gpa didn't return -1
	cout << "\n\nYour GPA is: " << final_gpa << "\n";  
	cout << "Your total credit points is: " << credit_points << "\n";
	cout << "Your total credit hours is: " << credit_hours << "\n"; 
	}
	return 0;
}