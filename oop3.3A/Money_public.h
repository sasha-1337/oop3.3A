#pragma once
#include "Money.h"

class Money_public : public Money
{
public:
	Money_public();
	Money_public(double, double, double, double, double, double, double, double, double, double, double, double);
	Money_public(const Money_public&);

	Money_public& operator = (const Money_public&);
	operator string() const;
	friend ostream& operator << (ostream&, const Money_public&);
	friend istream& operator >> (istream&, Money_public&);

	double get_sum();
	void Comparison(Money_public& sum1, Money_public& sum2);
	void Divide(Money_public& sum1, Money_public& sum2);
};

