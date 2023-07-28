section .data
    hello_message db 'Hello, Holberton', 0
    newline db 10
    format db "%s", 0

section .text
global main

extern printf

main:
    ; Print "Hello, Holberton"
    mov rdi, format       ; Load the format string pointer
    mov rsi, hello_message ; Load the address of the message to be printed
    call printf           ; Call the printf function to print the message

    ; Print a new line
    mov rdi, format       ; Load the format string pointer
    mov rsi, newline      ; Load the address of the newline character
    call printf           ; Call the printf function to print the newline

    ; Exit the program
    mov rax, 60           ; System call number for exit
    xor rdi, rdi          ; Exit status 0
    syscall              ; Invoke the system call to exit the program

section .bss
    ; (You can omit this section if you don't need any uninitialized data)

