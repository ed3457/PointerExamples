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

    //Student std1; 

    //Student* ptr = &std1; 

    //std1.setName("Jason");

    //(*ptr).setName("Jason");

    //ptr->setName("Jason");

    //Student* std2 = new Student;

    //delete std2; // cleanup 

    //std2 = ptr; // this will create a garbage object if we don't have the delete. 


    /*int ar[] = {1,2,3};

    int ar2[5];*/

   /* int size; 

    cout << "Please enter the array's size: \n";
    cin >> size;*/

  //  int ar3[size]; the size must be constant for this to work

    // dynamic arrays 

   // int* dynamicArray = new int[size];

    //int* arrayPtr = dynamicArray; 

    //for (int i = 0;i < size;i++)
    //{
    //    cout << "Please enter a new element \n";
    //  cin >> dynamicArray[i];
    //  /*  cin >> arrayPtr[0]; 
    //    arrayPtr++;*/
    //}

 /*   delete[] dynamicArray;

    dynamicArray = new int[20];*/


    // define an dynamic array of students:
    int courseSize = 2; 
    Student* courseMembers= new Student[courseSize];
    // write a loop to initialize the students 
    string name;
    float gpa;
    for (int i = 0; i < courseSize;i++)
    {   
        cin >> name;
        courseMembers[i].setName(name);
        cin >> gpa;
        courseMembers[i].setGPA(gpa);
    }

    for (int i = 0; i < courseSize;i++)
    {
       
        cout<< courseMembers[i].getName()<<endl;
      
        cout<<  courseMembers[i].getGPA()<<endl;

        cout << "=====================\n";
    }

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
