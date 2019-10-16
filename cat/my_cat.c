/*
** EPITECH PROJECT, 2019
** herderh
** File description:
** derder
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int read_write(int fd)
{
    int size;
    char buff[30000];

    size = read(fd, buff, 30000);
    if(size < 0 ) {
        return (1);
    }
    buff[size] = '\0';
    my_putstr(buff);
    return (0);
}
    
int  my_cat(int ac, char **av) {
    int file;
 
    if (ac < 2){
        while (read_write(0) == 0);
        return (84);
        write(2, "Error invalid files", 20);
    }
    
    for(int i = 0; i < ac; i++) {
        file = open(av[i], O_RDONLY);
        if (file < 0) {
            write(2, "Error invalid files", 20);
            return (84);
        }
        if (read_write(file) == 1){
            write(2, "Error invalide files", 20);
            return(84);
        }
        close(file);
    }
}
