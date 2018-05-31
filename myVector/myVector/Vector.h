#pragma once

template <class T>
class Vector
{
	T *mas;
	int size;
public:
	Vector(T* obj, int size_obj);
	Vector();
	~Vector();

	T operator [](int num);
	Vector<T>& operator =(Vector & obj);
	bool operator ==(Vector obj);
	Vector<T> operator+(Vector obj);
	Vector<T> operator-(Vector obj);
	Vector<T>  operator*(Vector obj);
	Vector<T>  operator/(Vector obj);

};