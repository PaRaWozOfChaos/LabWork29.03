#include "Points.h"
#include "service.h"
CPoint<int> read_point() { 
	int x, y;
	std::cin >> x >> y;
	return CPoint<int>(x,y); };
int main() {
	/*CPoint<int> A = read_point();
	CPoint<int> B = read_point();
	CPoint<int> C = read_point();
	double ab = A.distance(B);
	double bc = B.distance(C);
	double ca = C.distance(A);
	double P = ab + bc + ca;
	double p = P * 0.5;
	double S = sqrt(p * (p - ab) * (p - bc) * (p - ca));
	std::cout << "P= " << P << "|S= " << S << '\n' << "input the eps:";
	int eps;
	std::cin >> eps;
	if (A.distance(CPoint<int>()) <= eps)std::cout << "A is special";
	if (B.distance(CPoint<int>()) <= eps)std::cout << "B is special";
	if (C.distance(CPoint<int>()) <= eps)std::cout << "C is special";
	NamedPoint<double> a(1,5,'3');
	std::cout << a;*/
	std::ifstream fin("points.txt");
	int k; fin >> k;
	CPoint<double>** line = new CPoint<double>*[k];
	for (size_t i = 0; i < k; ++i)line[i] = ReadPoint<double>(fin);
	for (size_t i = 0; i < k; ++i)std::cout << *line[i] << '\n';
	double length = 0;
	for (size_t i = 1; i < k; ++i)length += line[i-1]->distance(*line[i]);
	std::cout << length <<'\n';
}