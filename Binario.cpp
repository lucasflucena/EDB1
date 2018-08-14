#include <cassert>
#include <iostream>
#include<string>
using namespace std;

string binary_calculator="";
string binary_returner="";
string toBinary(int n)
{   
    binary_calculator = ( n % 2 == 0 ?"0":"1" ) + binary_calculator;
    
    if (n / 2 != 0) 
        toBinary(n / 2);
    else
    	binary_returner = binary_calculator;
        binary_calculator = "";
        return binary_returner;

}

int main(void)
{   
	assert( "101" == toBinary(5) ); 
	assert( "10110" == toBinary(22) );
    assert( "10010101" == toBinary(149) );
    assert( "100110010010" == toBinary(2450) );

    std::cout << "All tests passed!" << std::endl;

	return 0;
}

   
