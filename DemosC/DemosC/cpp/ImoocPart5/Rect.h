#pragma once
#ifndef RECT_H
#define RECT_H
template <typename T>
class Rect {
public:
	Rect(T height, T width);
	T calcArea();
	T calcPerimeter();

private:
	T m_Height;
	T m_WIdth;
};

template<typename T>
Rect<T>::Rect(T height, T width)
{
	m_Height = height;
	m_WIdth = width;
}
template<typename T>
T Rect<T>::calcArea()
{
	return m_Height * m_WIdth;
}

template<typename T>
T Rect<T>::calcPerimeter()
{
	return 2 * (m_WIdth + m_Height);
}




#endif // !RECT_H
