#include"Complexe.h"
#include <iostream>
using namespace std;
int main()
{
	int q = 2;

	Complexe* c1 = new Complexe(5, 2);
	c1->afficher();
	
	Complexe* c2 = new Complexe(3, 1);
	c2->afficher();

	Complexe c3 = *c1 + *c2; // test + complexe
	c3.afficher();

	Complexe c4 = *c1 + q; // test + double
	c4.afficher();

	Complexe c5 = *c1 * *c2; // test *
	c5.afficher();

	Complexe c6 = *c1 / *c2; // test '/'
	c6.afficher();

	*c1 += *c2;              // test +=
	c1->afficher();

	*c1 -= *c2;
	c1->afficher();         // test -=

	*c1 *= *c2;            // test *=
	c1->afficher();

	*c1 /= *c2;            // test /=
	c1->afficher();

	Complexe c_1 =  - *c1;
	c_1.afficher();        // test negation -
	

	/* *c1 ++ */
	++ *c1;
	c1->afficher();        // test ++

	--*c1;
	c1->afficher();        // test --

	Complexe c11 = *c1;
	cout << (c11 == *c1 )<< endl;  //test ==
	cout << (c11 != *c1) << endl;  // test !=


	delete c1;
	delete c2;
	c1 = c2 = nullptr;
}

