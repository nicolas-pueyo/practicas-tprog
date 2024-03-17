#include <iostream>
#include <string>

using namespace std;

class Pito {};

template <typename T>
class Zurullo {
};

template <typename T>
class pruebaClase {
    public:
    void printtype() {
        cout << typeid(T).name();
    }
};

int main() {
   // pruebaClase<string>* test = new pruebaClase<string>();
   // test->printtype();
    pruebaClase<Zurullo<Pito>>* test1 = new pruebaClase<Zurullo<Pito>>();
    test1->printtype();
}