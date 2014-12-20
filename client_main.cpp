#include "pointer.h"
#include <cstdio>


int client(){
    
    char* my_username_buffer;
    
    
    //client calls a function that allocates memory for a username
    //and returns a pointer to said memory stored in arg passed in.
    //in this case the client function will stores this pointer
    // in my_username_buff
    
    int alloc_size = allocate_username(&my_username_buffer, 256);
    
    sprintf(my_username_buffer, "Dr. Wihn D. Kuhlbreeze");

    printf("username[%d]: %s\n", alloc_size, my_username_buffer);

    return 0;

}

int main(int argc, char** argv){
	return client();
}