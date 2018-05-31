// myVector.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	int i;
	int mas_i[] = { 1, 2, 3, 4, 5 };
	float mas_f[] = { 0.5, 0.9, 0.7 };
	int mas_i_1[] = { 5, 9, -4 };
	float mas_f_1[] = { 0.1, 0.3, 0.001, 0.5 };
	cout << "Integer vectors: " << endl;
	try {
		Vector<int>obj_i_1(mas_i, 5);
		Vector<int>obj_i_2(mas_i_1, 3);
		Vector<int>result_i;
		for (i = 0; i < 5; i++)
			cout << obj_i_1[i] << " ";
		cout << endl;
		for (i = 0; i < 3; i++)
			cout << obj_i_2[i] << " ";
		cout << endl;
		result_i = obj_i_1 + obj_i_2;
		cout << "Result of addition: ";
		for (i = 0; i < 5; i++)
			cout << result_i[i] << " ";
		cout << endl;
		result_i = obj_i_1 - obj_i_2;
		cout << "Result of subtraction: ";
		for (i = 0; i < 5; i++)
			cout << result_i[i] << " ";
		cout << endl;
		result_i = obj_i_1 * obj_i_2;
		cout << "Multiplication result: ";
		for (i = 0; i < 5; i++)
			cout << result_i[i] << " ";
		cout << endl;
		result_i = obj_i_1 / obj_i_2;
		cout << "Result of division: ";
		for (i = 0; i < 5; i++)
			cout << result_i[i] << " ";
		cout << endl;
		cout << endl;
		cout << "Fractional vectors: " << endl;
		Vector<float>obj_f_1(mas_f, 3);
		Vector<float>obj_f_2(mas_f_1, 4);
		Vector<float>result_f;
		for (i = 0; i < 3; i++)
			cout << obj_f_1[i] << " ";
		cout << endl;
		for (i = 0; i < 4; i++)
			cout << obj_f_2[i] << " ";
		cout << endl;
		result_f = obj_f_1 + obj_f_2;
		cout << "Result of addition: ";
		for (i = 0; i < 4; i++)
			cout << result_f[i] << " ";
		cout << endl;
		result_f = obj_f_1 - obj_f_2;
		cout << "Result of subtraction ";
		for (i = 0; i < 4; i++)
			cout << result_f[i] << " ";
		cout << endl;
		result_f = obj_f_1 * obj_f_2;
		cout << "Multiplication result: ";
		for (i = 0; i < 4; i++)
			cout << result_f[i] << " ";
		cout << endl;
		result_f = obj_f_1 / obj_f_2;
		cout << "Result of division: ";
		for (i = 0; i < 4; i++)
			cout << result_f[i] << " ";
		cout << endl;
		cout << endl;
		cout << "The reference to the fifth element of the resultant array of a fractional vector: " << endl;
		cout << result_f[5];
	}
	catch (char*s)
	{
		cout << s << endl;
	}
	catch (int num) {
		cout << "You can not divide by " << num << endl;
	}
	system("pause");
	return 0;
}

