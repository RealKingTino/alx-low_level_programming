section .data
    hello db "Hello, Holberton!",0
    format db "%s\n",0

section .text
    global main
    extern printf

main:
    ; call printf with the message and format string as arguments
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; return 0 to indicate success
    xor eax, eax
    ret

