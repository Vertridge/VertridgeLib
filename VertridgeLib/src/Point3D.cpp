#include "Point3D.h"

namespace Vertridge {

	IPoint3D::IPoint3D() : _x(0), _y(0), _z(0)
	{
	}

	IPoint3D::IPoint3D(int x, int y, int z) : _x(x), _y(y), _z(z)
	{
	}

	IPoint3D::IPoint3D(const IPoint3D& p) : _x(p._x), _y(p._y), _z(p._z)
	{
	}

	IPoint3D::IPoint3D(const FPoint3D& p) : _x(p._x), _y(p._y), _z(p._z)
	{
	}

	void IPoint3D::operator=(const IPoint3D& p)
	{
		_x = p._x;
		_y = p._y;
		_z = p._z;
	}

	void IPoint3D::operator=(const FPoint3D& p)
	{
		_x = p._x;
		_y = p._y;
		_z = p._z;
	}

	IPoint3D IPoint3D::operator+(const IPoint3D& p2)
	{
		return IPoint3D(_x + p2._x, _y + p2._y, _z + p2._z);
	}

	IPoint3D IPoint3D::operator+(const FPoint3D& p2)
	{
		return IPoint3D(_x + p2._x, _y + p2._y, _z + p2._z);
	}

	IPoint3D IPoint3D::operator-(const IPoint3D& p2)
	{
		return IPoint3D(_x - p2._x, _y - p2._y, _z - p2._z);
	}

	IPoint3D IPoint3D::operator-(const FPoint3D& p2)
	{
		return IPoint3D(_x - p2._x, _y - p2._y, _z - p2._z);
	}

	IPoint3D IPoint3D::operator*(const IPoint3D& p2)
	{
		return IPoint3D(_x * p2._x, _y * p2._y, _z * p2._z);
	}

	IPoint3D IPoint3D::operator/(const IPoint3D& p2)
	{
		return IPoint3D(_x / p2._x, _y / p2._y, _z / p2._z);
	}

	IPoint3D IPoint3D::operator*(int i)
	{
		return IPoint3D(_x * i, _y * i, _z * i);
	}

	IPoint3D IPoint3D::operator/(int i)
	{
		return IPoint3D(_x / i, _y / i, _z / i);
	}

	//IPoint3D IPoint3D::operator*(float f)
	//{
	//	return IPoint3D(_x * f, _y * f, _z * f);
	//}
	//
	//IPoint3D IPoint3D::operator/(float f)
	//{
	//	return IPoint3D(_x / f, _y / f, _z / f);
	//}

	void IPoint3D::operator+=(const IPoint3D& p2)
	{
		_x += p2._x;
		_y += p2._y;
		_z += p2._z;
	}

	void IPoint3D::operator-=(const IPoint3D& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
		_z -= p2._z;
	}

	void IPoint3D::operator*=(const IPoint3D& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
		_z *= p2._z;
	}

	void IPoint3D::operator/=(const IPoint3D& p2)
	{
		_x /= p2._x;
		_y /= p2._y;
		_z /= p2._z;
	}

	void IPoint3D::operator*=(int i)
	{
		_x *= i;
		_y *= i;
		_z *= i;
	}

	void IPoint3D::operator/=(int i)
	{
		_x /= i;
		_y /= i;
		_z /= i;
	}

	//void IPoint3D::operator*=(float f)
	//{
	//	_x *= f;
	//	_y *= f;
	//	_z *= f;
	//}
	//
	//void IPoint3D::operator/=(float f)
	//{
	//	_x /= f;
	//	_y /= f;
	//	_z /= f;
	//}

	bool IPoint3D::operator==(const IPoint3D& p2)
	{
		return _x == p2._x && _y == p2._y && _z == p2._z;
	}

	bool IPoint3D::operator!=(const IPoint3D& p2)
	{
		return _x != p2._x || _y != p2._y || _z != p2._z;
	}

	bool IPoint3D::operator>(const IPoint3D& p2)
	{
		return _x > p2._x && _y > p2._y && _z > p2._z;
	}

	bool IPoint3D::operator<(const IPoint3D& p2)
	{
		return _x < p2._x && _y < p2._y && _z < p2._z;
	}

	bool IPoint3D::operator>=(const IPoint3D& p2)
	{
		return _x >= p2._x && _y >= p2._y && _z >= p2._z;
	}

	bool IPoint3D::operator<=(const IPoint3D& p2)
	{
		return _x <= p2._x && _y <= p2._y && _z <= p2._z;
	}

