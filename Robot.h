#pragma once
#include "Jucarie.h"
class Robot : public Jucarie {
	std::string nume;
	int varstaMinima;
	float pret;
protected:
	void afisare(std::ostream& out) const override;
public:
	Robot();
	Robot(const std::string nume, const int& varstaMinima, const float& pret);
	Robot(const Robot& other);
	~Robot() override;
	float getPret() const override;
	std::string getNume() const override;
	int getVarstaMinima() const override;
	Robot& operator=(const Robot& other);
	//Constructori (3 sau 2 daca folositi parametrii impliciti) + Destructor
	//Operator=
	//restul metodelor conform interfetei + ce alte metode considerati ca aveti nevoie
};
