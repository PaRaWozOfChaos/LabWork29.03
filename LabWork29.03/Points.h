#pragma once

template<typename TNum>
class CPoint 
{
	TNum x, y;
public:
	CPoint(TNum a, TNum b) :x(a), y(b) {}
	CPoint() :x(0), y(0) {} // TNum(0)?
};
