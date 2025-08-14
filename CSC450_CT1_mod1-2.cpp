#include<iostream>
/*#include<conio.h>
From the SEI CERT C++ Coding standard, the if we use non standard, platform specific headers usch as <coni.h> violates the guideline:DCL54-CPP which states only include the headers you need and ensure they are part of the standard library or guaranteed by you target platform.   The <conio.h> header is not part of the ISO C++ standard C++ library. It is specific to certain compilers like Turbo C++, MS-DOS environments, and some version of MSVC), and therefore its usage reduces protability, maintainability, and cross platform compatbility of this code. From the readings it emphasizes writing safe, reliable, and secure C++ doe that avoids underfined or implementation- defines behaviors. This include avoiding dependencies on platform specific headers that are not portable or widely supported. From standard input/ output mechanism is recommended std::cin.get()) which is used to ensure compatibility and safety across platforms and compilers.*/
//Standard namespace declaration
using namespace std;
//Main Function
int main()
{
double myMoney = 1000.50; //this should be printed out
//Standard Ouput Statement
cout<<"Please be sure to correct all syntax errors in this program."<<endl;
cout<<"I have corrected all errors for this program." <<endl;
cout<<"The total amount of money available is = $"<< myMoney <<endl;
// Wait For Output Screen
//Main Function return Statement
return 0;
}
