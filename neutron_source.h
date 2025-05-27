// alpha_source.h
// initialises simple alpha sources
// ella beck
// 27/05/25

#ifndef NEUTRON_SOURCE_H
#define NEUTRON_SOURCE_H

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<chrono>

#include "radiation_source.h"

class NeutronSource : public RadiationSource
{
public:
    // default constructor
    NeutronSource();

    // parameterised constructor
    NeutronSource(std::string name_in, double energy_kev_in, double activity_bq_in,
    double half_life_s_in);

    // other functions
    double doseRate(double distance_m) const override;

    // destructor
    ~NeutronSource() {}
};

#endif