#pragma once

#include <cmath>
#include <ostream>
#include <istream>

namespace Vertridge {

	class FPoint3D;

	class IPoint3D
	{
	public:
		IPoint3D();
		IPoint3D(int x, int y, int z);
		IPoint3D(const IPoint3D& p);
		IPoint3D(const FPoint3D& p);

		//Operators
		void operator=(const IPoint3D& p);
		void operator=(const FPoint3D& p);
		IPoint3D operator+(const IPoint3D& p2);
		IPoint3D operator+(const FPoint3D& p2);
		IPoint3D operator-(const IPoint3D& p2);
		IPoint3D operator-(const FPoint3D& p2);
		IPoint3D operator*(const IPoint3D& p2);
		IPoint3D operator/(const IPoint3D& p2);
		IPoint3D operator*(int i);
		IPoint3D operator/(int i);
		//IPoint3D operator*(float f);
		//IPoint3D operator/(float f);
		void operator+=(const IPoint3D& p2);
		void operator-=(const IPoint3D& p2);
		void operator*=(const IPoint3D& p2);
		void operator/=(const IPoint3D& p2);
		void operator*=(int i);
		void operator/=(int i);
		//void operator*=(float f);
		//void operator/=(float f);

		bool operator==(const IPoint3D& p2);
		bool operator!=(const IPoint3D& p2);
		/*
		 * only return true if x, y AND z are bigger
		 */
		bool operator>(const IPoint3D& p2);
		/*
		* only return true if x, y AND z are smaller
		*/
		bool operator<(const IPoint3D& p2);
		/*
		* only return true if x, y AND z are bigger or equal
		*/
		bool operator>=(const IPoint3D& p2);
		/*
		* only return true if x, y AND z are smaller or equal
		*/
		bool operator<=(const IPoint3D& p2);

		//friend IPoint3D operator*(float f, const IPoint3D& p);
		friend IPoint3D operator*(int i, const IPoint3D& p);
		//friend IPoint operator/(float f, const IPoint& p);
		friend std::ostream& operator<<(std::ostream& os, const IPoint3D& p);
		friend std::istream& operator>>(std::istream& is, IPoint3D& p);

		inline int GetX() const { return _x; }
		inline int GetY() const { return _y; }
		inline int GetZ() const { return _z; }
		inline void SetX(int x) { _x = x; }
		inline void SetY(int y) { _y = y; }
		inline void SetZ(int z) { _z = z; }

		inline int* GetXPtr() { return &_x; }
		inline int* GetYPtr() { return &_y; }
		inline int* GetZPtr() { return &_z; }

		//IPoint3D& Rotate(float r);

		float Distance(const IPoint3D& p2);
		float Distance(const FPoint3D& p2);

	private:
		int _x, _y, _z;
		friend FPoint3D;

	};

	class FPoint3D
	{
	public:
		FPoint3D();
		FPoint3D(float x, float y, float z);
		FPoint3D(const FPoint3D& p);
		FPoint3D(const IPoint3D& p);

		//Operators
		void operator=(const FPoint3D& p);
		void operator=(const IPoint3D& p);
		FPoint3D operator+(const FPoint3D& p2);
		FPoint3D operator+(const IPoint3D& p2);
		FPoint3D operator-(const FPoint3D& p2);
		FPoint3D operator-(const IPoint3D& p2);
		FPoint3D operator*(const FPoint3D& p2);
		FPoint3D operator/(const FPoint3D& p2);
		//FPoint3D operator*(int i);
		//FPoint3D operator/(int i);
		FPoint3D operator*(float f);
		FPoint3D operator/(float f);
		void operator+=(const FPoint3D& p2);
		void operator-=(const FPoint3D& p2);
		void operator*=(const FPoint3D& p2);
		void operator/=(const FPoint3D& p2);
		//void operator*=(int i);
		//void operator/=(int i);
		void operator*=(float f);
		void operator/=(float f);

		bool operator==(const FPoint3D& p2);
		bool operator!=(const FPoint3D& p2);
		/*
		 * only return true if x, y AND z are bigger
		 */
		bool operator>(const FPoint3D& p2);
		/*
		* only return true if x, y AND z are smaller
		*/
		bool operator<(const FPoint3D& p2);
		/*
		* only return true if x, y AND z are bigger or equal
		*/
		bool operator>=(const FPoint3D& p2);
		/*
		* only return true if x, y AND z are smaller or equal
		*/
		bool operator<=(const FPoint3D& p2);

