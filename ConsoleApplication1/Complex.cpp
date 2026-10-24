#include "Complex.h"
#include<iostream>
#include<cmath>

using namespace std;
Complex::Complex(double re, double im)
	:re(re),img(im)
{
}

Complex::Complex(const Complex& c)
{
	this->re = c.re;
	this->img = c.img;
}

Complex Complex::operator+(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re=this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}

Complex Complex::operator+(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re +a ;
	res->img = this->img +0.0;
	return *res;
}

Complex Complex::operator-(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complex Complex::operator-(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - a;
	res->img = this->img - 0.0;
	return *res;
}

Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = (this->re * c.re) - (this->img * c.img);
	res->img = (this->re * c.img) + (this->img * c.re);

	return *res;
}

Complex Complex::operator*(double a) const {
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * a;
	res->img = this->img * a;
	return *res;
}

Complex Complex::operator/(Complex c) const {
	Complex* res = new Complex(0.0, 0.0);
	double div;
	div = c.re * c.re + c.img * c.img;
	if (div == 0) {
		cout << "Division impossible, diviseur = 0 !" << endl;
		res->re = 0;
		res->img = 0;
		return *res;
	}
		res->re = ((this->re * c.re) + (this->img * c.img)) / div;
		res->img = ((this->re * c.img) - (this->img * c.re)) / div;
		return *res;
}

Complex Complex::operator/(double a) const {
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re / a;
	res->img = this->img / a;
	return *res;
}
int Complex::operator==(Complex c) const
{
	int res;
	if (this->re == c.re && this->img == c.img) {
		res = true;
	}
	else {
		res = false;
	}
	return res;
}

int Complex::operator!=(Complex c) const {
	int res;
	if (this->re != c.re || this->img != c.img) {
		res = true;
	}
	else {
		res = false;
	}
	return res;
}

int Complex::operator<(Complex c) const {
	int res;
	double module1, module2;
	module1 = sqrt(this->re * this->re + this->img * this->img);
	module2 = sqrt(c.re * c.re + c.img * c.img);
	if (module1 < module2) {
		res = true;
	}
	else {
		res = false;
	}
	return res;
}

int Complex::operator>(Complex c) const {
	int res;
	double module1, module2;
	module1 = sqrt(this->re * this->re + this->img * this->img);
	module2 = sqrt(c.re * c.re + c.img * c.img);
	if (module1 > module2) {
		res = true;
	}
	else {
		res = false;
	}
	return res;
}


void Complex::afficher() const
{
	cout << this->re << "+(" <<this->img<<"i)"<< endl;
}

Complex::~Complex()
{
}

