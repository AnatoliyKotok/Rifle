#pragma once
#include<list>
using namespace std;
class Bullet
{
public:
	void setNumber(int& number);
	int getNumber();
	Bullet(int number) {
		setNumber(number);
	}
	Bullet() = default;
	void print();
	int operator+=(int other);
private:
	int number;
};
class Mag 
{
public:
	void pushBack(Bullet& bull);
	void popFront(int countFier);
	void show();
	Mag() = default;
private:
	list<Bullet>bullet;
};
class Rifle {
public:
	void TakeMag(Mag& magaz);
	void ShowMag();
	void fier(int countShots);
	Rifle() = default;
private:
	list<Mag>mag;
};
