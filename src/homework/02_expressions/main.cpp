//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	// Assigning value to meal amount based on user input
	cout << "Meal amount? ";
	cin >> meal_amount;

	// Calculating tax amount using the function and assigning that value to tax_amount
	tax_amount = get_sales_tax_amount(meal_amount);

	// Getting tip rate from user inputs and assigning it to tip_rate
	cout << "Tip rate? ";
	cin >> tip_rate;

	// Getting tipped amount based on tip_rate * meal_amount
	tip_amount = get_tip_amount(meal_amount,tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "\n" << "Your Receipt: " << "\n\n";
	cout << "Meal Amount: " << meal_amount << "\n";
	cout << "Sales Tax: " << tax_amount << "\n";
	cout << "Tip Amount: " << tip_amount << "\n";
	cout << "Total: " << total << "\n";

	return 0;
}
