//write include statement for decisions header
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;
//Write code for function(s) code here

// This function calculates the GPA
double calculate_gpa(int credit_hours, double credit_points)
{
    if (credit_hours == 0){
        return -1;
    } else { 
        return credit_points/credit_hours;
    }
}

int get_grade_points(char letter_grade)
{
    int grade_points = 10;
    switch (letter_grade) {
    case 'A':
        grade_points = 4;
        break;
    case 'B':
        grade_points = 3;
        break;
    case 'C':
        grade_points = 2;
        break;
    case 'D':
        grade_points = 1;
        break;
    case 'F':
        grade_points = 0;
        break;
    }
    return grade_points; 
}
