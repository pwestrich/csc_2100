#include <iostream>
int main ()	{
	double force = 172.5;
	double area = 27.5;
	double pressure = area / force;
	std::cout << "The pressure is: " << pressure << std::endl;
	return 0;
}

