#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector <double> aavaas;
    aavaas.push_back(1.0);
    aavaas.push_back(2.0);
    aavaas.push_back(1.5);

    std::sort(aavaas.begin(),aavaas.end());

    std::cout<<aavaas[0]<<aavaas[1]<<aavaas[2]<<" "<<aavaas.size();




    return 0;
}
