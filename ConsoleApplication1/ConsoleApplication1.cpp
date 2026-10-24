// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex* c1 = new Complex(1, 2);
    Complex* c2 = new Complex(3, 4);
    c1->afficher();
    c2->afficher();
   Complex *c3 = new Complex(*c1 + *c2);


    double a = 2;
    Complex *c4 =new Complex( *c1 + a); 
    Complex *c5 = new Complex(*c1 - *c2);
    c3->afficher();
    c4->afficher();
    c5->afficher();
    Complex* c6 = new Complex(*c1 - a);
    c6->afficher();
    Complex* c7 = new Complex(*c1* *c2);
    c7->afficher();
    Complex* c8 = new Complex(*c1 * a);
    c8->afficher();
    Complex* c9 = new Complex(*c1 / *c2);
    c9->afficher();
    Complex* c10 = new Complex(*c1 / a);
    c10->afficher();
    if (*c1 ==*c2) {
        cout << "c1=c2" << endl;
    }
    if(*c1!= *c2) {
        cout << "c1!=c2" << endl;
    }

    if (*c1 > *c2) {
        cout << "c1>c2" << endl;
    }

    if (*c1 < *c2) {
        cout << "c1<c2" << endl;
    }

    delete c2;
    c2 = nullptr;
    delete c1;
    c1 = nullptr;
    delete c3; 
    c3 = nullptr;
    delete c4;
    c4 = nullptr;
    delete c5;
    c5 = nullptr;
    delete c6;
    c6 = nullptr;
    delete c7;
    c7 = nullptr;
    delete c8;
    c8 = nullptr;
    delete c9;
    c9 = nullptr;
    delete c10;
    c10 = nullptr;
    
}

