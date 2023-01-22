// THE SIMPLE TAX PROBLEM
// Given a salary as input, print the amount of tax you would owe if you make that salary.
// The tax is based on your tax bracket as found from the first two columns below.
// Once you know which row to use,
// start with the "flat amount" and add the "plus %" of the amount over the amount listed in the final column.
// For example, if your income is $50,000,
// then you use the third row of the table and compute the tax as
// $4,000 plus 25% of the amount over $29,050, which comes to $9,237.50.
// The total tax on $27,500 is $3,767.50. For $6,000, the tax is $600. For $120,000, the tax is $28,227.

#include <iostream>
using namespace std;
#include <string>

double tax(double a)
{
    double result = 0;

    if (a > 0 && a <= 7150.00)
    {
        result = a * 0.10;
    }
    else if (a > 7150.00 && a <= 29050.00)
    {
        result = (715.00) + (a - 7150.00) * 0.15;
    }
    else if (a > 29050.00 && a <= 70350.00)
    {
        result = (4000) + (a - 29050.00) * 0.25;
    }
    else if (a > 70350.00)
    {
        result = (14325) + (a - 70350) * 0.28;
    }
    return result;
}

int main()
{
    cout << "tester tax 6000: " << tax(6000) << endl;
    cout << "tester tax 27500: " << tax(27500) << endl;
    cout << "tester tax 29050: " << tax(29050) << endl;
    cout << "tester tax 50000: " << tax(50000) << endl;
    cout << "tester tax 120000: " << tax(120000) << endl;

    return 0;
}
