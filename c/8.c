// The four adjacent digits in the 1000-digit number that have the greatest
// product are 9 x 9 x 8 x 9 = 5832.
// 73167176531330624919225119674426574742355349194934
// 96983520312774506326239578318016984801869478851843
// 85861560789112949495459501737958331952853208805511
// 12540698747158523863050715693290963295227443043557
// 66896648950445244523161731856403098711121722383113
// 62229893423380308135336276614282806444486645238749
// 30358907296290491560440772390713810515859307960866
// 70172427121883998797908792274921901699720888093776
// 65727333001053367881220235421809751254540594752243
// 52584907711670556013604839586446706324415722155397
// 53697817977846174064955149290862569321978468622482
// 83972241375657056057490261407972968652414535100474
// 82166370484403199890008895243450658541227588666881
// 16427171479924442928230863465674813919123162824586
// 17866458359124566529476545682848912883142607690042
// 24219022671055626321111109370544217506941658960408
// 07198403850962455444362981230987879927244284909188
// 84580156166097919133875499200524063689912560717606
// 05886116467109405077541002256983155200055935729725
// 71636269561882670428252483600823257530420752963450
// Find the thirteen adjacent digits in the 1000-digit number that have the
// greatest product. What is the value of this product?

#include <stdio.h>
#include <string.h>

long adjacentProd(char string[]) {
  long product = 1;

  for (int i = 0; i < 13; i++) {
    product *= (int)string[i] - 48;
  }

  return product;
}

int main() {
  char numString[] =
      "731671765313306249192251196744265747423553491949349698352031277450632623"
      "957831801698480186947885184385861560789112949495459501737958331952853208"
      "805511125406987471585238630507156932909632952274430435576689664895044524"
      "452316173185640309871112172238311362229893423380308135336276614282806444"
      "486645238749303589072962904915604407723907138105158593079608667017242712"
      "188399879790879227492190169972088809377665727333001053367881220235421809"
      "751254540594752243525849077116705560136048395864467063244157221553975369"
      "781797784617406495514929086256932197846862248283972241375657056057490261"
      "407972968652414535100474821663704844031998900088952434506585412275886668"
      "811642717147992444292823086346567481391912316282458617866458359124566529"
      "476545682848912883142607690042242190226710556263211111093705442175069416"
      "589604080719840385096245544436298123098787992724428490918884580156166097"
      "919133875499200524063689912560717606058861164671094050775410022569831552"
      "0005593572972571636269561882670428252483600823257530420752963450";

  long currentMax = 0;

  for (int i = 0; i <= 1000 - 13; i++) {
    char substring[14];
    strncpy(substring, numString + i, 13);
    substring[13] = '\0';
    if (adjacentProd(substring) > currentMax) {
      currentMax = adjacentProd(substring);
    }
  }

  printf("%ld\n", currentMax);
  // 23514624000

  return 0;
}
