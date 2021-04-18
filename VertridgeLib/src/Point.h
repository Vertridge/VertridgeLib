#pragma once

#include <cmath>
#include <ostream>
#include <istream>

namespace Vertridge {

	class FPoint;

	class IPoint
	{
	public:
		IPoint();
		IPoint(int x, int y);
		IPoint(const IPoint& p);
		IPoint(const FPoint& p);

		void operator=(const IPoint& p);
		void operator=(const FPoint& p);
		IPoint operator+(const IPoint& p2) const;
		IPoint operator+(const FPoint& p2) const;
		IPoint operator-(const IPoint& p2) const;
		IPoint operator-(const FPoint& p2) const;
		IPoint operator*(const IPoint& p2) const;
		IPoint operator/(const IPoint& p2) const;
		IPoint operator*(int i) const;
		IPoint operator/(int i) const;
		void operator+=(const IPoint& p2);
		void operator-=(const IPoint& p2);
		void operator*=(const IPoint& p2);
		void operator/=(const IPoint& p2);
		void operator*=(int i);
		void operator/=(int i);
		void operator*=(float f);
		void operator/=(float f);

		bool operator==(const IPoint& p2) const;
		bool operator!=(const IPoint& p2) const;
		/*
		 * only return true if x AND y are bigger
		 */
		bool operator>(const IPoint& p2) const;
		/*
		* only return true if x AND y are smaller
		*/
		bool operator<(const IPoint& p2) const;
		/*
		* only return true if x AND y are bigger or equal
		*/
		bool operator>=(const IPoint& p2) const;
		/*
		* only return true if x AND y are smaller or equal
		*/
		bool operator<=(const IPoint& p2) const;

		//friend IPoint operator*(float f, const IPoint& p);
		friend IPoint operator*(int i, const IPoint& p);
		//friend IPoint operator/(float f, const IPoint& p);
		friend std::ostream& operator<<(std::ostream& os, const IPoint& p);
		friend std::istream& operator>>(std::istream& is, IPoint& p);

		inline int GetX() const { return _x; }
		inline int GetY() const { return _y; }
		inline void SetX(int x) { _x = x; }
		inline void SetY(int y) { _y = y; }

		inline int* GetXPtr() { return &_x; }
		inline int* GetYPtr() { return &_y; }

		IPoint& Rotate(float r);

		float Distance(const IPoint& p2) const;
		float Distance(const FPoint& p2) const;
	private:
		int _x, _y;
		friend FPoint;
	};

	class FPoint
	{
	public:
		FPoint();
		FPoint(float x, float y);
		FPoint(const FPoint& p);
		FPoint(const IPoint& p);

		void operator=(const FPoint& p);
		void operator=(const IPoint& p);
		FPoint operator+(const FPoint& p2) const;
		FPoint operator+(const IPoint& p2) const;
		FPoint operator-(const FPoint& p2) const;
		FPoint operator-(const IPoint& p2) const;
		FPoint operator*(const FPoint& p2) const;
		FPoint operator/(const FPoint& p2) const;
		FPoint operator*(float f) const;
		FPoint operator/(float f) const;
		void operator+=(const FPoint& p2);
		void operator-=(const FPoint& p2);
		void operator*=(const FPoint& p2);
		void operator/=(const FPoint& p2);
		void operator*=(float f);
		void operator/=(float f);

		bool operator==(const FPoint& p2) const;
		bool operator!=(const FPoint& p2) const;
		/*
		 * only return true if x AND y are bigger
		 */
		bool operator>(const FPoint& p2) const;
		/*
		* only return true if x AND y are smaller
		*/
		bool operator<(const FPoint& p2) const;
		/*
		* only return true if x AND y are bigger or equal
		*/
		bool operator>=(const FPoint& p2) const;
		/*
		* only return true if x AND y are smaller or equal
		*/
		bool operator<=(const FPoint& p2) const;

