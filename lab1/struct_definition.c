#include "struct_definition.h"


int InitializeArray(struct UserDefArray *user_def_array,int size)
{
    user_def_array->current_size = 0;
    user_def_array->total_size = (size <= MAX_SIZE)? size: MAX_SIZE;
}

int GetCurrentSize(struct UserDefArray *user_def_array)
{
    int return_value  = 0;
    return_value = user_def_array->current_size;
    return return_value;
}


int GetTotalSize(struct UserDefArray *user_def_array)
{
    int return_value  = 0;
    return_value = user_def_array->total_size;
    return return_value;
}

int InsertData(struct UserDefArray *user_def_array,int data){
    int return_value = 0;
    if(user_def_array->current_size == user_def_array->total_size) {
        return_value = -1;
    }
    else{
        *(user_def_array->array + user_def_array->current_size) = data;
        user_def_array->current_size++;
    }
    return return_value; 
}

int SearchIndex(struct UserDefArray *user_def_array,int data)
{
    int return_value = -1;
    for(int i= 0;i<user_def_array->current_size;i++)
    {
        if(data == *(user_def_array->array + i))
        {
            return_value = i;
        }
    }
    return return_value;
}