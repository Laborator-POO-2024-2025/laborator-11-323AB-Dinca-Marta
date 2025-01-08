#include "Robot.h"

void Robot::afisare(std::ostream& out) const
{
	out << "Numele robotului este: "<<nume<<'\n';
	out << "Pretul este: " << pret<<'\n';
	out << "Varsta minima este " << varstaMinima<<'\n';

}

Robot::Robot()
{
	nume = nullptr;
	pret = 0;
	varstaMinima = 0;
}

Robot::Robot(const std::string nume, const int& varstaMinima, const float& pret)
{
	this->varstaMinima = varstaMinima;
	this->pret = pret;
	this->nume = nume;
}

Robot::Robot(const Robot& other)
{
	this->varstaMinima = other.varstaMinima;
	this->pret = other.pret;
	this->nume = other.nume;
}

Robot::~Robot()
{
	nume.clear();
}

float Robot::getPret() const
{
	return pret;
}

std::string Robot::getNume() const
{
	return nume;
}

int Robot::getVarstaMinima() const
{
	return varstaMinima;
}

Robot& Robot::operator=(const Robot& other)
{
	if(this->nume.empty()==0)
		this->nume.clear();
	this->pret = other.pret;
	this->varstaMinima = other.varstaMinima;
	if (other.nume.empty() == 0) {
		this->nume = other.nume;
	}
	else this->nume = nullptr;
	return *this;
}
