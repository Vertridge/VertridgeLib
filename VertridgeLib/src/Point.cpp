#include "Point.h"

namespace Vertridge {

	IPoint::IPoint() : _x(0), _y(0)
	{
	}

	IPoint::IPoint(int x, int y) : _x(x), _y(y)
	{
	}

	IPoint::IPoint(const IPoint& p) : _x(p._x), _y(p._y)
	{
	}

	IPoint::IPoint(const FPoint& p) : _x(p._x), _y(p._y)
	{
	}

	void IPoint::operator=(const IPoint& p)
	{
		_x = p._x;
		_y = p._y;
	}

	void IPoint::operator=(const FPoint& p)
	{
		_x = p._x;
		_y = p._y;
	}

	IPoint IPoint::operator+(const IPoint& p2) const
	{
		return IPoint(_x + p2._x, _y + p2._y);
	}

	IPoint IPoint::operator+(const FPoint& p2) const
	{
		return IPoint(_x + p2._x, _y + p2._y);
	}

	IPoint IPoint::operator-(const IPoint& p2) const
	{
		return IPoint(_x - p2._x, _y - p2._y );
	}

	IPoint IPoint::operator-(const FPoint& p2) const
	{
		return IPoint(_x - p2._x, _y - p2._y);
	}

	IPoint IPoint::operator*(const IPoint& p2) const
	{
		return IPoint(_x * p2._x, _y * p2._y);
	}

	IPoint IPoint::operator/(const IPoint& p2) const
	{
		return IPoint(_x / p2._x, _y / p2._y);
	}

	IPoint IPoint::operator*(int i) const
	{
		return IPoint(_x * i, _y * i );
	}

	IPoint IPoint::operator/(int i) const
	{
		return IPoint(_x / i, _y / i );
	}

	void IPoint::operator+=(const IPoint& p2)
	{
		_x += p2._x;
		_y += p2._y;
	}

	void IPoint::operator-=(const IPoint& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
	}

	void IPoint::operator*=(const IPoint& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
	}

	void IPoint::operator/=(const IPoint& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
	}

	void IPoint::operator*=(int i)
	{
		_x *= i;
		_y *= i;
	}

	void IPoint::operator/=(int i)
	{
		_x /= i;
		_y /= i;
	}

	void IPoint::operator*=(float i)
	{
		_x *= i;
		_y *= i;
	}

	void IPoint::operator/=(float i)
	{
		_x /= i;
		_y /= i;
	}

	bool IPoint::operator==(const IPoint& p2) const
	{
		return _x == p2._x && _y == p2._y;
	}

	bool IPoint::operator!=(const IPoint& p2) const
	{
		return _x != p2._x || _y != p2._y;
	}

	bool IPoint::operator>(const IPoint& p2) const
	{
		return _x > p2._x && _y > p2._y;
	}

	bool IPoint::operator<(const IPoint& p2) const
	{
		return _x < p2._x && _y < p2._y;
	}

	bool IPoint::operator>=(const IPoint& p2) const
	{
		return _x >= p2._x && _y >= p2._y;
	}

	bool IPoint::operator<=(const IPoint& p2) const
	{
		return _x <= p2._x && _y <= p2._y;
	}

	IPoint& IPoint::Rotate(float r)
	{
		float s = sin(r);
		float c = cos(r);
		float xnew = float(_x) * c - float(_y) * s;
		float ynew = float(_x) * s + float(_y) * c;
		_x = floor(xnew);
		_y = floor(ynew);
		return *this;
	}

	float IPoint::Distance(const IPoint& p2) const
	{
		return sqrt(pow((p2._x - _x),2) + pow((p2._y - _y),2));
	}

