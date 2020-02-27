//
//  main.cpp
//  Lab1
//
//  Created by Кирилл Броцкий on 08.02.2020.
//  Copyright © 2020 Кирилл Броцкий. All rights reserved.
//

#include <iostream>
#include "Student.h"

using namespace std;
int main() {
    int n;
    cout << "n=";
    cin >> n; // Ввод с клавиатуры n
//double SumRashod = 0; // Суммарный расход топлива для всех автомобилей
    Student **ppA; // Указатель на массив указателей
    ppA = new Student*[n]; // Создаем массив указателей
    for (int i = 0; i<n; i++)
    {
        int nadb = 0; // Неизвестное число объектов
        char S[64]; int r = 0;  // Вспомогательные переменные для ввода fio
        cout << "Object N=" << (i + 1) << ":\n" << "fio: ";
        cin >> S; // Ввод fio
        cout << "oklad="; cin >> r;
        cout << "nadb="; cin >> nadb;
        ppA[i] = new Student(S, r, nadb); // Создание объекта динамически с вызовом конструктора с параметрами
    }
    cout<< "----------------ВЫВОД----------------"<<endl;
    for (int i = 0; i<n; i++) ppA[i]->print();
    for (int i = 0; i<n; i++) delete ppA[i];
    delete [] ppA;
    return 0;
}
