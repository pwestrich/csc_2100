#include <iostream>
int main() {
	double PayAmount = 1700.00;
	double PayPeriods = 26.00;
	double AnnualPay = PayAmount * PayPeriods;
   std::cout << "Your total annual pay is: " << AnnualPay << std::endl;
   return 0;
}
