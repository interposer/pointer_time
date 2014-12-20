#include "pointer.h"
#include <cstdlib>
#include <cstdio>


int allocate_username(char** username, int size)
{
    char *user;
    
    user = (char *)malloc(sizeof(char)*size);
    if (user == NULL) {
        puts("No memory available!");
    }
    else {
        //dereference the variable pointed to by username
        //username points to a variable that is a (pointer to a char).
        //In this case the variable is my_username_buffer;

        //Passing a pointer to a pointer to a char allows us to modify the memory
        //of a variable whose scope is outside our function.
        //a good way to look at pointers is to start at the right with the var name
        // and break it down. username is a pointer to a (char*). What is a char*?
        //its a variable that contains an address value. That address specifys an area
        //of memory that cotains a char.
        *username = user;
        
    }

    //If user is not NULL then return the size requested otherwize return 0.
    return (user?size:0);
}