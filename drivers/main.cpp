#include "vectorfunctions.h"
#include<iostream>
using namespace std;
int main()
{
	int option;
	do {
		cout << "----Menu----\n"
			"[1]dotproduct\n"
			"[2]eudidean norm\n"
			"[3]maximum norm\n"
			"[4]exit\n\n";
		cout << "Input: ";
		cin >> option;
		cout << endl;
		if (option == 1)
		{
			int size1, size2;
			double*v1 = cie::createArray("v1", size1);
			double*v2 = cie::createArray("v2", size2);
			if (size1 != size2)
			{
				cout << "\n Error: vector sizes don't match.\n" << endl;
				continue;
			}
			cout << "dotproduct is " << cie::dotproduct(v1, v2, size1) << "\n" << endl;
			delete[] v1;
			delete[] v2;
		}
		else if (option == 2)
		{
			int size1;
			double*v1 = cie::createArray("v1", size1);
			cout << "\n Enclidean norm is " << cie::Euclidean_norm(v1, size1) << "\n" << endl;
			delete[] v1;
		}
		else if (option == 3)
		{
			int size1;
			double*v1 = cie::createArray("v1", size1);
			cout << "\n Maximum norm is " << cie::max_norm(v1, size1) << "\n" << endl;
			delete[] v1;
		}
	} while (option != 4);

	return 0;
}