# ft_array
ft_array is a simple library to simplify array managment in C.

# Installation
Clone this repo at the root of your project. Do a make to create libarray.a that you can include in your project. Finally, include "ft_array.h" in your project.

# Usage
Using an array is easy as this :
```c
t_array   my_array;

ar_init(&my_array, 0);
ar_append(&my_array, "Adding an item");
ar_append(&my_array, "is that easy");

printf("%s %s\n", (char *)my_array[0], (char *)my_array[1]); //output : "Adding an item is that easy"
```
There is important steps not to forget.
The first one is that you have to init an array with a defined size. 0 is an empty array.
The second one is that you have to cast the content of the array you fetch. For example, if your array is filled of `char *` and you want to access the first item, you have to cast it in `char *` like this :
```c
(char *)my_array[0]
```
For exeample, in this case, accessing the first character of the first string in your array will look like this :
```c
t_array   my_array;

ar_init(&my_array, 0);
ar_append(&my_array, "Adding an item");

printf("%c\n", ((char *)my_array[0])[0]); //output : "A"
```
# Functions
`ar_append(t_array *array, void *value)` append value to the array.

`ar_remove_last(t_array *array, void *value)` remove the last item in array.

`ar_count(t_array array)` return the number of items in the array.

Actually there is not many functions in this lib. Feel free to suggest yours :)
# Memory
ft_array is designed to be leak free. All you have to do to free an array is :
```c
free(my_array);
```
# Why is this usefull
A common case where array can be usefull is parsing. For example, fdf parsing can simply look like this :
```c
int		parse(char *file_name, t_array *file)
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
