#include<iostream>
using namespace std;

int somaDigitos(int n) 
{
    int sum=0;

    if(n == 0)
        return sum;
    
    else 
        while(n!=0)
        {
            sum = sum + n % 10;
            n = n/10;
        }
        return sum;

}

int main()
{
    assert( somaDigitos(0) == 0 );
    assert( somaDigitos(1) == 1 );
    assert( somaDigitos(10) == 1 );
    assert( somaDigitos(11) == 2 );
    assert( somaDigitos(11111) == 5 );
    assert( somaDigitos(556) == 16 );
    assert( somaDigitos(2117) == 11 );
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}

