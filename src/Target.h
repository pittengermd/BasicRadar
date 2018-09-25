#ifndef _TARGET_H_
#define _TARGET_H_

#include "Constants.h"
#include "TargetParameters.h"

class Target
{
public:
    Target();
    Target(const TargetParameters & parameters);
    virtual ~Target(){}
    
    void Update();
    
    double GetRCS_dBm() const {return parameters_.RCS_dBm;}
    
    Vector3D GetPosition_m() const {return parameters_.Position_m;}
    Vector3D GetVelocity_mps() const {return parameters_.Velocity_mps;}
    Vector3D GetOrientation_deg() const {return parameters_.Orientation_deg;}
    
private:
    TargetParameters parameters_;
}



#endif // _TARGET_H_
