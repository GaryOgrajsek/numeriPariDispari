#include "coda.cpp"
#include <iostream>
using namespace std;

void Input(coda<int> &miacoda) {
	int temp;
	for (int i = 0; i < DIM; i++) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> temp;
		Enqueue(miaCoda, temp);
	}
}

int main() {
	coda<int> miaCoda;
	Init(miaCoda);
	int pari[DIM], dispari[DIM];
	Input(miaCoda);
	Ordinamento(miaCoda);
	Output();
	return 0;
}