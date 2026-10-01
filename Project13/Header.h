#include <iostream>
using namespace std;
#pragma once
class Animal
{
protected:
	string name;
	int age;
	double weight;
	double height;
	string species;
public:
	Animal();
	Animal(string n, int a, double w, double h, string s) : name(n), age(a), weight(w), height(h), species(s)
	{
		name = n;
		age = a;
		weight = w;
		height = h;
		species = s;
	}
	void Eat()
	{
		cout << "The animal is eating..." << endl;
	}
	void Move()
	{
		cout << "The animal is moving..." << endl;
	}
};

class Slon :public Animal
{
public:
	Slon(string n, int a, double w, double h, string s) : Animal(n, a, w, h, s) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
		cout << "Height: " << height << endl;
		cout << "Species: " << species << endl;
	}
	void Eat()
	{
		cout << "The elephant is eating..." << endl;
	}
	void Continent()
	{
		cout << "The elephant is located in Africa!" << endl;
	}
};

class Penguin : public Animal
{
public:
	Penguin(string n, int a, double w, double h, string s) : Animal(n, a, w, h, s) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
		cout << "Height: " << height << endl;
		cout << "Species: " << species << endl;
	}
	void Eat()
	{
		cout << "The penguin is eating fish..." << endl;
	}
	void Continent()
	{
		cout << "The penguin is located in Antarctica!" << endl;
	}
};

class Parrot : public Animal
{
public:
	Parrot(string n, int a, double w, double h, string s) : Animal(n, a, w, h, s) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
		cout << "Height: " << height << endl;
		cout << "Species: " << species << endl;
	}
	void Eat()
	{
		cout << "The parrot is eating seeds..." << endl;
	}
	void Continent()
	{
		cout << "The parrot is located in South America!" << endl;
	}
};

class Whale : public Animal
{
public:
	Whale(string n, int a, double w, double h, string s) : Animal(n, a, w, h, s) {}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
		cout << "Height: " << height << endl;
		cout << "Species: " << species << endl;
	}
	void Eat()
	{
		cout << "The whale is eating plankton..." << endl;
	}
	void Continent()
	{
		cout << "The whale lives in the ocean!" << endl;
	}
};
