#include "Money_private.h"

Money_private::Money_private() : Money(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1) { }
Money_private::Money_private(double gg1000, double gg500, double gg200,
	double gg100, double gg50, double gg20,
	double gg10, double gg5, double gg2,
	double gg1, double cc50, double cc10) : Money(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10) { }
Money_private::Money_private(const Money_private& r)
	: Money(r.GetG1000(), r.GetG500(), r.GetG200(), r.GetG100(), r.GetG50(), r.GetG20(), r.GetG10(), r.GetG5(), r.GetG2(), r.GetG1(), r.GetC50(), r.GetC10()) { }

istream& operator >> (istream& in, Money_private& a)
{
	double gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10;
	do {
		cout << " 1000 - ? "; in >> gg1000;
		cout << " 500 - ? "; in >> gg500;
		cout << " 200 - ? "; in >> gg200;
		cout << " 100 - ? "; in >> gg100;
		cout << " 50 - ? "; in >> gg50;
		cout << " 20 - ? "; in >> gg20;
		cout << " 10 - ? "; in >> gg10;
		cout << " 5 - ? "; in >> gg5;
		cout << " 2 - ? "; in >> gg2;
		cout << " 1 - ? "; in >> gg1;
		cout << " 0.50 - ? "; in >> cc50;
		cout << " 0.10 - ? "; in >> cc10;
		if (!a.Init(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10))
		{
			cout << endl << " Error! Enter right number. " << endl;
		}
		cout << endl;
	} while (!a.Init(gg1000, gg500, gg200, gg100, gg50, gg20, gg10, gg5, gg2, gg1, cc50, cc10));
	a.SetG1000(gg1000); a.SetG500(gg500); a.SetG200(gg200); a.SetG100(gg100); a.SetG50(gg50);
	a.SetG20(gg20); a.SetG10(gg10); a.SetG5(gg5); a.SetG2(gg2); a.SetG1(gg1); a.SetC50(cc50); a.SetC10(cc10);
	cout << endl;
	return in;
}

Money_private::operator string () const
{
	stringstream sstr;
	sstr << " 1000 - " << GetG1000() * 1000. << endl;
	sstr << " 500 - " << GetG500() * 500. << endl;
	sstr << " 200 - " << GetG200() * 200. << endl;
	sstr << " 100 - " << GetG100() * 100. << endl;
	sstr << " 50 - " << GetG50() * 50. << endl;
	sstr << " 20 - " << GetG20() * 20. << endl;
	sstr << " 10 - " << GetG10() * 10. << endl;
	sstr << " 5 - " << GetG5() * 5. << endl;
	sstr << " 2 - " << GetG2() * 2. << endl;
	sstr << " 1 - " << GetG1() * 1. << endl;
	sstr << " 0.50 - " << GetC50() * 0.5 << endl;
	sstr << " 0.10 - " << GetC10() * 0.1 << endl;
	return sstr.str();
}

ostream& operator << (ostream& out, const Money_private& r)
{
	out << string(r);
	return out;
}

double Money_private::get_sum()
{
	return (GetG1000() * 1000. + GetG500() * 500. + GetG200() * 200. + GetG100() * 100. + GetG50() * 50. +
		GetG20() * 20. + GetG10() * 10. + GetG5() * 5. + GetG2() * 2. + GetG1() * 1. + GetC50() * 0.50 + GetC10() * 0.1);
}

void Money_private::Comparison(Money_private& sum1, Money_private& sum2)
{
	if (sum1.get_sum() > sum2.get_sum()) { cout << " SUMM_1 > SUMM_2 " << endl; }
	else
		if (sum1.get_sum() < sum2.get_sum()) { cout << " SUMM_1 < SUMM_2 " << endl; }
		else
			if (sum1.get_sum() == sum2.get_sum()) { cout << " SUMM_1 = SUMM_2 " << endl; }
}

void Money_private::Divide(Money_private& sum1, Money_private& sum2)
{
	if (sum1.get_sum() >= sum2.get_sum())
	{
		cout << " DIVIDE = " << setprecision(3) << sum1.get_sum() / sum2.get_sum() << endl;
	}
	else
		if (sum1.get_sum() <= sum2.get_sum())
		{
			cout << " DIVIDE = " << setprecision(3) << sum2.get_sum() / sum1.get_sum() << endl;
		}
}