#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int* sortowania_wybieranie(int rozmiar, int tab[]) {
	int min = 100;
	int poz = 0;
	int* sorttab = new int[rozmiar];

	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			if (tab[i] < min)
			{
				min = tab[i];
				poz = i;
			}
		}
		sorttab[i] = min;
		tab[poz] = 100;
		min = 200;
		poz = NULL;
	}
	return sorttab;
}

void wyswietl(int* tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] << " ";
	}
}

int main()
{
	const int N = 10;
	int tab[N];

	wyswietl(tab, N);
	wyswietl(sortowania_wybieranie(N, tab), N);
}