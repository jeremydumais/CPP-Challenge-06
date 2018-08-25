#include "..\include\abundant.h"
#include <algorithm>

using namespace std;

std::vector<unsigned int> abundantHelper::getDivisors(unsigned int p_number)
{
    std::vector<unsigned int> retVal;
    if (p_number==1)
        retVal.push_back(1);
    for(unsigned int i=1;i<p_number;i++)
    {
        if (p_number % i == 0)
            retVal.push_back(i);
    }
    return retVal;
}

unsigned int abundantHelper::getAbundance(const std::vector<unsigned int> &p_divisorVec)
{
    return accumulate(p_divisorVec.begin(), p_divisorVec.end(), 0);
}