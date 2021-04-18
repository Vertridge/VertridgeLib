#include <iostream>
#include "Point.h"
#include "Figures/Rectangle.h"

int main(int argc, char* argv[]) {
	std::cout << "Hello Lib" << std::endl;
	Vertridge::IPoint p(1, 1);
	Vertridge::IPoint p2 = 5 * p;
	std::cout << p2 << std::endl;

	Vertridge::FPoint fp(0.5, 0.5);
	Vertridge::FPoint fp2 = 2.2 * fp;
	std::cout << fp2 << std::endl;

	Vertridge::Point<int> ip(1, 1);
	Vertridge::Point<int> ip2 = 5 * ip;
	std::cout << ip2 << std::endl;

	float f = Vertridge::Distance(ip, ip2);
	std::cout << "Dist: " << f << std::endl;

	Vertridge::Rectangle rect1({ 1,1 }, { 5,5 });
	Vertridge::Rectangle rect2({ 0,0 }, { 2, 2});
	if (rect1.Collide(rect2))
		std::cout << "Collide!" << std::endl;
	else
		std::cout << "NOT Collide!" << std::endl;

	return 0;
}