#include "Complexe.h"
#include<iostream>
using namespace std;

Complexe::Complexe(double r, double im)
{
	this->re = r;
	this->img = im;
}

Complexe::Complexe(const Complexe& c)
{
	this->re = c.re;
	this->img = c.img;
}

Complexe Complexe::operator+(Complexe c) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}

Complexe Complexe::operator+(double a) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img + 0.0;
	return *res;
}

Complexe Complexe::operator-(Complexe c) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complexe Complexe::operator-(double a ) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = this->re - a;
	res->img = this->img - 0.0;
	return *res;
}

Complexe Complexe::operator*(Complexe c) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * c.re)-(this->img*c.img);
	res->img = (this->re * c.img)+(this->img * c.re);
	return *res;
}

Complexe Complexe::operator*(double a) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * a) - (this->img * 0.0);
	res->img = (this->re * 0.0) + (this->img * a);

	return *res;
}

Complexe Complexe::operator/(Complexe c) const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * c.re +this->img *c.img) / ((c.re*c.re)+(c.img*c.img)) ;
	res->img = (this->img * c.re - this->re*c.img)/ ((c.re * c.re) + (c.img * c.img));
	return *res;
}

Complexe Complexe::operator/(double a) const
{
	if (a!=0) {
		Complexe* res = new Complexe(0.0, 0.0);
		res->re = (this->re * a + this->img * 0.0) /((a * a) + (0.0 * 0.0));
		res->img = (this->img * a - this->re * 0.0) / ((a * a) + (0.0 * 0.0));
		return *res;
	}
	else 
		cout<<"Division imposible sur 0"<< endl;

}

Complexe Complexe::operator+=(Complexe c)
{
	this->re += c.re;
	this->img += c.img;
	return *this;
}

Complexe Complexe::operator+=(double a)
{
	this->re += a;
	
	return *this;
}

Complexe Complexe::operator-=(Complexe c)
{
	this->re -= c.re;
	this->img -= c.img;
	return *this;
}

Complexe Complexe::operator-=(double a)
{
	this->re -= a;

	return *this;
}

Complexe Complexe::operator*=(Complexe c)
{  /*
	this->re = (this->re * c.re) - (this->img * c.img);
	this->img = (this->re * c.img) + (this->img * c.re);  */  
	// on utilise un objet te,poraire pour utiliser l'objet courqnt sans le modifier

	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * c.re) - (this->img * c.img);
	this->img = (this->re * c.img) + (this->img * c.re);
	this->re = res->re;
	return *this;
}

Complexe Complexe::operator*=(double a )
{
	/*this->re = (this->re * a) - (this->img * 0.0);
	this->img = (this->re * 0.0) + (this->img * a); */
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * a) - (this->img * 0.0);
	this->img = (this->re * 0.0) + (this->img * a);
	this->re = res->re;
	return *this;
}

Complexe Complexe::operator/=(Complexe c)
{
	/*this->re = (this->re * c.re + this->img * c.img) / ((c.re * c.re) + (c.img * c.img));
	this->img = (this->img * c.re - this->re * c.img) / ((c.re * c.re) + (c.img * c.img)); */
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = (this->re * c.re + this->img * c.img) / ((c.re * c.re) + (c.img * c.img));
	this->img = (this->img * c.re - this->re * c.img) / ((c.re * c.re) + (c.img * c.img));
	this->re = res->re;
	return *this;
}

Complexe Complexe::operator/=(double a)
{
	if (a != 0) {
		 /* this->re = (this->re * a + this->img * 0.0) / ((a * a) + (0.0 * 0.0));
		this->img = (this->img * a - this->re * 0.0) / ((a * a) + (0.0 * 0.0)); */
		Complexe* res = new Complexe(0.0, 0.0);
		res->re = (this->re * a + this->img * 0.0) / ((a * a) + (0.0 * 0.0));
		this->img = (this->img * a - this->re * 0.0) / ((a * a) + (0.0 * 0.0));
		this->re = res->re;
		return *this;
	}
	else
		cout << "Division imposible sur 0" << endl;
}

Complexe Complexe::operator-() const
{
	Complexe* res = new Complexe(0.0, 0.0);
	res->re = -this->re;
	res->img = -this->img;
	return *res;
}

Complexe Complexe::operator--()
{
	this->re= this->re-1;
	return *this;
}

Complexe Complexe::operator++()
{
	this->re= this->re +1;
	return *this;
}

int Complexe::operator==(Complexe c)const
{
	if (this->re == c.re && this->img == c.img)
		return 1;
	else
	return 0;
}

int Complexe::operator==(double a)const
{   
	if (this->re == a && this->img == 0)
		return 1;
	else
		return 0;
	
}

int Complexe::operator!=(Complexe c)const
{
	if (this->re == c.re && this->img == c.img)
		return 0;
	else
		return 1;
}

int Complexe::operator!=(double a) const
{
	if (this->re == a && this->img == 0)
		return 1;
	else
		return 0;
}





void Complexe::afficher()
{
	cout << this->re << "+i" << this->img << endl;
}

Complexe::~Complexe()
{
}
