#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    type1 t1;
    
    t1.show();
    t1.Get_answer();

    
    type2 t2(2.0);
    
    t2.show();
    t2.Get_answer();

    return 0;
}