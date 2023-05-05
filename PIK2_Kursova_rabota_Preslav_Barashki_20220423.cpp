// PIK2_Kursova_rabota_Preslav_Barashki_20220423.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Задание 12.Преслав Йорданов Барашки - 20220423
Дадена е статична двумерна матрица arrayX от цели числа с n реда и колони(1 < n < 30).
С помощта на функции да се зададат стойности на елементите на масива и изведе на екрана на конзолата в табличен вид.
Да се намери сумата на всички елементи с четни индекси под главният диагонал, както и сумата на елементите по него.За целта да се използват отново подходящи функции.
Задължително да се използва предаването на параметри по адрес с указател.
*/

#include <iostream>
using namespace std;

void arrayFilling(int array[][1], int &arrayRows, int &arrayCols) {
    
    int rows = arrayRows;
    int cols = arrayCols;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "Please input value for cell" << "[" << row << "]" << "[" << col << "] in the array \n";
            cin >> array[row][col];
        }
    }
    
}

int main()
{
   int const ARRAY_MAX_SIZE = 30;
    int rows, cols, input;
    cout << "Input number value for rows of the matrix \n";
    cin >> input;
    while (input <= 1 || input >= 30) {
        cout << "Please enter correct value for rows number \n";
        cin >> input;
    }
    rows = input;
    input = 0;
    cout << "Input number value for cols of the matrix \n";
    cin >> input;
    while (input <= 1 || input >= 30) {
        cout << "Please enter correct value for cols number \n";
        cin >> input;
    }
    cols = input;

    int arrayX[ARRAY_MAX_SIZE][ARRAY_MAX_SIZE]{};

    arrayFilling(&arrayX[ARRAY_MAX_SIZE][ARRAY_MAX_SIZE], &rows, &cols);
    
    /*
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "Please input value for cell" << "["<< row << "]"<<"["<<col<<"] in the array \n";
            cin >> arrayX[row][col];
        }
    }
    */

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << arrayX[row][col] << " ";
        }
        cout << "\n";
    }

}



