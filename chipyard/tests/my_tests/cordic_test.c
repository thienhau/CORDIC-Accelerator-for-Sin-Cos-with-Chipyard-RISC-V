#include <stdint.h>

// Giữ tohost để simulator biết đường dừng
volatile uint64_t tohost __attribute__((section(".tohost"), used, aligned(64))) = 0;
volatile uint64_t fromhost __attribute__((section(".fromhost"), used, aligned(64))) = 0;

#define UART_TX_REG 0x54000000

void uart_puth(char c) {
    while ((int32_t)(*(volatile uint32_t *)UART_TX_REG) < 0);
    *(volatile uint32_t *)UART_TX_REG = c;
}

void print_hex(uint32_t val) {
    char hex[] = "0123456789ABCDEF";
    uart_puth('0'); uart_puth('x');
    for (int i = 7; i >= 0; i--) uart_puth(hex[(val >> (i * 4)) & 0xF]);
    uart_puth('\n');
}

void _start() __attribute__((section(".text._start")));
void _start() {
    asm volatile ("li sp, 0x80010000");
    asm volatile ("j main");
}

int main() {
    register uint64_t x_in asm("a1") = 19898; 
    register uint64_t z_in asm("a2") = 14746; 
    register uint64_t result asm("a0");

    asm volatile (
        ".insn r 0x0b, 7, 0, %0, %1, %2"
        : "=r" (result) : "r" (x_in), "r" (z_in) : "memory"
    );

    // Bỏ in ấn, ghi thẳng vào tohost
    tohost = 1; 
    while(1); 
}