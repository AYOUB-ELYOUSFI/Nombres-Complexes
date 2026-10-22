#pragma once
class Complexe
{
private:
	double re;
	double img;
public:
	Complexe(double, double);
	Complexe(const Complexe& c);

	Complexe operator+(Complexe) const;
	Complexe operator+(double) const;

	Complexe operator-(Complexe) const;
	Complexe operator-(double)const;

	Complexe operator*(Complexe) const;
	Complexe operator*(double) const;

	Complexe operator/(Complexe) const;
	Complexe operator/(double) const;

	Complexe operator+=(Complexe) ;
	Complexe operator+=(double) ;

	Complexe operator-=(Complexe);
	Complexe operator-=(double);

	Complexe operator*=(Complexe);
	Complexe operator*=(double);

	Complexe operator/=(Complexe);
	Complexe operator/=(double);

	Complexe operator-() const ; // negation

	Complexe operator--();

	Complexe operator++();

	int operator==(Complexe) const;
	int operator==(double)const;

	int operator!=(Complexe)const;
	int operator!=(double)const;

	/*int operator<(Complexe)const;
	int operator<(double)const;

	int operator<=(Complexe)const;
	int operator<=(double)const;

	int operator>(Complexe)const;
	int operator>(double)const;

	int operator>=(Complexe)const;
	int operator>=(double)const;*/

    void afficher();

	~Complexe();
};

