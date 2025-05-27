// alpha_source.h
// initialises simple gamma sources
// ella beck
// 27/05/25

#ifndef GAMMA_SOURCE_H
#define GAMMA_SOURCE_H

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<chrono>

#include "radiation_source.h"

class GammaSource : public RadiationSource
{
public:
    // default constructor
    GammaSource();

    // parameterised constructor
    GammaSource(std::string name_in, double energy_kev_in, double activity_bq_in,
    double half_life_s_in);

    // other functions
    double doseRate(double distance_m) const override;

    // destructor
    ~GammaSource() {}
};

#endif