#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Initialize frequencies
    int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0;

    // Count occurrences
    if (num1 == num2) {
        freq1++;
        freq2++;
    }
    if (num1 == num3) {
        freq1++;
        freq3++;
    }
    if (num1 == num4) {
        freq1++;
        freq4++;
    }
    if (num1 == num5) {
        freq1++;
        freq5++;
    }
    if (num2 == num3) {
        freq2++;
        freq3++;
    }
    if (num2 == num4) {
        freq2++;
        freq4++;
    }
    if (num2 == num5) {
        freq2++;
        freq5++;
    }
    if (num3 == num4) {
        freq3++;
        freq4++;
    }
    if (num3 == num5) {
        freq3++;
        freq5++;
    }
    if (num4 == num5) {
        freq4++;
        freq5++;
    }

    // Print frequencies
    printf("Frequency of %d: %d\n", num1, freq1);
    printf("Frequency of %d: %d\n", num2, freq2);
    printf("Frequency of %d: %d\n", num3, freq3);
    printf("Frequency of %d: %d\n", num4, freq4);
    printf("Frequency of %d: %d\n", num5, freq5);

    return 0;
}
