
#include <iostream>
using namespace std;

int main() {
    double merchCost, Salary, annualRent, electricityBill, profit;


    cout << "Enter the total cost of merchandise: ";
    cin >> merchCost;

    cout << "Enter the total salary of employees : ";
    cin >> Salary;

    cout << "Enter the annual rent: ";
    cin >> annualRent;

    cout << "Enter the estimated electricity cost: ";
    cin >> electricityBill;

    cout << "Enter the desired net profit percentage: ";
    cin >> profit;


    double expenses = merchCost + Salary + annualRent + electricityBill;
    double desiredProfitAmount = (profit / 100) * merchCost;
    double totalRevenueNeeded = expenses + desiredProfitAmount;


    double saleDiscount = 0.15;
    totalRevenueNeeded /= (1 - saleDiscount);


    double markupPercentage = (totalRevenueNeeded / merchCost - 1) * 100;


    cout << "To achieve a net profit of approximately " << profit << "%, ";
    cout << "the merchandise should be marked up by approximately " << markupPercentage << "%." << endl;

    return 0;
}