	float IPoint3D::Distance(const IPoint3D& p2)
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2) + pow((p2._z - _z), 2));
	}

	float IPoint3D::Distance(const FPoint3D& p2)
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2) + pow((p2._z - _z), 2));
	}

	FPoint3D::FPoint3D() : _x(0), _y(0), _z(0)
	{
	}

	FPoint3D::FPoint3D(float x, float y, float z) : _x(x), _y(y), _z(z)
	{
	}

	FPoint3D::FPoint3D(const FPoint3D& p) : _x(p._x), _y(p._y), _z(p._z)
	{
	}

	FPoint3D::FPoint3D(const IPoint3D& p) : _x(p._x), _y(p._y), _z(p._z)
	{
	}

	void FPoint3D::operator=(const FPoint3D& p)
	{
		_x = p._x;
		_y = p._y;
		_z = p._z;
	}

	void FPoint3D::operator=(const IPoint3D& p)
	{
		_x = p._x;
		_y = p._y;
		_z = p._z;
	}

	FPoint3D FPoint3D::operator+(const FPoint3D& p2)
	{
		return FPoint3D(_x + p2._x, _y + p2._y, _z + p2._z);
	}

	FPoint3D FPoint3D::operator+(const IPoint3D& p2)
	{
		return FPoint3D(_x + p2._x, _y + p2._y, _z + p2._z);
	}

	FPoint3D FPoint3D::operator-(const FPoint3D& p2)
	{
		return FPoint3D(_x - p2._x, _y - p2._y, _z - p2._z);
	}

	FPoint3D FPoint3D::operator-(const IPoint3D& p2)
	{
		return FPoint3D(_x - p2._x, _y - p2._y, _z - p2._z);
	}

	FPoint3D FPoint3D::operator*(const FPoint3D& p2)
	{
		return FPoint3D(_x * p2._x, _y * p2._y, _z * p2._z);
	}

	FPoint3D FPoint3D::operator/(const FPoint3D& p2)
	{
		return FPoint3D(_x / p2._x, _y / p2._y, _z / p2._z);
	}

	//FPoint3D FPoint3D::operator*(int i)
	//{
	//	return FPoint3D(_x * i, _y * i, _z * i);
	//}
	//
	//FPoint3D FPoint3D::operator/(int i)
	//{
	//	return FPoint3D(_x / i, _y / i, _z / i);
	//}

	FPoint3D FPoint3D::operator*(float f)
	{
		return FPoint3D(_x * f, _y * f, _z * f);
	}

	FPoint3D FPoint3D::operator/(float f)
	{
		return FPoint3D(_x / f, _y / f, _z / f);
	}

	void FPoint3D::operator+=(const FPoint3D& p2)
	{
		_x += p2._x;
		_y += p2._y;
		_z += p2._z;
	}

	void FPoint3D::operator-=(const FPoint3D& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
		_z -= p2._z;
	}

	void FPoint3D::operator*=(const FPoint3D& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
		_z *= p2._z;
	}

	void FPoint3D::operator/=(const FPoint3D& p2)
	{
		_x /= p2._x;
		_y /= p2._y;
		_z /= p2._z;
	}

	//void FPoint3D::operator*=(int i)
	//{
	//	_x *= i;
	//	_y *= i;
	//	_z *= i;
	//}
	//
	//void FPoint3D::operator/=(int i)
	//{
	//	_x /= i;
	//	_y /= i;
	//	_z /= i;
	//}

	void FPoint3D::operator*=(float f)
	{
		_x *= f;
		_y *= f;
		_z *= f;
	}

	void FPoint3D::operator/=(float f)
	{
		_x /= f;
		_y /= f;
		_z /= f;
	}

	bool FPoint3D::operator==(const FPoint3D& p2)
	{
		return _x == p2._x && _y == p2._y && _z == p2._z;
	}

	bool FPoint3D::operator!=(const FPoint3D& p2)
	{
		return _x != p2._x || _y != p2._y || _z != p2._z;
	}

	bool FPoint3D::operator>(const FPoint3D& p2)
	{
		return _x > p2._x && _y > p2._y && _z > p2._z;
	}

	bool FPoint3D::operator<(const FPoint3D& p2)
	{
		return _x < p2._x && _y < p2._y && _z < p2._z;
	}

	bool FPoint3D::operator>=(const FPoint3D& p2)
	{
		return _x >= p2._x && _y >= p2._y && _z >= p2._z;
	}

	bool FPoint3D::operator<=(const FPoint3D& p2)
	{
		return _x <= p2._x && _y <= p2._y && _z <= p2._z;
	}

	float FPoint3D::Distance(const FPoint3D& p2)
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2) + pow((p2._z - _z), 2));
	}

	float FPoint3D::Distance(const IPoint3D& p2)
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2) + pow((p2._z - _z), 2));
	}

	//IPoint3D operator*(float f, const IPoint3D& p)
	//{
	//	return IPoint3D(f * p._x, f * p._y, f * p._z * f);
	//}

	IPoint3D operator*(int i, const IPoint3D& p)
	{
		return IPoint3D(i * p._x, i * p._y, i * p._z);
	}

	std::ostream& operator<<(std::ostream& os, const IPoint3D& p)
	{
		os << p._x << " " << p._y << " " << p._z;
		return os;
	}

	std::istream& operator>>(std::istream& is, IPoint3D& p)
	{
		is >> p._x >> p._y >> p._z;
		return is;
	}

	FPoint3D operator*(float f, const FPoint3D& p)
	{
		return FPoint3D(f * p._x, f * p._y, f * p._z);
	}

	//FPoint3D operator*(int i, const FPoint3D& p)
	//{
	//	return FPoint3D(i * p._x, i * p._y, i * p._z);
	//}

	std::ostream& operator<<(std::ostream& os, const FPoint3D& p)
	{
		os << p._x << " " << p._y << " " << p._z;
		return os;
	}

	std::istream& operator>>(std::istream& is, FPoint3D& p)
	{
		is >> p._x >> p._y >> p._z;
		return is;
	}

	float Distance(const IPoint3D& p1, const IPoint3D& p2)
	{
		return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2) + pow((p2.GetZ() - p1.GetZ()), 2));
	}

	float Distance(const FPoint3D& p1, const FPoint3D& p2)
	{
		return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2) + pow((p2.GetZ() - p1.GetZ()), 2));
	}

}