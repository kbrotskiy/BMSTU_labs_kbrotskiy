//
//  Class.h
//  Lab1
//
//  Created by Кирилл Броцкий on 08.02.2020.
//  Copyright © 2020 Кирилл Броцкий. All rights reserved.
//

#ifndef Class_h
#define Class_h

class Student
{
    char fio[64];
    double oklad;
    double nadbavka;
public:

    Student(char fi[], double r, double nadb) // Конструктор для инициализации полей
    {
        strcpy(fio, fi); // Копируем строку, содержащую марку fio
        oklad = r; // Задаем значение oklad
        nadbavka = nadb;
    }
    double getRash(double oklad, double nadbavka)
    {
        return oklad+(oklad*nadbavka)/100;
    }
    
    void print() // Функция для печати полей объекта
    {
        std::cout<<std::endl;
        std::cout << "fio: " << fio <<"   "<< "oklad=" << oklad << "   " << "nadbv=" << getRash(oklad, nadbavka)<<std::endl;
        
    }
};

#endif /* Class_h */
