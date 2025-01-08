#pragma once
#include "Jucarie.h"
class Puzzle : public Jucarie {
	std::string nume;
	int varstaMinima;
	float pret;
protected:
	void afisare(std::ostream& out) const override;
public:
	Puzzle();
	Puzzle(const std::string nume, const int& varstaMinima, const float& pret);
	Puzzle(const Puzzle& other);
	~Puzzle() override;
	float getPret() const override;
	std::string getNume() const override;
	int getVarstaMinima() const override;
	Puzzle& operator=(const Puzzle& other);
};
