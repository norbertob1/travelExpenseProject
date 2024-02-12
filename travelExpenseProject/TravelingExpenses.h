#pragma once
class TravelingExpenses
{
private:
	double MilesToDrive;
	double GasPrice;
	double MilesPerGallon;
	double Expense;
public:
	TravelingExpenses();
	TravelingExpenses(double, double, double);
	void setMilesToDrive(double);
	void setGasPrice(double);
	void setMilesPerGallon(double);
	double getMilesToDrive();
	double getGasPrice();
	double GetMilesPerGallon();
	double getExpense();
	void CalculateExpenses();
};














//sets 3 variables equal to zero, 2nd constructor sets new values for the variables,
//private cause minus sign, and public cause plus sign