#ifndef _MATRIX2D_H_
#define _MATRIX2D_H_

#include <cmath>
#include <vector>

template<typename T>
class Matrix2D
{
    Matrix(const size_t rows, const size_t columns) :
        matrix_{rows, std::vector<T>{columns}}
    {
    };

private:
    std::vector<std::vector<T>> matrix_;
};

#endif // _MATRIX2D_H_
