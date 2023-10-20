section .data
    hello db 'Hello, Holberton',0

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, 13
    syscall

    ; exit the program
    mov eax, 1
    xor ebx, ebx
    syscall

