//
//  RecBinSearch.cpp
//  Recursive Binary Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
   return t_search(v, size, key, 0, size-1 );
}

int t_search(int v[], int size, int key, int position, int end)
{
   int mid, result = NOT_FOUND;
  
   if( position > end )
   {
      return result;
   }

   mid = (position + end)/2;

   if( key < v[mid] )
   {
      return t_search (v, size, key, position, mid - 1);
   }

   else
      if( key > v[mid] )
      {  
         return t_search (v, size, key, mid + 1, end);
      }

      else
      {
         return mid;
      }
}