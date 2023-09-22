section .data
hello db "Hello, Holberton", 10, 0  ; String to be printed, 10 is newline, 0 is null terminator

section .text
extern printf

global main

main:
; Load the address of the hello string into rdi
lea rdi, [hello]

; Call printf
call printf

; Exit the program
ret

