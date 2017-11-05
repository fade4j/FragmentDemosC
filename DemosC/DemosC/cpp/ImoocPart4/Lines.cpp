#include "Coordinate.cpp"
class Lines
{
public:
	Lines(int a, int b, int c, int d) :m_coorA(a, b), m_coorB(c, d)
	{

	}
	~Lines()
	{
	}

private:
	Coordinate m_coorA;
	Coordinate m_coorB;
};