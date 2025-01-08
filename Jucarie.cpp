#include "Jucarie.h"

std::ostream& operator<<(std::ostream& out, const Jucarie* const& Jucarie)
{
    Jucarie->afisare(out);
    return out;
}
Jucarie::~Jucarie() {

}
