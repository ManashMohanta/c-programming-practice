#include <stdio.h>
typedef struct emp{
    int salary;
    float id;
    }emp;
int main(){
    emp e1;
    emp*ptr1=&e1;
    (*ptr1).id=101;// we can also write ptr1->id=101; both are same
    ptr1->salary=50000.0;// we can also write (*ptr1).salary=50000.0; both are same
    printf("Employee ID: %.0f\n", e1.id);
    printf("Employee Salary: %.2f\n", e1.salary);
    return 0;
}