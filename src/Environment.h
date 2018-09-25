#ifndef _ENVIRONMENT_H_
#define _ENVIRONMENT_H_

#include "Vector3D.h"

class Environment
{
public:

    struct TargetReturn
    {
        double PowerAtReceiveAntenna_dB;
        double Frequency_Hz;
    };
    
    struct Waveform
    {
        double TxPower_dBm;
        double Frequency_Hz;
        double Duration_s;
        
        Vector3D StartPosition_m;
        Vector3D StartOrientation_deg;
    };
    
    Environment(double timestep_s, radarDwellLength_s);
    virtual ~Environment(){};
    
    ScheduleWaveform(Waveform

private:
    struct ScheduledEmission
    {
        double StartTime_s;
        double EndTime_s;
        double TxPower_dBm;
        
        Vector3D StartLocation_m;
        Vector3D StartOrientation_deg;
    };
    
    std::vector<ScheduledEmission> currentEmissions_;
    
    std::vector<Target> targets_;
    std::vector<Radar> radars_;
}

#endif // _ENVIRONMENT_H_
