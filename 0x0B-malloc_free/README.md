Task 0. 	 Float like a butterfly, sting like a bee
Aim:		 Write a function that creates an array of chars, and initializes it with a specific char.
Output:		 Returns NULL if size = 0
		 Returns a pointer to the array, or NULL if it fails








Task 1.         The woman who has no imagination has no wings
Aim:	        Write a function that returns a pointer to a newly allocated space in memory, which contains a copy 		     of the string given as a parameter.
Detail: 	The _strdup() function returns a pointer to a new string which is a duplicate of the string str.		     Memory for the new string is obtained with malloc, and can be freed with free.
		Returns NULL if str = NULL
Output:	        On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if		     	     insufficient memory was available
Filename:	1-strdup.c












Task 2.	        He who is not courageous enough to take risks will accomplish nothing in life
Aim:	        Write a function that concatenates two strings.
Detail:	        The returned pointer should point to a newly allocated space in memory which contains the contents of                s1, followed by the contents of s2, and null terminated
Output:	        if NULL is passed, treat it as an empty string
		The function should return NULL on failure
Filename:       2-str_concat.c











Task 3.	        If you even dream of beating me you'd better wake up and apologize
Aim:	        Write a function that returns a pointer to a 2 dimensional array of integers.
Steps:	        Each element of the grid should be initialized to 0
		The function should return NULL on failure
		If width or height is 0 or negative, return NULL
Filename:       3-alloc_grid.c












Task 4.		 It's not bragging if you can back it up
Aim:   		 Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
Expected:	 compile with your alloc_grid.c file. Make sure it compiles.
Filename:	 4-free_grid.c
