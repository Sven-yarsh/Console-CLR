#include "stdafx.h"
#include <iostream>
//#include "MyForm.h"

//using namespace System;
using namespace std;

int main3() //array<System::String ^> ^args
{
   //System::Console::WriteLine(L"Hello World");

   cout << "hello sven"<< '\n';

   char arr[10];


   //for (int ii = 0; ii < 10; ii++) {
   //   arr[ii] = 0;
   //}

   for (auto val : arr) {
      cout << val << '\n';
   }

   System::IntPtr scan0(arr);

   //int token = 1;
   //int * jeff = (int *)(1);
   //*jeff = 123;

   cout << "break" << '\n';

   char * wally = (char *)scan0.ToPointer();

   for (int ii = 0; ii < 10; ii++) {
      cout << wally[ii] << '\n';
   }
   
   return 0;
}