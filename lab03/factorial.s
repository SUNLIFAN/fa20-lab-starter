.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    addi t0, zero, 1
loop:
    beq a0, zero, finish
    mul t0, t0, a0
    addi a0, a0, -1
    j loop  # jump to loop
finish:
    mv a0, t0
    jr ra