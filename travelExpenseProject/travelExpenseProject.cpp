#include <iostream>
#include "TravelingExpenses.h"
using namespace std;

int main()
{
	TravelingExpenses gust;
	double MitoD, MiPG, gasPrice;
	cout << "Enter the miles to drive ==> ";
	cin >> MitoD;
	cout << "Enter miles per gallon ==> ";
	cin >> MiPG;
	cout << "enter the gas price ==> ";
	cin >> gasPrice;
	gust.setMilesToDrive(MitoD);
	gust.setMilesPerGallon(MiPG);
	gust.setGasPrice(gasPrice);
	//TravelingExpenses gust(MtoD, MPG, GP);
	gust.CalculateExpenses();
	cout << "you still drive ==> " << gust.getMilesToDrive() << "miles" "\n";
	cout << "The travel expense is ==> " << gust.getExpense() << "dollars" << endl;
}



//gust is the process of instantiation


























//create a class, right click on soultion explore, name the class TravelExpense
//once the class is made, you cant change it, this creates 3 diff files, header file,
//implementing the program, lines w/ cout and cin is the prompt