		friend FPoint operator*(float f, const FPoint& p);
		//friend FPoint operator*(int i, const FPoint& p);
		//friend FPoint operator/(float f, const FPoint& p);
		friend std::ostream& operator<<(std::ostream& os, const FPoint& p);
		friend std::istream& operator>>(std::istream& is, FPoint& p);

		inline float GetX() const { return _x; }
		inline float GetY() const { return _y; }
		inline void SetX(float x) {_x = x;}
		inline void SetY(float y) {_y = y;}
		inline void Set(float x, float y) { _x = x; _y = y; }
		inline float* GetXPtr() { return &_x; }
		inline float* GetYPtr() { return &_y; }
		
		FPoint& Rotate(float r);

		float Distance(const IPoint& p2) const;
		float Distance(const FPoint& p2) const;
	private:
		float _x, _y;
		friend IPoint;
	};

	float Distance(const IPoint& p1, const IPoint& p2);
	float Distance(const FPoint& p1, const FPoint& p2);

	template<class T>
	class Point {
	public:
		Point();
		Point(T x, T y);
		Point(const Point<T>& p);
		
		void operator=(const Point<T>& p);
		Point operator+(const Point<T>& p2) const;
		Point operator-(const Point<T>& p2) const;
		Point operator*(const Point<T>& p2) const;
		Point operator/(const Point<T>& p2) const;
		Point operator*(float f) const;
		Point operator/(float f) const;
		Point operator*(T t) const;
		Point operator/(T t) const;
		void operator+=(const Point<T>& p2);
		void operator-=(const Point<T>& p2);
		void operator*=(const Point<T>& p2);
		void operator/=(const Point<T>& p2);
		void operator*=(float f);
		void operator/=(float f);
		void operator*=(T t);
		void operator/=(T t);

		bool operator==(const Point<T>& p2) const;
		bool operator!=(const Point<T>& p2) const;
		/*
		 * only return true if x AND y are bigger
		 */
		bool operator>(const Point<T>& p2) const;
		/*
		* only return true if x AND y are smaller
		*/
		bool operator<(const Point<T>& p2) const;
		/*
		* only return true if x AND y are bigger or equal
		*/
		bool operator>=(const Point<T>& p2) const;
		/*
		* only return true if x AND y are smaller or equal
		*/
		bool operator<=(const Point<T>& p2) const;

		//friend Point<T> operator*(float f, const Point<T>& p) {
		//	return Point<T>(f * p._x, f * p._y);
		//}
		//
		//friend Point<T> operator*(int i, const Point<T>& p) {
		//	return Point<T>(i * p._x, i * p._y);
		//}

		friend Point<T> operator*(T t, const Point<T>& p) {
			return Point<T>(t * p._x, t * p._y);
		}

		friend std::ostream& operator<<(std::ostream& os, const Point<T>& p) {
			os << p._x << " " << p._y;
			return os;
		}

		friend std::istream& operator>>(std::istream& is, Point<T>& p) {
			is >> p._x >> p._y;
			return is;
		}

		inline T GetX() const { return _x; }
		inline T GetY() const { return _y; }
		inline void SetX(T x) { _x = x; }
		inline void SetY(T y) { _y = y; }
		inline void Set(T x, T y) { _x = x; _y = y; }
		inline T* GetXPtr() { return &_x; }
		inline T* GetYPtr() { return &_y; }

		float Distance(const Point<T>& p2) const;

		//Point<T>& Rotate(float r);

	private:
		T _x, _y;
	};

	template <class T>
	float Distance(const Point<T>& p1, const Point<T>& p2) {
		return sqrt(pow((p2.GetX() - p1.GetX()), 2) + pow((p2.GetY() - p1.GetY()), 2));
	}

	template <class T>
	Point<T>::Point()
	{}

	template <class T>
	Point<T>::Point(T x, T y) : _x(x), _y(y)
	{}
	
