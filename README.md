# Project Title

This is my own C library.

# Usage

1.Clone this repository.
```bash
git clone https://github.com/ntokita/ft_libft.git libft
cd libft
```
2.Compile using the make command.

```bash
make
```

3.Please create a main function(main.c) like the one below.

```bash
#include"libft.h"

int main(void)
{
        ft_putstr_fd("Hello!\n", 1);
        return(0);
}
```
4.Compile the main function together with libft.a.

```bash
cc main.c libft.a
```
5.Run the executable.

```bash
./a.out
```
Expected output:

```bash
Hello!
```

