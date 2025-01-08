#include "Papusa.h"

void Papusa::afisare(std::ostream& out) const
{
	out << "Numele la puzzle este: " << nume << '\n';
	out << "Pretul este: " << pret << '\n';
	out << "Varsta minima este " << varstaMinima << '\n';

}

Papusa::Papusa()
{
	nume = nullptr;
	pret = 0;
	varstaMinima = 0;
}

Papusa::Papusa(const std::string nume, const int& varstaMinima, const float& pret)
{
	this->varstaMinima = varstaMinima;
	this->pret = pret;
	this->nume = nume;
}

Papusa::Papusa(const Papusa& other)
{
	this->varstaMinima = other.varstaMinima;
	this->pret = other.pret;
	this->nume = other.nume;
}

Papusa::~Papusa()
{
	nume.clear();
}

float Papusa::getPret() const
{
	return pret;
}

std::string Papusa::getNume() const
{
	return nume;
}

int Papusa::getVarstaMinima() const
{
	return varstaMinima;
}

Papusa& Papusa::operator=(const Papusa& other)
{
	if (this->nume.empty() == 0)
		this->nume.clear();
	this->pret = other.pret;
	this->varstaMinima = other.varstaMinima;
	if (other.nume.empty() == 0) {
		this->nume = other.nume;
	}
	else this->nume = nullptr;
	return *this;
}

