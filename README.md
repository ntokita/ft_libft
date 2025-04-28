##Project Title
this is my own C library

##Usage
'git clone https://github.com/ntokita/ft_libft.git libft && cd libft'
'make'
main.c
'''
#include"libft.h"

int main(void)
{
        ft_putstr_fd("Hello!\n", 1);
}
'''
cc main.c libft.a
./a.out
