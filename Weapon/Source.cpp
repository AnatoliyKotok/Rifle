#include "Bullet.h"
#include<iostream>

using namespace std;

int main() {
	
	
	
	Bullet bullet(1);
    Mag mag;
    mag.pushBack(bullet);
	Mag mag2;
	Rifle rifle;
	rifle.TakeMag(mag);
	cout << "Enter the number of shots->";
	int shots;
	cin >> shots;
	rifle.fier(shots);
	rifle.ShowMag();
	
}