//
//  pointer_1.h
//  
//
//  Created by interposer on 12/17/14.
//
//

#ifndef _pointer_1_h
#define _pointer_1_h

//Allocates memory for username. Returns size actually allocated.
int allocate_username(char** username, int size);

int client(){
    
    char* my_username_buffer;
    
    
    //client calls a function that allocates memory for a username
    //and returns a pointer to said memory stored in arg passed in.
    //in this case the client function will stores this pointer
    // in my_username_buff
    
    int alloc_size = allocate_username(&my_username_buffer, 256);
    
    printf("username[%d]: %s", alloc_size, my_username_buff);
    
}

#endif

int allocate_username(char** username, int size);
{
    char *user;
    
    user = (char *)malloc(sizeof(char)*size);
    if (user == NULL) {
        puts("No memory available!");
    }
    else {
        char** username = user;
    }
}
