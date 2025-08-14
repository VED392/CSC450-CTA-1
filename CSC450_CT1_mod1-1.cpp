/* Simple Program with a few Errors for Correction
Please be sure to correct all outlined errors.*/
#include<iostream>
/*#include<conio.h>
From the SEI CERT C++ Coding standard, the if we use non standard, platform specific headers usch as <coni.h> violates the guideline:DCL54-CPP which states only include the headers you need and ensure they are part of the standard library or guaranteed by you target platform.   The <conio.h> header is not part of the ISO C++ standard C++ library. It is specific to certain compilers like Turbo C++, MS-DOS environments, and some version of MSVC), and therefore its usage reduces protability, maintainability, and cross platform compatbility of this code. From the readings it emphasizes writing safe, reliable, and secure C++ doe that avoids underfined or implementation- defines behaviors. This include avoiding dependencies on platform specific headers that are not portable or widely supported. From standard input/ output mechanism is recommended std::cin.get()) which is used to ensure compatibility and safety across platforms and compilers.*/
//Main Function
int main()
{
//Standard Ouput Statement
    std::cout << "Welcome to this C++ Program" << std::endl;
    std::cout << "I have corrected all errors for this program." << std::endl;
    // Wait For Output Screen
    std::cout << "Press ENTER to continue..." << std::endl;
    std::cin.get();
    //Main Function return Statement
return 0;
}