	template <class T>
	Point<T>::Point(const Point<T>& p) : _x(p._x), _y(p._y)
	{}

	template <class T>
	void Point<T>::operator=(const Point<T>& p)
	{
		_x = p._x;
		_y = p._y;
	}

	template <class T>
	Point<T> Point<T>::operator+(const Point<T>& p2)  const
	{
		return Point<T>(_x + p2._x, _y + p2._y);
	}

	template <class T>
	Point<T> Point<T>::operator-(const Point<T>& p2) const
	{
		return Point<T>(_x - p2._x, _y - p2._y);
	}

	template <class T>
	Point<T> Point<T>::operator*(const Point<T>& p2) const
	{
		return Point<T>(_x * p2._x, _y * p2._y);
	}

	template <class T>
	Point<T> Point<T>::operator/(const Point<T>& p2) const
	{
		return Point<T>(_x / p2._x, _y / p2._y);
	}

	template <class T>
	Point<T> Point<T>::operator*(float f) const
	{
		return Point<T>(_x * f, _y * f);
	}

	template <class T>
	Point<T> Point<T>::operator/(float f) const
	{
		return Point<T>(_x / f, _y / f);
	}

	template<class T>
	Point<T> Point<T>::operator*(T t) const
	{
		return Point<T>(_x * t, _y * t);
	}

	template<class T>
	Point<T> Point<T>::operator/(T f) const
	{
		return Point<T>(_x / t, _y / t);
	}

	template <class T>
	void Point<T>::operator+=(const Point<T>& p2)
	{
		_x += p2._x;
		_y += p2._y;
	}

	template <class T>
	void Point<T>::operator-=(const Point<T>& p2)
	{
		_x -= p2._x;
		_y -= p2._y;
	}

	template <class T>
	void Point<T>::operator*=(const Point<T>& p2)
	{
		_x *= p2._x;
		_y *= p2._y;
	}

	template <class T>
	void Point<T>::operator/=(const Point<T>& p2)
	{
		_x /= p2._x;
		_y /= p2._y;
	}

	template <class T>
	void Point<T>::operator*=(float f)
	{
		_x *= f;
		_y *= f;
	}

	template <class T>
	void Point<T>::operator/=(float f)
	{
		_x /= f;
		_y /= f;
	}

	template<class T>
	void Point<T>::operator*=(T f)
	{
		_x *= t;
		_y *= t;
	}

	template<class T>
	void Point<T>::operator/=(T f)
	{
		_x /= t;
		_y /= t;
	}

	template<class T>
	inline bool Point<T>::operator==(const Point<T>& p2) const
	{
		return _x == p2._x && _y == p2._y;
	}

	template<class T>
	inline bool Point<T>::operator!=(const Point<T>& p2) const
	{
		return _x != p2._x || _y != p2._y;
	}

	template<class T>
	inline bool Point<T>::operator>(const Point<T>& p2) const
	{
		return _x > p2._x && _y > p2._y;
	}

	template<class T>
	inline bool Point<T>::operator<(const Point<T>& p2) const
	{
		return _x < p2._x && _y < p2._y;
	}

	template<class T>
	inline bool Point<T>::operator>=(const Point<T>& p2) const
	{
		return _x >= p2._x && _y >= p2._y;
	}

	template<class T>
	inline bool Point<T>::operator<=(const Point<T>& p2) const
	{
		return _x <= p2._x&& _y <= p2._y;
	}

	template<class T>
	inline float Point<T>::Distance(const Point<T>& p2) const
	{
		return sqrt(pow((p2._x - _x), 2) + pow((p2._y - _y), 2));
	}

	//template <class T>
	//Point<T> operator*(float f, const Point<T>& p)
	//{
	//	return Point<T>(f * p._x, f * p._y);
	//}

	//template <class T>
	//std::ostream& operator<<(std::ostream& os, const Point<T>& p)
	//{
	//	os << p._x << " " << p._y;
	//	return os;
	//}
}