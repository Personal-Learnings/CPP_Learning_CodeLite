#include <iostream>
#include "IPrintable.h"

using namespace std;

ostream &operator<<(ostream &os, const IPrintable &obj) {
    obj.print(os);
    return os;
}