#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vector1;
	std::vector<int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);

	cout << "\nVector1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	cout << "Vector1 est un tableau de " << vector1.size() << "cases" << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "\nVector2: " << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;

	cout << "Vector2 est un tableau de " << vector2.size() << "cases" << endl;

	std::vector <std::vector<int> > vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "\nVector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "\nVector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "\nVector1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;


	return 0;
}
