section .data
    format db 'Hello, Holberton', 10, 0  ; Format string with newline and null terminator

section .text
    global main
    extern printf

main:
    mov rdi, format          ; Address of the format string
    xor rax, rax             ; Clear rax (no floating-point arguments)
    call printf              ; Call printf

    ; Exit the program
    mov eax, 0               ; Return 0 status code
    ret
