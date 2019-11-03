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
    cout << "--Staff--" << endl;
    staff.putData();
    cout << endl;
    staff2.putData();
    cout << endl;
    staff3.putData();
    cout << endl;

    Faculty faculty("Johnson","Anne","243","F","4/27/62","Ph.D","Engineering",3,"Full");
    Faculty faculty2("Bouris","William","791","F","3/14/75","Ph.D","English",1,"Associate");
    Faculty faculty3("Andrade","Christopher"," 623","F","5/22/80","MS","Physical Education",0,"Assistant");
    cout << "--Faculty--" << endl;
    faculty.putData();
    cout << endl;
    faculty2.putData();
    cout << endl;
    faculty3.putData();
    cout << endl;

    Partime partime("Guzman","Augusto", "455", "F", "8/10/77", 35.00, 30);
    Partime partime2("Depirro","Martin", "678", "F", "9/15/87", 30.00, 15);
    Partime partime3("Aldaco","Marque", "945", "M", "11/24/88", 20.00, 35);
    cout << "--Partime--" << endl;
    partime.putData();
    cout << endl;
    partime2.putData();
    cout << endl;
    partime3.putData();
    cout << endl;

    Employee employee[9] = *Employee[9];
    Employee *employee[9];
    Employee employee[0] = new Staff("Allen","Paita","123","M","2/23/59",50.00);

    return 0;
}