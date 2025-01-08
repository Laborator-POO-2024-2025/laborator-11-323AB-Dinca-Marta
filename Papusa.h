#pragma once
#include "Jucarie.h"
class Papusa : public Jucarie {
	std::string nume;
	int varstaMinima;
	float pret;
protected:
	void afisare(std::ostream& out) const override;
public:
	Papusa();
	Papusa(const std::string nume, const int& varstaMinima, const float& pret);
	Papusa(const Papusa& other);
	~Papusa() override;
	float getPret() const override;
	std::string getNume() const override;
	int getVarstaMinima() const override;
	Papusa& operator=(const Papusa& other);
};

