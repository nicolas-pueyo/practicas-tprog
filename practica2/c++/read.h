#include "inst.h"
#include <stack>
#include <string>
#include <cstdint>

class read: public inst
{
public:
    void ejecutar(std::stack<std::int32_t> &pila, int32_t& pc) const override;
    std::string nombre() const override;
};
