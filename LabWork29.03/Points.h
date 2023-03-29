#pragma once
#include <iostream>
template<typename TNum>
class CPoint 
{
	TNum x, y;
public:
	CPoint(TNum a, TNum b) :x(a), y(b) {}
	CPoint() :x(0), y(0) {} // TNum(0)?
	TNum get_x() const {return x}
	TNum get_y() const { return y }
	void print_on(std::ostream& os) const
	{
		void << '(' << x << ';' << y << ')';
	}
	TNum distance(const CPoint& p);
	CPoint operator +(const CPoint& p) const 
	{
		return CPoint(this->x + p.x, this->y + p.y);
	}
	CPoint operator -(const CPoint& p) const
	{
		return CPoint(this->x - p.x, this->y - p.y);
	}
};
