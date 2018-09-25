#ifndef _TARGET_PARAMETERS_H_
#define _TARGET_PARAMETERS_H_

#include "Constants.h"
#include "Vector3D.h"

struct TargetParameters
{
    Vector3D Position_m;
    Vector3D Velocity_mps;
    Vector3D Acceleration_mpss;
    Vector3D Orientation_deg;

    double RCS_dBm = 1.0;
};

#endif // _TARGET_PARAMETERS_H_
