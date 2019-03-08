#include<iostream>
#include"vectorfunctions.h"
using namespace std;
namespace cie
{
	void input(double vector[], int size, string name)
	{
		for (int i = 0; i < size; ++i)
		{
			cout << " vector " << name << "[" << i << "] = ";
			cin >> vector[i];
		}
	}
	void print(double vector[], int size, string name)
	{
		cout << "The vector" << name << " = [ ";
		for (int i = 0; i < size - 1; ++i)
		{
			cout << vector[i] << ",";
		}
		if (size != 0)cout << vector[size - 1];
		cout << " ]" << endl;
	}
	bool checksize(int size)
	{
		if (size == 0) cout << "Warning:Vector has size zero." << endl;
		return size == 0;
	}
	double dotproduct(double v1[], double v2[], int size)
	{
		if (checksize(size)) return 0;
		double dotproduct = 0.0;
		for (int i = 0; i < size; ++i)
		{
			dotproduct += v1[i] * v2[i];
		}
		return dotproduct;
	}
	double Euclidean_norm(double v[], int size)
	{
		return sqrt(dotproduct(v, v, size));
	}

	double max_norm(double v[], int size)
	{
		if (checksize(size)) return 0;
		double max_norm = abs(v[0]);
		for (int i = 0; i < size; i++)
		{
			if (max_norm < abs(v[i])) max_norm = abs(v[i]);
		}
		return max_norm;
	}
	double* createArray(string name, int& size)
	{
		cout << "Input vector" << name << endl;
		cout << "size = ";
		cin >> size;
		double*target = new double[size];
		input(target, size, "  " + name);
		return target;
	}
}