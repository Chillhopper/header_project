#include <iostream>
#include "puddingHeader.h"

void testFunc(){
    std::cout << "its working" << '\n' << std::endl;

}
//just declaring string gave me errors, take note of "std::string"
void pud_counter(std::string x[]){
    for(int i = 0; i<= sizeof(x); i++){
    std::cout << "pudding flavor is: " << x[i] << '\n' << std::endl;
}

}

