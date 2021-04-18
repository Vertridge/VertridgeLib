#pragma once

#include <vector>
#include "../Point.h"

namespace Vertridge {

	class Rectangle
	{
	public:
		Rectangle();
		Rectangle(const FPoint& pos);
		Rectangle(const FPoint& pos, const FPoint& size);
		Rectangle(const Rectangle& rect);

		FPoint GetPosition();
		void SetPosition(const FPoint& pos);
		FPoint GetSize();
		void SetSize(const FPoint& size);

		//Returns vector of the 4 corner points (lower left, lower right, upper left, upper right)
		std::vector<FPoint> GetPoints();
		double GetSurfaceArea();

		//Does not work with negative size!
		bool Collide(const Rectangle& rect);
		bool Collide(const FPoint& point);
	private:
		FPoint _pos;
		FPoint _size;

	};

}