	float IPoint::Distance(const FPoint& p2) const
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2));
	}

	FPoint::FPoint() : _x(0.0f), _y(0.0f)
	{
	}

	FPoint::FPoint(float x, float y) : _x(x), _y(y)
	{
	}

	FPoint::FPoint(const FPoint& p) : _x(p._x), _y(p._y)
	{
	}

	FPoint::FPoint(const IPoint& p) : _x(p._x), _y(p._y)
	{
	}

	void FPoint::operator=(const FPoint& p)
	{
		_x = p._x;
		_y = p._y;
	}

	void FPoint::operator=(const IPoint& p)
	{
		_x = p._x;
		_y = p._y;
	}

	FPoint FPoint::operator+(const FPoint& p2) const
	{
		return FPoint( _x + p2._x, _y + p2._y );
	}

	FPoint FPoint::operator+(const IPoint& p2) const
	{
		return FPoint(_x + p2._x, _y + p2._y);
	}

	FPoint FPoint::operator-(const FPoint& p2) const
	{
		return FPoint(_x - p2._x, _y - p2._y );
	}

	FPoint FPoint::operator-(const IPoint& p2) const
	{
		return FPoint(_x - p2._x, _y - p2._y);
	}

	FPoint FPoint::operator*(const FPoint& p2) const
	{
		return FPoint(_x * p2._x, _y * p2._y);
	}

	FPoint FPoint::operator/(const FPoint& p2) const
	{
		return FPoint(_x / p2._x, _y / p2._y);
	}

	FPoint FPoint::operator*(float f) const
	{
		return FPoint(_x * f, _y * f );
	}

	FPoint FPoint::operator/(float f) const
	{
		return FPoint(_x / f, _y / f );
	}

	void FPoint::operator+=(const FPoint& p2)
	{
		_x += p2._x;
		_y += p2._y;
	}

	void FPoint::operator-=(const FPoint& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
	}

	void FPoint::operator*=(const FPoint& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
	}

	void FPoint::operator/=(const FPoint& p2)
	{
		_x /= p2._x;
		_y /= p2._y;
	}

	void FPoint::operator*=(float f)
	{
		_x *= f;
		_y *= f;
	}

	void FPoint::operator/=(float f)
	{
		_x /= f;
		_y /= f;
	}

	bool FPoint::operator==(const FPoint& p2) const
	{
		return _x == p2._x && _y == p2._y;
	}

	bool FPoint::operator!=(const FPoint& p2) const
	{
		return _x != p2._x || _y != p2._y;
	}

	bool FPoint::operator>(const FPoint& p2) const
	{
		return _x > p2._x && _y > p2._y;
	}

	bool FPoint::operator<(const FPoint& p2) const
	{
		return _x < p2._x && _y < p2._y;
	}

	bool FPoint::operator>=(const FPoint& p2) const
	{
		return _x >= p2._x && _y >= p2._y;
	}

	bool FPoint::operator<=(const FPoint& p2) const
	{
		return _x <= p2._x&& _y <= p2._y;
	}

	FPoint& FPoint::Rotate(float r)
	{
		float s = sin(r);
		float c = cos(r);
		float xnew = _x * c - _y * s;
		float ynew = _x * s + _y * c;
		_x = xnew;
		_y = ynew;
		return *this;
	}

	float FPoint::Distance(const IPoint& p2) const
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2));
	}

	float FPoint::Distance(const FPoint& p2) const
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2));
	}

	//IPoint operator*(float f, const IPoint& p)
	//{
	//	return IPoint(f * p._x, f * p._y);
	//}

	IPoint operator*(int i, const IPoint& p)
	{
		return IPoint(i * p._x, i * p._y);
	}

	//IPoint operator/(float f, const IPoint& p)
	//{
	//	return IPoint(p._x / f, p._y / f);
	//}

	std::ostream& operator<<(std::ostream& os, const IPoint& p) {
		os << p._x << " " << p._y;
		return os;
	}

	std::istream& operator>>(std::istream& is, IPoint& p)
	{
		is >> p._x >> p._y;
		return is;
	}

	FPoint operator*(float f, const FPoint& p)
	{
		return FPoint(f * p._x, f * p._y);
	}

	//FPoint operator*(int i, const FPoint& p)
	//{
	//	return FPoint(i * p._x, i * p._y);
	//}

	//FPoint operator/(float f, const FPoint& p)
	//{
	//	return FPoint(p._x / f, p._y / f);
	//}

	std::ostream& operator<<(std::ostream& os, const FPoint& p) {
		os << p._x << " " << p._y;
		return os;
	}

	std::istream& operator>>(std::istream& is, FPoint& p)
	{
		is >> p._x >> p._y;
		return is;
	}

	float Distance(const IPoint& p1, const IPoint& p2)
	{
		return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2));
	}

	float Distance(const FPoint& p1, const FPoint& p2)
	{
		return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2));
	}

}