/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array> 

int main()
{
    std::array<std::string, 3> colours {"red", "green", "blue"};
    colours[1] = "yellow";
    for(std::string c : colours){
        std::cout << c << " ";
    }
    

    return 0;
}