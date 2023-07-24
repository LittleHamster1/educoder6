/********** BEGIN **********/
#include "Int.h"

Int::Int() :value(0) {}

Int::Int(const Int& rhs) :value(rhs.value) {}

Int::Int(int v) :value(v) {}

Int::~Int() {}

int Int::getValue()const { return this->value; }

void Int::setValue(int v) { this->value = v; }

Int& Int::operator = (const Int& rhs)
{
    if (this != &rhs)
    {
        this->setValue(rhs.getValue());
    }
    return *this;
}

Int& Int::operator += (const Int& rhs)
{
    this->setValue(this->getValue() + rhs.getValue());
    return *this;
}

Int& Int::operator -= (const Int& rhs)
{
    this->setValue(this->getValue() - rhs.getValue());
    return *this;
}

Int& Int::operator *= (const Int& rhs)
{
    this->setValue(this->getValue() * rhs.getValue());
    return *this;
}

Int& Int::operator /= (const Int& rhs)
{
    this->setValue(this->getValue() / rhs.getValue());
    return *this;
}

Int& Int::operator %= (const Int& rhs)
{
    this->setValue(this->getValue() % rhs.getValue());
    return *this;
}

Int& Int::operator++()
{
    return *this += Int(1);
}

Int& Int::operator--()
{
    return *this -= Int(1);
}

Int Int::operator++(int)
{
    Int ret(*this);
    ++* this;
    return ret;
}

Int Int::operator--(int)
{
    Int ret(*this);
    --* this;
    return ret;
}
/********** END **********/