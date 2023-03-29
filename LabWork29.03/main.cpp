#include "Points.h"

CPoint<int> read_point() { 
	int x, y;
	std::cin >> x >> y;
	return CPoint<int>(x,y); };
int main() {
	CPoint<int> A = read_point();
	CPoint<int> B = read_point();
	CPoint<int> C = read_point();
	double ab = A.distance(B);
	double bc = B.distance(C);
	double ca = C.distance(A);
	double P = ab + bc + ca;
	double p = P * 0.5;
	double S = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	std::cout << "P= " << P << "|S= " << S << '\n';
}