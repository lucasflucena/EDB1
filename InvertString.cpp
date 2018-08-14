#include <cassert>
#include <iostream>
#include <string>


using namespace std;

string revert(string s)
{

// Lê o tamanho do string s.

    int len = s.size();

// Caso s seja vazio ou tenha apenas 1 elemento, irá retornar automaticamente o string s.

    if (len == 0 || len == 1)
    	return s ;

    else
    {

// Cria um outro string, t_s, que irá servir para armazenar o valor original do string s.
    	
    	string t_s = s;

// Esse contador irá atribuir os valores da metade final do string s a sua metade incial. 
   
    	for(int i = 0; i < len/2; i++)
    	{
    	    	s[i] = s[len - i - 1];
     	}

// Como os valores iniciais do string s agora são iguais aos finais, precisamos então dos valores originais do string s.
// Esse contador irá atribuir os valores da metade inicial do string t_s a metade final da string s.
   
     	for(int i = len/2; i < len; i++)
    	{
    	    	s[i] = t_s[len - i - 1];
     	}

     	return s ;
    }
}

int main(void)
{
	assert( "" == revert("") );
	assert( "A" == revert("A") );
	assert( "AB" == revert("BA") );
	assert( "ABCDEfgh" == revert("hgfEDCBA") );
	assert( "EDB" == revert("BDE") );
	assert( "ARARA" == revert("ARARA") );
	assert( revert(revert("lkjhg")) == "lkjhg");
	std::cout << "All tests passed!" << std::endl;
	return 0;
}
