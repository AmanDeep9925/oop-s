#include <iostream>
using namespace std;

class bubsort
{
	int arr[10], i, j, size;
public:
	void add_arr()
	{
		cout << "Enter the size of the array:-";
		cin >> size;

		cout << "Enter the array element: ";
		for (int i = 0; i < size; ++i)
		{
			cin >> arr[i];
		}
	}

	void sort()
	{
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size - i; ++j) {
				if (j + 1 < size && arr[j] > arr[j + 1]) {
					//swap
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}

	void out_arr()
	{
		cout << "Array is as : ";
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
	}

};

int main()
{
	bubsort b1;
	b1.add_arr();
	b1.sort();
	b1.out_arr();
	return 0;
}