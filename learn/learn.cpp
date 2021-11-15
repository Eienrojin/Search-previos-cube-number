//16. найти номер последнего элемента, который совпадает с кубом предыдущего числа

#include <iostream>
#include <cmath>
using namespace std;

//Обьявление переменных
int* randArray = new int[10];
int lastCubeNum = 0;

//Функции
void fillArray(int* randArray, int length);
void getLastCubeNum(int* randArray, int length);
void clearArray();


int main()
{
    setlocale(LC_ALL, "RUS");

    fillArray(randArray, 10);
    getLastCubeNum(randArray, 10);

    //Соответствуют ли введенные числа задаче или нет
    if (lastCubeNum == 0)
    {
        cout << "Нет чисел, соответствующих условию задачи. Попробуйте снова." << endl;
    }
    else
    {
        cout << "Номер последнего числа (если считать от нуля), совпадающего с кубом предыдущего числа: " << lastCubeNum << endl;
    }

    clearArray();
}

//такое же заполнение массива, как мы писали в классе
void fillArray(int* randArray, int length)
{
    cout << "Введите числа в массив: " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> randArray[i];
    }
}

void getLastCubeNum(int* randArray, int length)
{
    for (int l = 0; l < length; l++)
    {
        if (randArray[l] == pow(randArray[l - 1], 3)) //проверка на куб предыдущего числа.
        {
            lastCubeNum = l;
        }
    }
}

//такое же очищение массива, как мы писали в классе
void clearArray()
{
    delete[] randArray;
    cout << "Массив очищен!" << endl;
}