		friend FPoint3D operator*(float f, const FPoint3D& p);
		//friend FPoint3D operator*(int i, const FPoint3D& p);
		//friend IPoint operator/(float f, const IPoint& p);
		friend std::ostream& operator<<(std::ostream& os, const FPoint3D& p);
		friend std::istream& operator>>(std::istream& is, FPoint3D& p);

		inline float GetX() const { return _x; }
		inline float GetY() const { return _y; }
		inline float GetZ() const { return _z; }
		inline void SetX(float x) { _x = x; }
		inline void SetY(float y) { _y = y; }
		inline void SetZ(float z) { _z = z; }

		inline float* GetXPtr() { return &_x; }
		inline float* GetYPtr() { return &_y; }
		inline float* GetZPtr() { return &_z; }

		//FPoint3D& Rotate(float r);
		//
		float Distance(const FPoint3D& p2);
		float Distance(const IPoint3D& p2);
	private:
		float _x, _y, _z;
		friend IPoint3D;
	};

	float Distance(const IPoint3D& p1, const IPoint3D& p2);
	float Distance(const FPoint3D& p1, const FPoint3D& p2);

	template<class T>
	class Point3D
	{
	public:
		Point3D();
		Point3D(T x, T y, T z);
		Point3D(const Point3D<T>& p);

		//Operators
		void operator=(const Point3D<T>& p);
		Point3D<T> operator+(const Point3D<T>& p2);
		Point3D<T> operator-(const Point3D<T>& p2);
		Point3D<T> operator*(const Point3D<T>& p2);
		Point3D<T> operator/(const Point3D<T>& p2);
		//Point3D<T> operator*(int i);
		//Point3D<T> operator/(int i);
		//Point3D<T> operator*(float f);
		//Point3D<T> operator/(float f);
		Point3D<T> operator*(T t);
		Point3D<T> operator/(T t);
		void operator+=(const Point3D<T>& p2);
		void operator-=(const Point3D<T>& p2);
		void operator*=(const Point3D<T>& p2);
		void operator/=(const Point3D<T>& p2);
		//void operator*=(int i);
		//void operator/=(int i);
		//void operator*=(float f);
		//void operator/=(float f);
		void operator*=(T f);
		void operator/=(T f);

		bool operator==(const Point3D<T>& p2);
		bool operator!=(const Point3D<T>& p2);
		/*
		 * only return true if x, y AND z are bigger
		 */
		bool operator>(const Point3D<T>& p2);
		/*
		* only return true if x, y AND z are smaller
		*/
		bool operator<(const Point3D<T>& p2);
		/*
		* only return true if x, y AND z are bigger or equal
		*/
		bool operator>=(const Point3D<T>& p2);
		/*
		* only return true if x, y AND z are smaller or equal
		*/
		bool operator<=(const Point3D<T>& p2);

		//friend Point3D<T> operator*(int i, const Point3D<T>& p) {
		//	return Point3D<T>(i * p._x, i * p._y, i * p._z);
		//}
		//friend Point3D<T> operator*(float f, const Point3D<T>& p) {
		//	return Point3D<T>(f * p._x, f * p._y, f * p._z);
		//}
		friend Point3D<T> operator*(T t, const Point3D<T>& p) {
			return Point3D<T>(t * p._x, t * p._y, t * p._z);
		}
		//friend IPoint operator/(T f, const IPoint& p);
		friend std::ostream& operator<<(std::ostream& os, const Point3D<T>& p) {
			os << p._x << " " << p._y << " " << p._z;
			return os;
		}
		friend std::istream& operator>>(std::istream& is, Point3D<T>& p) {
			is >> p._x >> p._y >> p._z;
			return is;
		}

		inline T GetX() const { return _x; }
		inline T GetY() const { return _y; }
		inline T GetZ() const { return _z; }
		inline void SetX(T x) { _x = x; }
		inline void SetY(T y) { _y = y; }
		inline void SetZ(T z) { _z = z; }

		inline T* GetXPtr() { return &_x; }
		inline T* GetYPtr() { return &_y; }
		inline T* GetZPtr() { return &_z; }

		//Point3D& Rotate(T r);

		T Distance(const Point3D& p2);

	private:
		T _x, _y, _z;
	};

	template <class T>
	float Distance(const Point3D<T>& p1, const Point3D<T>& p2) {
		//TODO return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2));
	}
	template<class T>
	inline Point3D<T>::Point3D()
	{}
	
	template<class T>
	inline Point3D<T>::Point3D(T x, T y, T z) : _x(x), _y(y), _z(z)
	{}

	template<class T>
	inline Point3D<T>::Point3D(const Point3D<T>&p) : _x(p._x), _y(p._y), _z(p._z)
	{}

	template<class T>
	inline void Point3D<T>::operator=(const Point3D<T>&p)
	{
		_x = p._x;
		_y = p._y;
		_z = p._z;
	}

