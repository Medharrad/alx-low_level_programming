#### [5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](100-argstostr.c)

- Write a function that concatenates all the arguments of your program.

- Prototype: char *argstostr(int ac, char **av);
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument should be followed by a \n in the new string  

#### [6. I will show you how great I am](101-strtow.c)

- Write a function that splits a string into words.

- Prototype: char **strtow(char *str);
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be NULL
- Words are separated by spaces
- Returns NULL if str == NULL or str == ""
- If your function fails, it should return NULL
