#include <iostream>

constexpr uintmax_t fibonacci(size_t n)
{
    switch (n)
    {
    case 0: return 0;
    case 1: return 1;
    case 2: return 1;
    case 3: return 2;
    case 4: return 3;
    case 5: return 5;
    case    6: return 8 ;// 23
    case    7: return 13;
    case    8: return 21 ;// 3 x 7
    case    9: return 34 ;// 2 x 17
    case    10: return 55 ;// 5 x 11
    case    11: return 89;
    case    12: return 144 ;// 24 x 32
    case    13: return 233;
    case    14: return 377 ;// 13 x 29
    case    15: return 610 ;// 2 x 5 x 61
    case    16: return 987 ;// 3 x 7 x 47
    case    17: return 1597;
    case    18: return 2584 ;// 23 x 17 x 19
    case    19: return 4181 ;// 37 x 113
    case    20: return 6765 ;// 3 x 5 x 11 x 41
    case    21: return 10946 ;// 2 x 13 x 421
    case    22: return 17711 ;// 89 x 199
    case    23: return 28657;
    case    24: return 46368 ;// 25 x 32 x 7 x 23
    case    25: return 75025 ;// 52 x 3001
    case    26: return 121393 ;// 233 x 521
    case    27: return 196418 ;// 2 x 17 x 53 x 109
    case    28: return 317811 ;// 3 x 13 x 29 x 281
    case    29: return 514229;
    case    30: return 832040 ;// 23 x 5 x 11 x 31 x 61
    case    31: return 1346269 ;// 557 x 2417
    case    32: return 2178309 ;// 3 x 7 x 47 x 2207
    case    33: return 3524578 ;// 2 x 89 x 19801
    case    34: return 5702887 ;// 1597 x 3571
    case    35: return 9227465 ;// 5 x 13 x 141961
    case    36: return 14930352 ;// 24 x 33 x 17 x 19 x 107
    case    37: return 24157817 ;// 73 x 149 x 2221
    case    38: return 39088169 ;// 37 x 113 x 9349
    case    39: return 63245986 ;// 2 x 233 x 135721
    case    40: return 102334155 ;// 3 x 5 x 7 x 11 x 41 x 2161
    case    41: return 165580141 ;// 2789 x 59369
    case    42: return 267914296 ;// 23 x 13 x 29 x 211 x 421
    case    43: return 433494437;
    case    44: return 701408733 ;// 3 x 43 x 89 x 199 x 307
    case    45: return 1134903170 ;// 2 x 5 x 17 x 61 x 109441
    case    46: return 1836311903 ;// 139 x 461 x 28657
    case    47: return 2971215073;
    case    48: return 4807526976 ;// 26 x 32 x 7 x 23 x 47 x 1103
    case    49: return 7778742049 ;// 13 x 97 x 6168709
    case    50: return 12586269025 ;// 52 x 11 x 101 x 151 x 3001
    case    51: return 20365011074 ;// 2 x 1597 x 6376021
    case    52: return 32951280099 ;// 3 x 233 x 521 x 90481
    case    53: return 53316291173 ;// 953 x 55945741
    case    54: return 86267571272 ;// 23 x 17 x 19 x 53 x 109 x 5779
    case    55: return 139583862445 ;// 5 x 89 x 661 x 474541
    case    56: return 225851433717 ;// 3 x 72 x 13 x 29 x 281 x 14503
    case    57: return 365435296162 ;// 2 x 37 x 113 x 797 x 54833
    case    58: return 591286729879 ;// 59 x 19489 x 514229
    case    59: return 956722026041 ;// 353 x 2710260697
    case    60: return 1548008755920 ;// 24 x 32 x 5 x 11 x 31 x 41 x 61 x 2521
    case    61: return 2504730781961 ;// 4513 x 555003497
    case    62: return 4052739537881 ;// 557 x 2417 x 3010349
    case    63: return 6557470319842 ;// 2 x 13 x 17 x 421 x 35239681
    case    64: return 10610209857723 ;// 3 x 7 x 47 x 1087 x 2207 x 4481
    case    65: return 17167680177565 ;// 5 x 233 x 14736206161
    case    66: return 27777890035288 ;// 23 x 89 x 199 x 9901 x 19801
    case    67: return 44945570212853 ;// 269 x 116849 x 1429913
    case    68: return 72723460248141 ;// 3 x 67 x 1597 x 3571 x 63443
    case    69: return 117669030460994 ;// 2 x 137 x 829 x 18077 x 28657
    case    70: return 190392490709135 ;// 5 x 11 x 13 x 29 x 71 x 911 x 141961
    case    71: return 308061521170129 ;// 6673 x 46165371073
    case    72: return 498454011879264 ;// 25 x 33 x 7 x 17 x 19 x 23 x 107 x 103681
    case    73: return 806515533049393 ;// 9375829 x 86020717
    case    74: return 1304969544928657 ;// 73 x 149 x 2221 x 54018521
    case    75: return 2111485077978050;
    case    76: return 3416454622906707;
    case    77: return 5527939700884757;
    case    78: return 8944394323791464;
    case    79: return 14472334024676221;
    case    80: return 23416728348467685;
    case    81: return 37889062373143906;
    case    82: return 61305790721611591;
    case    83: return 99194853094755497;
    case    84: return 160500643816367088;
    case    85: return 259695496911122585;
    case    86: return 420196140727489673;
    case    87: return 679891637638612258;
    case    88: return 1100087778366101931;
    case    89: return 1779979416004714189;
    case    90: return 2880067194370816120;
    case    91: return 4660046610375530309;
    case    92: return 7540113804746346429;
    case    93: return 12200160415121876738;

    default: return -1;
    }

}

int main()
{
    std::cout << fibonacci(13);
    return 0;
}
