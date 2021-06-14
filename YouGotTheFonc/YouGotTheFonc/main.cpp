//
//  main.cpp
//  YouGotTheFonc
//
//  Created by Dijoux Jérémy on 14/06/2021.
//

#include <iostream>
#include <string>
#include "powFonction.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    double num1 (3), num2 (2), res = powFonction(num1, num2);
    cout << "Le resultat est : " << res << endl;
    return 0;
}


