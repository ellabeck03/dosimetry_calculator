// radiation_source.h
// initialises simple radiation sources
// ella beck
// 26/05/25


#ifndef RADIATION_SOURCE_H
#define RADIATION_SOURCE_H

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<chrono>

class RadiationSource
{
public:
    enum class Type {alpha, beta, gamma, neutron};

protected:
    std::string name;
    Type type;
    double energy_kev;
    double activity_bq;
    double half_life_s;
    double emission_prob{1};

public:
    // default constructor
    RadiationSource();

    // parameterised constructor
    RadiationSource(std::string name_in, Type t, double energy_kev_in, double activity_bq_in, 
        double half_life_s_in);

    // getters
    const std::string& getName() const {return name;}
    double getEnergy() const;
    double getActivity() const {return activity_bq;}
    double getHalfLife() const {return half_life_s;}
    double getEmissionProbability() const {return emission_prob;}

    // setters
    void setEnergy(double energy_kev_in);
    void setActivity(double activity_bq_in);
    void setEmissionProbability(double probability_in);

    // other functions
    double findCurrentActivity(double time_elapsed_s);
    virtual std::string printInformation() const;
    virtual double doseRate(double distance_m) const{0;}

    // destructor
    ~RadiationSource() {}

};

#endif