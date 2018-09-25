#ifndef _RADAR_H_
#define _RADAR_H_

#include "Vector3D.h"

class Radar
{
public:
    static double GetMSI_s(){return 0.010;)

    enum class WaveformMode
    {
        CW,
        FMCW,
        Monopulse,
        PD
    };

    Radar(const Vector3D position_m, 
          const Vector3D orientation_deg, 
          const double txPower_dBm,
          const double antennaGain_dBm);
    
    virtual ~Radar(){}
    
private:
    Vector3D position_m_;
    Vector3D orientation_deg_;
    
    double txPower_dBm_;
    double antennaGain_dBm_;
}



#endif // _RADAR_H_
