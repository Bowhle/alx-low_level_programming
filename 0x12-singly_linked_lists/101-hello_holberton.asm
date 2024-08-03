section .data
    msg db 'Hello, Holberton', 10, 0  ; Define the message with a newline character

section .bss

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, fmt            ; Address of the format string
    mov rsi, msg            ; Address of the message string
    call printf             ; Call printf

    ; Exit program
    mov eax, 0              ; Return 0 status code
    ret

section .data
    fmt db '%s', 0          ; Format string for printf
