#include <iostream>

using namespace std;

class mat
{	int row, col;
	int** m;

public:
	mat(int r, int c) {
		row = r;
		col = c;
		m = new int* [3];
		for (int i = 0; i < col; ++i)
		{
			m[i] = new int[col];
		}
	}

	void fiil_mat() {
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cin >> m[i][j];
			}
		}

	}

	void print_mat() {
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout << m[i][j] << " ";
			}
			cout<<"\n";
		}

	}
	~mat();

};

int main()
{

}
