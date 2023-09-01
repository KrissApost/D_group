#include <stdio.h>
#define MAXCOINS 100 /* Максимален брой монети */
#define MAXSUMA 1000 /* Максимална сума */
struct {
 unsigned num; /* Брой монети в сумата */
 unsigned last; /* Последна добавена монета */
} sums[MAXSUMA]; /* Целева функция */
/* Стойности на монетите */
const unsigned coins[MAXCOINS] = {1,1,1,6,6,6,7,7,7};
const unsigned sum = 12; /* Сума, чието представяне минимизираме */
const unsigned n = 9; /* Общ брой налични монети */
/* Дали можем да използваме j-тата монета в i-тата сума? */
char canJ(unsigned i, unsigned j)
{ int k = i - coins[j];
 if (k > 0 && sums[k].num < MAXCOINS)
 while (k > 0) {
 if (sums[k].last == j) break; /* монета j участва в сумата */
 k -= coins[sums[k].last];
 }
 return(0 == k);
}
/* Намира представяне на сумата Sum с минимален брой монети */
void findMin(unsigned sum)
{ unsigned i, j;
 sums[0].num = 0;
 for (i = 1; i <= sum; i++) {
 sums[i].num = MAXCOINS;
 for (j = 1; j <= n; j++) {
 if (canJ(i, j))
 if ((sums[i - coins[j]].num + 1) < sums[i].num) {
 sums[i].num = 1 + sums[i - coins[j]].num;
 sums[i].last = j;
 }
 }
 }
}
void print(unsigned sum)
{ /* Извежда намереното представяне */
 if (MAXCOINS == sums[sum].num)
 printf("\nСумата не може да се получи с наличните монети.");
 else {
 printf("\nМинимален брой необходими монети: %u", sums[sum].num);
 printf("\nЕто и стойностите на самите монети: ");
 while (sum > 0) {
 printf("%u ", coins[sums[sum].last]);
 sum -= coins[sums[sum].last];
 }
 }
}
int main() {
 printf("\n%s %u %s", "Как да получим сума от",
 sum,"лева с минимален брой монети?");
 findMin(sum);
 print(sum);
 return 0;
}
