#include "Bullet.h"
#include<iostream>
#include<ctime>
using namespace std;

void Bullet::setNumber(int& number)
{
	this->number = number;
}

int Bullet::getNumber()
{
	return number;
}

void Bullet::print()
{
	cout << number << endl;
}

int Bullet::operator+=(int other)
{
	return this->number = this->number + other;
}



void Mag::pushBack(Bullet& bull)
{
	for (size_t i = 0; i < 29; i++)
	{
		bullet.push_back(bull+=1);
	}
}
void Mag::popFront(int countFier)
{
	int i = 0;
	srand(time(0));
	if (countFier > bullet.size()) {
		cout << "You cant shoot that many times" << endl;
		return;
	}
	if (bullet.size() > 0) {
		for (size_t i = 0; i < countFier; i++)
		{
			int random = rand() % 2;
			bullet.pop_front();

			cout << "Bullet number " << i+1 << " was fierd ";

			if (random == 1) {
				cout << "and target was down" << endl;
				
			}
		    else {
				cout << "and you missted " << endl;
			}
			

		}
    }
	else {
		cout << "Mag is empty" << endl;
		return;
	}
}

void Mag::show()
{
	for (auto el : bullet) {
		cout << "Bullet number->";
		 el.print();
	}
	
}

void Rifle::TakeMag(Mag& magaz)
{
	mag.push_back(magaz);
}

void Rifle::ShowMag()
{
	for (auto m : mag) {
		m.show();
	}
}

void Rifle::fier(int countShots)
{
	for (auto &m : mag) {
	    m.popFront( countShots);
	}
	
}
