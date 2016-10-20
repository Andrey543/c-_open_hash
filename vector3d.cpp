#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};

vector3d::vector3d():x(0),y(0),z(0){}


vector3d::vector3d(int x, int y, int z):x(x),y(y),z(z){}

vector3d vector3d::operator+(vector3d v)
{
    int rezult_x=x+v.x;
    int rezult_y=y+v.y;
    int rezult_z=z+v.z;
    return vector3d(rezult_x,rezult_y,rezult_z);
}

vector3d vector3d::operator-(vector3d v)
{
    int rezult_x=x-v.x;
    int rezult_y=y-v.y;
    int rezult_z=z-v.z;
    return vector3d(rezult_x,rezult_y,rezult_z);
}

bool vector3d::operator==(vector3d v)
{
    return (x==v.x and y==v.y and z==v.z);
}

bool vector3d::operator!=(vector3d v)
{
    return (x!=v.x or y!=v.y or z!=v.z);
}

