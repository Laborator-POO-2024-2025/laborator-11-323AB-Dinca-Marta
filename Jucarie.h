#pragma once
#include <iostream>
#include <string>
class Jucarie {
	//nu are atribute si toate metodele sunt pur virtuale
	//definiti destructorul pur virtual, cei 3 get-eri, metoda “afisare” si operatorul<<
protected:
	virtual void afisare(std::ostream& out) const = 0;
public:
	virtual ~Jucarie() = 0;
	virtual float getPret() const = 0;
	virtual std::string getNume() const = 0;
	virtual int getVarstaMinima() const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Jucarie* const& Jucarie);
};

