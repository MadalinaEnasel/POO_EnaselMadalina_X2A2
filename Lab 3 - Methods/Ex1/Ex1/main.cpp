#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	Math ceva;
	cout << "asta e Add(int, int) " << ceva.Add(23, 56);

	cout << "\nasta e Add(int, int, int) " << ceva.Add(45, 100, 1300);

	cout << "\nasta e Add(double, double) " << ceva.Add(11111111, 22222222222);

	cout << "\nasta e add(double, double, double) " << ceva.Add(11111, 2222222, 3333333333);

	cout << "\nasta e mul(int, int) " << ceva.Mul(1, 56);

	cout << "\nasta e mul(int,int,int) " << ceva.Mul(45, 234, 2);

	cout << "\nasta e mul(double,double) " << ceva.Mul(11110000, 400043003);

	cout << "\nasta e mul(double,double,double) " << ceva.Mul(12345, 567890, 123443);

	cout << "\nasta e add(int count, ...) " << ceva.Add(3, 34, 67, 986); // sums up a list of integers

	cout << "\nasta e add(const*,const char*) " << ceva.Add("Ana", " canta la vioara.");
	return 0;
}