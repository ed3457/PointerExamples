// PointerExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

#include "Student.h"
int main()
{
    /*std::cout << "Hello World!\n";

    int* p;

    int x = 10; 

    p = &x; */

   /* cout << x << endl;
    cout << *p << endl;
    cout << &x << endl;
    cout << p << endl;*/

    //int y = 20;

    //p = &y; 

   // cout << p << endl;

   // int* p2; 

    // How can I have p2 assigned to the address of the variable y: 

    /*p2 = p;

    p2 = &y; */

    Student std1; 

    Student* ptr = &std1; 

    std1.setName("Jason");

    (*ptr).setName("Jason");

    ptr->setName("Jason");

    Student* std2 = new Student;

    delete std2; // cleanup 

    std2 = ptr; // this will create a garbage object if we don't have the delete. 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
