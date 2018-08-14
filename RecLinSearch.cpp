//
//  RecLinearSearch.cpp
//  Recursive Linear Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{   
	return t_search(v, size, key, 0, size-1);
}

int t_search(int v[], int size, int key, int position, int end)
{
	int result = NOT_FOUND;

        if( v[position] == key )
        {
           return position;
        }
        else
        {
        	if (key < v[position] || position > size)
        	{
        		return result;
        	}
        	else 
        	return t_search(v, size, key, position++, end);
        }  
}

