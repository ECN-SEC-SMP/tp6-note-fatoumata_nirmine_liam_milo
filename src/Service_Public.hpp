
#ifndef Service_Public_H
#define Service_Public_H

#include "Case"
#include "Case_Achetable.hpp"

#include <iostream>
using namespace std;


class Service_Public: public Case_Achetable{
private: 
    int loyer_m ;
public: 
    Service_Public(loyer_m);
    calculer_loyer(); 
}
#endif