// Jordab Brown Energy.cc

#include <iostream>

using namespace std;

double kinetic_energy(double m,double v)
{
	double ke;
	ke = (1./2.) * (m) * (v) * (v);
	return ke;
}


int main()
{
	
	double m, v, kin;
	
	cout << "\nEnter the Mass: ";
	cin >> m;
	cout << "Enter the Velocity: ";
	cin >> v;
	
	kin = kinetic_energy(m, v);
	
	cout << "\nGiven an object of mass: " << m << "\nWith a velocity of: " << v << "\n" << endl;
	cout << "The kinetic energy is: " << kin << "\n" << endl;
	
	return 0;
}