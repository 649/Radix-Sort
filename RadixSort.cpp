#include <iostream>
using namespace std;

void Snapshot(int **A, int r) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < 10; j++)
			cout << A[i][j] << ";";
		cout << endl;
	}
}
void CountingSort(int **A, int d, int r) {
	int** B = new int*[r];
	for (int i = 0; i < r; i++) {
		B[i] = new int[10];
		for (int j = 0; j < 10; j++)
			B[i][j] = 0;
	}
	int* C = new int[10];
	for (int i = 0; i < 10; i++)
		C[i] = 0;
	for (int j = 0; j < r; j++)
		C[A[j][d]]++;
	for (int i = 1; i < 10; i++)
		C[i] += C[i - 1];
	for (int j = r - 1; j >= 0; j--) {
		for(int i = 0; i < 10; i++)
			B[(C[A[j][d]])-1][i] = A[j][i];
		C[A[j][d]]--;
	}
	for (int i = 0; i < r; i++)
		for(int j = 0; j < 10; j++)
			A[i][j] = B[i][j];

	delete[] C;
	for (int i = 0; i < r; i++)
		delete[] B[i];
	delete[] B;
}
void RadixSort(int **A, int r) {
	for (int d = 9; d >= 0; d--)
		CountingSort(A, d, r);
}
int main(int argc, char **argv) {
	int arraySize;
	cin >> arraySize;

	int** Sequence = new int*[arraySize];
	for (int i = 0; i < arraySize; i++){
		Sequence[i] = new int[10];
		for (int j = 0; j < 10; j++)
			cin >> Sequence[i][j];
	}
	RadixSort(Sequence, arraySize);
	Snapshot(Sequence, arraySize); // for printing

	for (int i = 0; i < arraySize; i++)
		delete[] Sequence[i];
	delete[] Sequence;
}