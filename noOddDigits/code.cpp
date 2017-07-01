#define f noOddDigits(
int f int n) {
  return n ? f n / 10) * (10 - n%2 * 9) + (n%10 & n%2-1) : 0;
}
