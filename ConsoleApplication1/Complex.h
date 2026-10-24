#pragma once
class Complex
{
private: 
	double re; 
	double img; 

public: 
	Complex(double, double); 
	Complex(const Complex& c);
	// declaration de l'operateur + 
	Complex operator+(Complex c)const;
	Complex operator+(double) const;
	Complex operator-(Complex) const;
	Complex operator-(double a) const;
	Complex operator*(Complex) const;
	Complex operator*(double) const;
	Complex operator/(Complex) const;
	Complex operator/(double) const;
	int operator==(Complex) const;
	int operator!=(Complex) const;
	int operator<(Complex) const;
	int operator>(Complex) const;

	void afficher() const;
	~Complex();
};

