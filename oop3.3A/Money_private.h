#pragma once
#include "Money.h"
class Money_private : private Money
{
public:
	using Money::GetG1000;
	using Money::GetG500;
	using Money::GetG200;
	using Money::GetG100;
	using Money::GetG50;
	using Money::GetG20;
	using Money::GetG10;
	using Money::GetG5;
	using Money::GetG2;
	using Money::GetG1;
	using Money::GetC50;
	using Money::GetC10;

	using Money::SetG1000;
	using Money::SetG500;
	using Money::SetG200;
	using Money::SetG100;
	using Money::SetG50;
	using Money::SetG20;
	using Money::SetG10;
	using Money::SetG5;
	using Money::SetG2;
	using Money::SetG1;
	using Money::SetC50;
	using Money::SetC10;

	Money_private();
	Money_private(double, double, double, double, double, double, double, double, double, double, double, double);
	Money_private(const Money_private&);

	operator string() const;
	friend ostream& operator << (ostream&, const Money_private&);
	friend istream& operator >> (istream&, Money_private&);

	double get_sum();
	void Comparison(Money_private& sum1, Money_private& sum2);
	void Divide(Money_private& sum1, Money_private& sum2);
};

