# What is C Programming ?
The C programming language is a general-purpose, operating system-agnostic, and procedural language that supports structured programming and provides low-level access to the system memory. Dennis Ritchie invented C language in 1972 at AT&T (then called Bell Laboratory), where it was implemented in the UNIX system on DEC PDP II. It was also the successor of the B programming language invented by Ken Thompson. C was designed to overcome the problems encountered by BASIC, B, and BPCL programming languages. By 1980, C became the most popular language for mainframes, microcomputers, and minicomputers. 

## Data Types 

| **Type**        | **Size (in bytes)**     |**Format Specifier** |
|:--------------: | :---------------------: | :-----------------: |
| int             |  min 2, normally 4      |   %d                |
| char            |      1                  |   %c                |
| float           |      4                  |   %f                |
| double          |      8                  |   %lf               |
| short int       |    2 normally           |   %hd               |
| unsigned int    | min 2, normally 4       |   %u                |
| long int        | min 4, normally 8       |   %li               |
| long long int   |     min 8               |   %lli              |
|unsigned long int|     min 4               |   %lu               |
|  signed char    |       1                 |   %c                |
| unsigned char   |       1                 |   %c                |
| long double     |min 10, normally 12 or 16|   %Lf               |

<!--![image](https://github.com/Xenderador/c-programs/assets/68114908/72ea7445-1d41-41f3-9bff-c51e999565db)-->

### Structure of C Program
``` C
    #include <stdio.h>                        // Header
    int main()                                // Main
    {                                         // Code inside "{}" is the body 
       printf("\n This is a C Program ");      // Statement: Instructions given to compiler
       return 0;                              // Returns value from main()
    }
```
***[Hello World ](https://github.com/Xenderador/c-programs/blob/main/Hello_World/helloworld.c)***
