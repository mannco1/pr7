#include "Header.h"
#include <iostream>
using namespace std;

void type1::Get_answer() {
    cout << "������� �������� ����� �������� �" << endl;
}

void type1::show() {
    cout << "��������� 0 = 0" << endl;
}

type2::type2(double a1) {
    A = a1;
}

void type2::Get_answer() {
    cout << "������� �������� � = 0" << endl;
}

void type2::show() {
    cout << "��������� " << A << "*x^2 = 0" << endl;
}