#pragma once
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#define YOURLIBRARY_DLLEXPORT _declspec(dllexport)
namespace cie
{
	YOURLIBRARY_DLLEXPORT void input(double vector[], int size, string name);
	YOURLIBRARY_DLLEXPORT void print(double vector[], int size, string name);
	YOURLIBRARY_DLLEXPORT bool checksize(int size);
	YOURLIBRARY_DLLEXPORT double dotproduct(double v1[], double v2[], int size);
	YOURLIBRARY_DLLEXPORT double Euclidean_norm(double v[], int size);
	YOURLIBRARY_DLLEXPORT double max_norm(double v[], int size);
	YOURLIBRARY_DLLEXPORT double* createArray(string name, int& size);
}
