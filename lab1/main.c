#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include "struct_definition.h"

struct UserDefArray user_def_array;

int main()
{
   InitializeArray(&user_def_array,10);
   assert(GetTotalSize(&user_def_array) == 10);
   assert(GetCurrentSize(&user_def_array) == 0);
   assert(InsertData(&user_def_array,10) == 0);
   assert(InsertData(&user_def_array,50) == 0);
   assert(InsertData(&user_def_array,100) == 0);
   assert(SearchIndex(&user_def_array,100) == 2);
   assert(SearchIndex(&user_def_array,0) == -1);
   return 0;
}