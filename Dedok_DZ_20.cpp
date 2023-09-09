#include <iostream>
using namespace std;
void initializeMatrix(int matrix[10][10], int size) {
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}

void initializeMatrix(double matrix[10][10], int size) {
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}

void initializeMatrix(char matrix[10][10], int size) {
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[10][10], int size) {
    cout << "Матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void printMatrix(double matrix[10][10], int size) {
    cout << "Матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void printMatrix(char matrix[10][10], int size) {
    cout << "Матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
void findMinMax(int matrix[10][10], int size, int& min, int& max) {
    min = max = matrix[0][0];
    for (int i = 1; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
}

void findMinMax(double matrix[10][10], int size, double& min, double& max) {
    min = max = matrix[0][0];
    for (int i = 1; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
}

void findMinMax(char matrix[10][10], int size, char& min, char& max) {
    min = max = matrix[0][0];
    for (int i = 1; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int intMatrix[10][10];
    double doubleMatrix[10][10];
    char charMatrix[10][10];
    int size;

    cout << "Введите размер матрицы: ";
    cin >> size;
    initializeMatrix(intMatrix, size);
    printMatrix(intMatrix, size);

    int minInt, maxInt;
    findMinMax(intMatrix, size, minInt, maxInt);
    cout << "Минимальный элемент на главной диагонали: " << minInt << "\n";
    cout << "Максимальный элемент на главной диагонали: " << maxInt << "\n";

    initializeMatrix(doubleMatrix, size);
    printMatrix(doubleMatrix, size);

    double minDouble, maxDouble;
    findMinMax(doubleMatrix, size, minDouble, maxDouble);
    cout << "Минимальный элемент на главной диагонали: " << minDouble << "\n";
    cout << "Максимальный элемент на главной диагонали: " << maxDouble << "\n";

    initializeMatrix(charMatrix, size);
    printMatrix(charMatrix, size);

    char minChar, maxChar;
    findMinMax(charMatrix, size, minChar, maxChar);
    cout << "Минимальный элемент на главной диагонали: " << minChar << "\n";
    cout << "Максимальный элемент на главной диагонали: " << maxChar << "\n";
    cout << "\n";
}
