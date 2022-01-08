#include <iostream>
#include "puddingHeader.h"

using namespace std;
int main()
{
    testFunc();
    string pudding[] = {"Vanilla", "chocolate", "mint", "cheese", "strawberry", "Ellie ;)"};
    pud_counter(pudding);
    return 0;
}

/*
void pud_counter(string x[]){
    for(int i = 0; i<= sizeof(x); i++){
    std::cout << "pudding flavor is: " << x[i] << '\n' << std::endl;
}
*/



