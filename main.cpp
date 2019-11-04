#include "Employee.h"
#include "Staff.h"
#include "Education.h"
#include "Faculty.h"
#include "Partime.h"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    /*Staff staff("Allen","Paita","123","M","2/23/59",50.00);
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
    cout << endl;*/

    Employee *employee[9];
    employee[0] = new Staff("Allen","Paita","123","M","2/23/59",50.00);
    employee[1] = new Staff("Zapata","Steven","456","F","7/12/64",35.00);
    employee[2] = new Staff("Rios","Enrique","789","M","6/2/70",40.00);
    employee[3] = new Faculty("Johnson","Anne","243","F","4/27/62","Ph.D","Engineering",3,"Full");
    employee[4] = new Faculty("Bouris","William","791","F","3/14/75","Ph.D","English",1,"Associate");
    employee[5] = new Faculty("Andrade","Christopher"," 623","F","5/22/80","MS","Physical Education",0,"Assistant");
    employee[6] = new Partime("Guzman","Augusto", "455", "F", "8/10/77", 35.00, 30);
    employee[7] = new Partime("Depirro","Martin", "678", "F", "9/15/87", 30.00, 15);
    employee[8] = new Partime("Aldaco","Marque", "945", "M", "11/24/88", 20.00, 35);

    employee[0]->putData();
    cout << endl;
    employee[1]->putData();
    cout << endl;
    employee[2]->putData();
    cout << endl;
    employee[3]->putData();
    cout << endl;
    employee[4]->putData();
    cout << endl;
    employee[5]->putData();
    cout << endl;
    employee[6]->putData();
    cout << endl;
    employee[7]->putData();
    cout << endl;
    employee[8]->putData();
    cout << endl;

    /*Employee employee[9] = mem Employee[9];
    Employee *employee[9];
    Employee employee[0] = new Staff("Allen","Paita","123","M","2/23/59",50.00);*/

    return 0;
}