#include "TravelingExpenses.h"
TravelingExpenses::TravelingExpenses()
{
	this->MilesToDrive = 0;
	this->GasPrice = 0;
	this->MilesPerGallon = 0;
}

TravelingExpenses::TravelingExpenses(double MtD, double GP, double MpG)
{
	this->MilesToDrive = MtD;
	this->GasPrice = GP;
	this->MilesPerGallon =MpG;
}

void TravelingExpenses::setMilesPerGallon(double mpg)
{
	this->MilesPerGallon = mpg;
}
void TravelingExpenses::setGasPrice(double GP)
{
	this->GasPrice = GP;
}
void TravelingExpenses::setMilesToDrive(double mtd)
{
	this->MilesToDrive = mtd;
}

double TravelingExpenses::GetMilesPerGallon()
{
	return this->MilesPerGallon;
}
double TravelingExpenses::getMilesToDrive()
{
	return this->MilesToDrive;
}
double TravelingExpenses::getGasPrice()
{
	return this->GasPrice;
}
double TravelingExpenses::getExpense()
{
	return this->Expense;
}
void TravelingExpenses::CalculateExpenses()
{
	this->Expense = (this->MilesToDrive / this->MilesPerGallon) * this->GasPrice;
}


















//Implement the 2 constructors, 