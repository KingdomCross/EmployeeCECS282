#include "Employee.h"
#include "Staff.h"
#include "Education.h"
#include "Faculty.h"
#include "Partime.h"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    Staff staff("Allen","Paita","123","M","2/23/59",50.00);
    Staff staff2("Zapata","Steven","456","F","7/12/64",35.00);
    Staff staff3("Rios","Enrique","789","M","6/2/70",40.00);
    staff.putData();
    cout << endl;
    staff2.putData();
    cout << endl;
    staff3.putData();
    cout << endl;

    Faculty faculty("Johnson","Anne","243","F","4/27/62","Ph.D","Engineering",3,"Full");

    return 0;
}