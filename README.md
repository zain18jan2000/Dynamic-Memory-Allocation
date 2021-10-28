# Dynamic-Memory-Allocation
<h2>A c program to create a 2D array by dynamically allocating the memory.</h2>
<br>
Dynamic memory allocation in c language is a concept of allocating the memory at runtime. Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file.<br>
1-malloc()<br>
2-calloc()<br>
3-realloc()<br>
4-free() <br>

Malloc() function is used to allocate a single block of memory space while the calloc() in C is used to allocate multiple blocks of memory space. Each block allocated by the calloc() function is of the same size.The realloc() function is used to resize a block of memory that was previously allocated whereas the free() function in c allows you to release or deallocate the memory blocks which are previously allocated dynamically. <br>
To create a 2D I have used the malloc() function to allocate a single large block of memmory which will be according to the dimensions of the array specified by user at the runtime.
