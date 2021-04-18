#include "Rectangle.h"

namespace Vertridge {

	Rectangle::Rectangle() : _pos(0,0), _size(1,1)
	{
	}

	Rectangle::Rectangle(const FPoint& pos) : _pos(pos), _size(1,1)
	{
	}

	Rectangle::Rectangle(const FPoint& pos, const FPoint& size) : _pos(pos), _size(size)
	{
	}

	Rectangle::Rectangle(const Rectangle& rect) : _pos(rect._pos), _size(rect._size)
	{
	}

	FPoint Rectangle::GetPosition()
	{
		return _pos;
	}

	void Rectangle::SetPosition(const FPoint& pos)
	{
		_pos = pos;
	}

	FPoint Rectangle::GetSize()
	{
		return _size;
	}

	void Rectangle::SetSize(const FPoint& size)
	{
		_size = size;
	}

	std::vector<FPoint> Rectangle::GetPoints()
	{
		return { _pos, _pos + FPoint(_size.GetX(), 0), _pos + FPoint(0, _size.GetY()), _pos + _size };
	}

	double Rectangle::GetSurfaceArea()
	{
		return (double)_size.GetX() * (double)_size.GetY();
	}

	//TODO Better comparison
	bool Rectangle::Collide(const Rectangle& rect)
	{
		bool xoverlap = ((_pos.GetX() >= rect._pos.GetX() && _pos.GetX() <= (rect._pos + rect._size).GetX()) 
			|| (rect._pos.GetX() >= _pos.GetX() && rect._pos.GetX() <= (_pos + _size).GetX()));
		bool yoverlap = ((_pos.GetY() >= rect._pos.GetY() && _pos.GetY() <= (rect._pos + rect._size).GetY())
			|| (rect._pos.GetY() >= _pos.GetY() && rect._pos.GetY() <= (_pos + _size).GetY()));
		return xoverlap && yoverlap;
	}

	bool Rectangle::Collide(const FPoint& point)
	{
		return (point >= _pos && point <= (_pos + _size));
	}

}