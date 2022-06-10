#include <vector>
#include <set>
#include <string>
#include "printer.h"

using namespace std;

struct MyComp {
    bool operator()(string const &a, string const &b) const {
        return a[0] < b[0];
    }
};

int main() {
    set<string, MyComp> b = {"arch", "any", "zero", "Linux"};
    cout << "set=" << b << endl;
    return 0;
}