	template<class T>
	inline Point3D<T> Point3D<T>::operator+(const Point3D<T>& p2)
	{
		return Point3D(_x + p2._x, _y + p2._y, _z + p2._z);
	}

	template<class T>
	inline Point3D<T> Point3D<T>::operator-(const Point3D<T>& p2)
	{
		return Point3D(_x - p2._x, _y - p2._y, _z - p2._z);
	}

	template<class T>
	inline Point3D<T> Point3D<T>::operator*(const Point3D<T>& p2)
	{
		return Point3D(_x * p2._x, _y * p2._y, _z * p2._z);
	}

	template<class T>
	inline Point3D<T> Point3D<T>::operator/(const Point3D<T>& p2)
	{
		return Point3D(_x / p2._x, _y / p2._y, _z / p2._z);
	}

	//template<class T>
	//inline Point3D<T> Point3D<T>::operator*(int i)
	//{
	//	return Point3D(_x * i, _y * i, _z * i);
	//}
	//
	//template<class T>
	//inline Point3D<T> Point3D<T>::operator/(int i)
	//{
	//	return Point3D(_x / i, _y / i, _z / i);
	//}
	//
	//template<class T>
	//inline Point3D<T> Point3D<T>::operator*(float f)
	//{
	//	return Point3D<T>(_x * f, _y * f, _z * f);
	//}
	//
	//template<class T>
	//inline Point3D<T> Point3D<T>::operator/(float f)
	//{
	//	return Point3D<T>(_x / f, _y / f, _z / f);
	//}

	template<class T>
	inline Point3D<T> Point3D<T>::operator*(T t)
	{
		return Point3D<T>(_x * t, _y * t, _z * t);
	}

	template<class T>
	inline Point3D<T> Point3D<T>::operator/(T t)
	{
		return Point3D<T>(_x / t, _y / t, _z / t);
	}

	template<class T>
	inline void Point3D<T>::operator+=(const Point3D<T>& p2)
	{
		_x += p2._x;
		_y += p2._y;
		_z += p2._z;
	}

	template<class T>
	inline void Point3D<T>::operator-=(const Point3D<T>& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
		_z -= p2._z;
	}

	template<class T>
	inline void Point3D<T>::operator*=(const Point3D<T>& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
		_z *= p2._z;
	}

	template<class T>
	inline void Point3D<T>::operator/=(const Point3D<T>& p2)
	{
		_x /= p2._x;
		_y /= p2._y;
		_z /= p2._z;
	}

	//template<class T>
	//inline void Point3D<T>::operator*=(int i)
	//{
	//	_x *= i;
	//	_y *= i;
	//	_z *= i;
	//}
	//
	//template<class T>
	//inline void Point3D<T>::operator/=(int i)
	//{
	//	_x /= i;
	//	_y /= i;
	//	_z /= i;
	//}
	//
	//template<class T>
	//inline void Point3D<T>::operator*=(float f)
	//{
	//	_x *= f;
	//	_y *= f;
	//	_z *= f;
	//}
	//
	//template<class T>
	//inline void Point3D<T>::operator/=(float f)
	//{
	//	_x /= f;
	//	_y /= f;
	//	_z /= f;
	//}

	template<class T>
	inline void Point3D<T>::operator*=(T t)
	{
		_x *= t;
		_y *= t;
		_z *= t;
	}

	template<class T>
	inline void Point3D<T>::operator/=(T t)
	{
		_x /= t;
		_y /= t;
		_z /= t;
	}

	template<class T>
	inline bool Point3D<T>::operator==(const Point3D<T>& p2)
	{
		return _x == p2._x && _y == p2._y && _z == p2_z;
	}

	template<class T>
	inline bool Point3D<T>::operator!=(const Point3D<T>& p2)
	{
		return _x != p2._x || _y != p2._y || _z != p2_z;
	}

	template<class T>
	inline bool Point3D<T>::operator>(const Point3D<T>& p2)
	{
		return _x > p2._x && _y > p2._y && _z > p2_z;
	}

	template<class T>
	inline bool Point3D<T>::operator<(const Point3D<T>& p2)
	{
		return _x < p2._x && _y < p2._y && _z < p2_z;
	}

	template<class T>
	inline bool Point3D<T>::operator>=(const Point3D<T>& p2)
	{
		return _x >= p2._x && _y >= p2._y && _z >= p2_z;
	}

	template<class T>
	inline bool Point3D<T>::operator<=(const Point3D<T>& p2)
	{
		return _x <= p2._x && _y <= p2._y && _z <= p2_z;
	}

}