#include "stdafx.h"
#include "Vector.h"
template <class T>
Vector<T>::Vector(T* obj, int size_obj)
{
	size = size_obj;
	mas = new T[size];
	for (int i = 0; i < size; i++)
		mas[i] = obj[i];
}

template <class T>
Vector<T>::Vector()
{
	size = 0;
}


template <class T>
Vector<T>::~Vector()
{
}

template <class T>
T Vector<T>::operator [](int num)
{
	if (num >= size)
		throw "This element is not exist!";
	return mas[num];
}
template <class T>
Vector<T>& Vector<T>::operator =(Vector & obj)
{
	if (size != 0)
		delete mas;
	size = obj.size;
	mas = new T[size];
	for (int i = 0; i < size; i++)
		mas[i] = obj.mas[i];
	return *this;
}

template <class T>
bool Vector<T>::operator ==(Vector obj) {
	if (size != obj.size)
		return false;
	else {
		for (int i = 0; i < size; i++)
			if (mas[i] != obj.mas[i])
				return false;
		return true;
	}
}
template <class T>
Vector<T> Vector<T>::operator +(Vector obj) {
	Vector result;
	int i;
	if (size < obj.size)
	{
		result.size = obj.size;
		result.mas = new T[result.size];
		for (i = 0; i < size; i++)
			result.mas[i] = mas[i] + obj.mas[i];

		for (; i < obj.size; i++)
			result.mas[i] = obj.mas[i];
	}
	else {
		result.size = size;
		result.mas = new T[result.size];
		for (i = 0; i < obj.size; i++)
			result.mas[i] = mas[i] + obj.mas[i];

		for (; i < size; i++)
			result.mas[i] = mas[i];
	}
	return result;
}

template <class T>
Vector<T> Vector<T>::operator -(Vector obj) {
	Vector result;
	int i;
	if (size < obj.size)
	{
		result.size = obj.size;
		result.mas = new T[result.size];
		for (i = 0; i < size; i++)
			result.mas[i] = mas[i] - obj.mas[i];

		for (; i < obj.size; i++)
			result.mas[i] = obj.mas[i];
	}
	else {
		result.size = size;
		result.mas = new T[result.size];
		for (i = 0; i < obj.size; i++)
			result.mas[i] = mas[i] - obj.mas[i];

		for (; i < size; i++)
			result.mas[i] = mas[i];
	}
	return result;
}
template <class T>
Vector<T> Vector<T>::operator *(Vector obj) {
	Vector result;
	int i;
	if (size < obj.size)
	{
		result.size = obj.size;
		result.mas = new T[result.size];
		for (i = 0; i < size; i++)
			result.mas[i] = mas[i] * obj.mas[i];

		for (; i < obj.size; i++)
			result.mas[i] = obj.mas[i];
	}
	else {
		result.size = size;
		result.mas = new T[result.size];
		for (i = 0; i < obj.size; i++)
			result.mas[i] = mas[i] * obj.mas[i];

		for (; i < size; i++)
			result.mas[i] = mas[i];
	}
	return result;
}

template <class T>
Vector<T> Vector<T>::operator /(Vector obj) {
	Vector result;
	int i;
	if (size < obj.size)
	{
		result.size = obj.size;
		result.mas = new T[result.size];
		for (i = 0; i < size; i++) {
			if (obj.mas[i] == 0)
				throw 0;
			result.mas[i] = mas[i] / obj.mas[i];
		}

		for (; i < obj.size; i++)
			result.mas[i] = obj.mas[i];
	}
	else {
		result.size = size;
		result.mas = new T[result.size];
		for (i = 0; i < obj.size; i++)
		{
			if (obj.mas[i] == 0)
				throw 0;
			result.mas[i] = mas[i] / obj.mas[i];
		}

		for (; i < size; i++)
			result.mas[i] = mas[i];
	}
	return result;
}
