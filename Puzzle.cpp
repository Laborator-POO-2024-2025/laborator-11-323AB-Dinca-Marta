#include "Puzzle.h"

void Puzzle::afisare(std::ostream& out) const
{
	out << "Numele la puzzle este: " << nume << '\n';
	out << "Pretul este: " << pret << '\n';
	out << "Varsta minima este " << varstaMinima << '\n';

}

Puzzle::Puzzle()
{
	nume = nullptr;
	pret = 0;
	varstaMinima = 0;
}

Puzzle::Puzzle(const std::string nume, const int& varstaMinima, const float& pret)
{
	this->varstaMinima = varstaMinima;
	this->pret = pret;
	this->nume = nume;
}

Puzzle::Puzzle(const Puzzle& other)
{
	this->varstaMinima = other.varstaMinima;
	this->pret = other.pret;
	this->nume = other.nume;
}

Puzzle::~Puzzle()
{
	nume.clear();
}

float Puzzle::getPret() const
{
	return pret;
}

std::string Puzzle::getNume() const
{
	return nume;
}

int Puzzle::getVarstaMinima() const
{
	return varstaMinima;
}

Puzzle& Puzzle::operator=(const Puzzle& other)
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
