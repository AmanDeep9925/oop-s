#include <iostream>

using namespace std;

class matrix
{
	int m1[10][10], row, col;
	 int row1,col1,m2[10[10]];
public:
	
	void get_mat(int r, int c,int r1,int c1) {
		row = r;
		row1 = r1;
		col = c;
		col1=c1;
		cout << "\n Enter the data of the matrix 1 :";

		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cin >> m1[i][j];
			}
		}

		cout << "\n Enter the data of the matrix 2 :";

		for (int i = 0; i < row1; ++i)
		{
			for (int j = 0; j < col1; ++j)
			{
				cin >> m2[i][j];
			}
		}


	}

	void show_mat() {
		cout << "\n The data of the matrix : \n";

		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout <<  m1[i][j] << " " ;
			}

			cout << endl;
		}
	}

	
};
int main() {
	matrix Mat1;

	Mat1.get_mat(3,3);

	Mat1.show_mat();
}