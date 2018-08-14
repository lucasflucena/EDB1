//
//  IteBinSearch.cpp
//  Iterative Binary Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
  int inicio = 0, fim = size-1, meio, result = NOT_FOUND;
  
  while(inicio <= fim)
  	{
  		meio = (inicio+fim)/2;
  		
  		if( key < v[meio] )
  			{
  				fim = meio -1;
  			}
  			else 
  				
  				if( key > v[meio] )
  					{
  						inicio = meio + 1;
  					}
  					else 
  						{
  							return meio;
  						}
  	}
  	return result;
}

