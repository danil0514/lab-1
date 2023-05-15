#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int size_vec = 0;

    int count_value_arr_vect = 0;

    //Базовая установка
    while (size_vec < 1){
        cout << "Введите предпологаемое количество векторов которое вы хотели бы использовать" << endl;
        cin >> size_vec;
    }
    vector *arr_vector = new vector[size_vec];

    int coin_selection = 1; 
    while (coin_selection > 0)
    {
        cout << "1 - Ручное добавление векторов" << endl;
        cout << "2 - Рандомное заполнение векторов" << endl;
        cout << "3 - Просмотр вектора" << endl;
        cout << "4 - Модуль вектора" << endl;
        cout << "5 - Скалярное произведение векторов" << endl;
        cout << "6 - Сложение вектаров" << endl;
        cout << "7 - Вычитание векторов" << endl;
        cout << "0 - Выход" << endl;
        cin >> coin_selection;
        system("cls");
        switch (coin_selection)
        {
        case 1:
            fun_hand_add_vector();
        case 2:
            fun_rand_add_vector();
        case 3:
            look_list_vector();
        case 4:
            Mod_vector();
        default:
            cout << "Введите один из вариантов" << endl;
            break;
        }
    }
    delete[] arr_vector;
}

void print_select_vector() {
    
}

void fun_hand_add_vector(vector *&arr,int &size, const vector value) {
    int num_append;
    cout << "Сколько векторов хотите добавить ?" << endl;
    cin >> num_append;
    for (int)
    
}

void push_back(vector*& arr, int& size, const vector value) {
    vector* newArray = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i]

    }
}

void fun_rand_add_vector() {

}

void look_list_vector() {

}

void Mod_vector() {


}

