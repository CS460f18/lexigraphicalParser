#include <iostream>

using namespace std;

int main()
{

	enum ttype {BU = 100, GD = 101, ER = 102};
	int StateTransitions[21][24] = 
	{ 
		{1,2,1,GD,GD,GD,GD,GD,GD,GD,GD,5,6,7,8,12,13,14,15,16,17,18,19,20},
		{1,1,1,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,2,BU,BU,BU,BU,BU,3,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU},
		{ER,4,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER},
		{BU,4,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,8,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,8,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,11,10,BU,BU,BU,BU,BU,BU,BU,BU},
		{ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER,GD,ER,ER,ER,ER,ER,ER,ER,ER,ER,ER},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,GD,BU,GD,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,GD,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,BU},
		{BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,BU,GD,BU,BU,BU,BU,BU,BU,BU,GD}
	};

	cout << StateTransitions[0][0] << endl;

	int rows = sizeof StateTransitions / sizeof StateTransitions[0];
	int cols = sizeof StateTransitions[0] / sizeof(int);
	//cout << size << endl; 
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{	
			cout << StateTransitions[i][j] << " ";
		}
		cout << endl;
	}
}
