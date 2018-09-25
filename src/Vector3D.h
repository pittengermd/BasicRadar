#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#include <cmath>

class Vector3D
{
public:
    Vector3D() : 
        vec_{0,0,0}{}
    
    Vector3D(double x, double y, double z) :
        vec_{x, y, z}{}
    
    Vector3D(double vec[3]) :
        vec_{vec[0], vec[1], vec[2]}{}
    
    virtual ~Vector3D();

    double & operator[](size_t index)
    {
        static_assert(index >= 0 && index <= 2); // Bounds Checking
        return vec_[index];
    }
    
    Vector3D operator+(Vector3D b)
    {
        return Vector3D(vec_[0]+b[0], vec_[1]+b[1], vec_[2]+b[2]);
    }
    
    Vector3D operator-(Vector3D b)
    {
        return Vector3D(vec_[0]-b[0], vec_[1]-b[1], vec_[2]-b[2]);
    }
    
    Vector3D 
    
    double Magnitude()
    {
        return sqrt(vec_[0]*vec_[0] + vec_[1]*vec_[1] + vec_[2]*vec_[2]);
    }

    static double Magnitude(Vector3D a)
    {
        return a.Magtnitude();
    }

    static Vector3D Cross(Vector3D a, Vector3D b)
    {
        return Vector3D(a[1]*b[2]-a[2]*b[1], a[0]*b[2]-a[2]*b[0], a[0]*b[1]-a[1]*b[0]); 
    }
    
    static double Dot(Vector3D a, Vector3D b)
    {
        return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
    }
    
private:
    double vec_[3];
}



#endif // _VECTOR3D_H_
