#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char *source, char *aux, char *destination)
{
	if (n > 0)
	{
		TowerOfHanoi(n - 1, source, destination, aux);
		cout << "(" << source << " - " << destination << ")" << endl;
		TowerOfHanoi(n - 1, aux, source, destination);
	}
}

int main()
{
	int n;
	char src[20] = "A";
	char aux[20] = "B";
	char dest[20] = "C";
	cout << "Enter the number of disks : ";
	cin >> n;
	TowerOfHanoi(n, src, aux, dest);
	return 0;
}
