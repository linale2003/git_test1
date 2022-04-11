#include <iostream>

using namespace std;


int main() {
	
	int a, b, c, d;
	int ind1 = 0;
	int ind2 = 0;
	
	cout << "Enter the size of the first matrix" << endl;  // Ввод размера первой матрицы
	cout << "lines: ";
	cin >> a;
	cout << "columns: ";
	cin >> b;
	cout << '\n' << "Enter the size of the second matrix" << endl;  // Ввод размера второй матрицы
	cout << "lines: ";
	cin >> c;
	cout << "columns: ";
	cin >> d;
	
	if (b != c) {  // Проверка возможности перемножения матриц
		cout << "Matrices of this size cannot be multiplied";
		return 0;
	}
	
	int matrix_one[a][b];
	int matrix_two[c][d];
	int final_matrix[a][d];
	
	cout << '\n' << "Fill in the first matrix" << endl;  // Заполнение первой матрицы
	
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++) {
			cout << "Element " << i + 1 << "." << j + 1 << ": ";
			cin >> matrix_one[i][j];
		}
	}
	
	cout << '\n' << "Fill in the second matrix" << endl;  // Заполнение второй матрицы
	
	for (int i=0; i<c; i++) {
		for (int j=0; j<d; j++) {
			cout << "Element " << i + 1 << "." << j + 1 << ": ";
			cin >> matrix_two[i][j];
		}
	}
	
	for (int i=0; i<a; i++) {  // Заполнение финальной матрицы нулями
		for (int j=0; j<a; j++) {
			final_matrix[i][j] = 0;
		}
	}
	
	for (int i=0; i<a; i++) {  // Перемножение матриц
		for (int j=0; j<a; j++) {
			for (int k=0; k<b; k++) {
				final_matrix[ind1][ind2] += matrix_one[ind1][k] * matrix_two[k][ind2];
			} ind2++;
		} ind1++;
		ind2 = 0;
	}
	
	cout << '\n';
	
	for (int i=0; i<a; i++) {  // Вывод финальной матрицы
		for (int j=0; j<d; j++) {
			cout << final_matrix[i][j] << '\t';
		} cout << '\n';
	} 
	
	return 0;
}
