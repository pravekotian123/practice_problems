#include <stdint.h>


#define MAX_SIZE (20U)

struct UserDefArray
{
    int array[MAX_SIZE];
    int current_size;
    int total_size;
};

int InitializeArray(struct UserDefArray *user_def_array,int size);
int GetCurrentSize(struct UserDefArray *user_def_array);
int GetTotalSize(struct UserDefArray *user_def_array);
int InsertData(struct UserDefArray *user_def_array,int data);
int SearchIndex(struct UserDefArray *user_def_array,int data);


