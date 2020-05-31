#ifndef IPRINTABLE_H
#define IPRINTABLE_H

#include <iostream>
#include <string>

using namespace std;

class IPrintable
{
    friend ostream &operator<<(ostream &os, const IPrintable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~IPrintable() = default;
};

#endif // IPRINTABLE_H