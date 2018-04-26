# ft_array
ft_array is library to simplify array managment in C.

# Installation
1. Clone this repo at the root of your project
2. Use **make** to create **libarray.a**
3. `#include "ft_array.h"` in your .h file

# Usage
## Declaration
Declare a `t_array` as the following :
```c
t_array my_array;
```
## Initialisation
To be used, a `t_array` should always be initialised. To init a `t_array` do as the following :
```c
t_array   my_array;

ar_init(&my_array, 0);
```
## Manage data
You can manage data in your array like this :
```c
t_array my_array;

ar_init(&my_array, 0);

// Appending data
ar_append(&my_array, "Hello"); // ["Hello"]
ar_append(&my_array, "World"); // ["Hello", "World"]
ar_append(&my_array, "!");     // ["Hello", "World", "!"]

// Getting infos
ar_count(my_array);            // 3

// Removing data
ar_remove_at(&my_array, 1);    // ["Hello", "!"]
ar_remove_first(&my_array);    // ["!"]
ar_remove_last(&my_array);     // []
```
## Fetching data
Fetching data in a `t_array` work as a classic array. But because `t_array` is a typdef of `void **`, you have to cast the data you want to fetch.
```c
t_array   my_array;

ar_init(&my_array, 0);
ar_append(&my_array, "Hello");

printf("%s\n", (char *)my_array[0]); // "Hello"
```
# Functions
Read the [documentation](https://github.com/bpisano/ft_array/wiki) to see all funcitons ft_array provides.

Actually there is not many functions in this lib. Feel free to suggest yours :)
# Memory
ft_array is designed to be leak free. To free a `t_array`, do as the following :
```c
free(my_array);
```
# Example
A common case where array can be usefull is parsing. For example, fdf parsing can simply look like this :
```c
int	parse(char *file_name, t_array *file)
{
	int	fd;
	char	*line;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &line) > 0)
		ar_append(file, ft_strsplit(line, ' '));
	return (1);
}
```
And printing :
```c
int	y;
int	x;

y = -1;	
while (file[++y])
{
	x = -1;
	while (((char **)file[y])[++x])
		printf("%s ", ((char **)file[y])[x]);
	printf("\n");
}
```
