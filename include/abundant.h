#ifndef DIVISOR_H
#define DIVISOR_H

#include <vector>

class abundantHelper
{
    public:
        static std::vector<unsigned int> getDivisors(unsigned int p_number);
        static unsigned int getAbundance(const std::vector<unsigned int> &p_divisorVec);
    private:
};

#endif //DIVISOR_H
