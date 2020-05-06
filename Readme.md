# PRINTF

## Description

This project is aimed to recode printf. It's very important to know how to use variadic arguments.
Write a library that contains ft_printf, a function that will mimic the real printf.


## Useful links

- https://www.hackerearth.com/practice/notes/know-our-printf-variable-number-of-arguments-to-a-function/
- http://www.firmcodes.com/write-printf-function-c/
- https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html#Formatted-Output //ayuda sobre funcionamiento parametros printf
- https://medium.com/@zhang.yine/ft-printf-d95747b7aa5a
- https://github.com/cclaude42/PFT_2019 // Test
- https://www.maizure.org/projects/printf/index.html // Lo que pasa en el compilador al usar printf
- https://babbage.cs.qc.cuny.edu/courses/cs200/dispatch.html // Como empezar, definiendo dispatch tables
- https://www.youtube.com/watch?v=Y9kUWsyyChk //The secrets of printf, video, 34 min
- https://www.cypress.com/file/54441/download //The secrets of printf, document pdf
- https://algoritmos9511.gitlab.io/_downloads/6c19f6858986f76b20dd009d0e060dd9/los-secretos-de-printf.pdf // Pdf en Español
- https://www.youtube.com/watch?v=0WvrSfcdq1I&feature=youtu.be // Video
- https://github.com/wuzhouhui/c_standard_lib/tree/master/STDIO // C standar library
- https://www.learn-c.org/en/Linked_lists // linked lists
- http://www.cplusplus.com/reference/cstdio/printf/ //more about printf
- https://github.com/coolguycam/C_beginner_exams/blob/master/3_level/print_hex.c // ejemplos de funciones en c
- http://www.pixelbeat.org/programming/gcc/format_specs.html // short specification printf
- https://medium.com/my-journey-at-42-silicon-valley-as-a-non-cs-major/project-4-printf-function-6396c78ac22e // blog about printf
- https://en.wikipedia.org/wiki/Printf_format_string // 
	%[parameter][flags][width][.precision][length]type
- https://www.youtube.com/watch?v=-dZpDPFp6YU // video explicando funciones variadic functions
- http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf //Manual pag 309-315 explica printf
- https://web.archive.org/web/20181230041359if_/http://www.open-std.org/jtc1/sc22/wg14/www/abq/c17_updated_proposed_fdis.pdf // Explanation C libraries 7.21.6 “Formatted input/output functions” (Pag 225)
- https://www.eskimo.com/~scs/cclass/int/sx2e.html //precision

## Notes

	*flag '0' is ignored when flag '-' is present [-Wformat]*
	
	Esto no es posible 'printf("%-010d\n", 27);'

## Flags 

It will manage any combination of the following flags: - 0 . * and minimum field width with all conversions

- %s strings: only the '-' (left justify) flag applies to strings

### Flag '0'

- It does not work with type 'c'

### Flag '-'

- It works with type 'c'


## USEFUL COMMANDS

- grep -l 'primary' *.c para encontrar una palabra en un conjunto de archivos, en este caso tipo C
- *To find blank spaces:* In vscode you can type ctrl/cmd + shift + p and search for "render whitespace"
