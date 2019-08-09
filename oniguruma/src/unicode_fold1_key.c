/* This file was converted by gperf_fold_key_conv.py
      from gperf output file. */
/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/local/bin/gperf -n -C -T -c -t -j1 -L ANSI-C -F,-1 -N onigenc_unicode_fold1_key unicode_fold1_key.gperf  */
/* Computed positions: -k'1-3' */



/* This gperf source file was generated by make_unicode_fold_data.py */

/*-
 * Copyright (c) 2017-2019  K.Kosako
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#include <string.h>
#include "regenc.h"

#define TOTAL_KEYWORDS 1353
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 1791
/* maximum key range = 1789, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash(OnigCodePoint codes[])
{
  static const unsigned short asso_values[] =
    {
         4,    2,  147,   16,    1,   13, 1228,  725, 1224,  638,
      1204,   95,    9,   82, 1403,   80,    8,   68, 1391,    6,
      1203,  602, 1200,  320,  151,   67, 1385,   61, 1384,  158,
         0,   11, 1252,    3,  733,  278,   23,  425,  660,  424,
       640,   20,  635,  105,    5,   29,  916,   34,  630,    0,
       906, 1378,  899, 1377,  470, 1363,  623,  902,  610,  230,
      1193, 1358, 1190,  779,  986, 1336,  890,  883,  456,  597,
       285,  158,  590,  477,  583,   42,  576, 1447,  447, 1440,
       440, 1353,  426, 1429,  400, 1417,  327, 1407,  567, 1389,
       386, 1207,  458,  724,  854,  979, 1016,   66,  232,  413,
       204, 1431,  226, 1317,  190, 1167,  379, 1319,  198, 1270,
       175,  209,  561,  362,  528, 1323,  257, 1099,  240, 1309,
       508, 1172,  484, 1306,  699,  865,  850,  488,  679,  755,
       420,  639, 1149,  105,  691,  789, 1125,   46,  809,  652,
      1293,    3, 1262,  166, 1426,    0, 1424, 1792, 1220,  460,
       706,    1,  367, 1792, 1341, 1792, 1151,   56, 1235, 1792,
       384,  345,  965,   40, 1168,   33,  218,  180, 1159,   20,
      1296,  276, 1243,   14, 1401,  777, 1142,  682, 1284,  129,
      1135,  610, 1181,  871, 1123,  858, 1042,  510,  842,  499,
       999,  346,  830,    0,  823, 1288, 1115,  768,  732, 1272,
      1101, 1098, 1082, 1270,  811,  177, 1078, 1074, 1061, 1058,
      1050,  789,  353, 1018,  548, 1006,  517,  988,  334,  765,
       166,  753,  138,  743,  100,  969,   87,  720,   49,  975,
        75,  965,   62,  411,  126,  955,  113, 1262,  317,  943,
       304,  679,  293, 1252,  714,  937,  275,  490,  263,  469,
       395, 1345,  931,  208,  921,   80,  542,   11,  246
    };
  return asso_values[(unsigned char)onig_codes_byte_at(codes, 2)+3] + asso_values[(unsigned char)onig_codes_byte_at(codes, 1)] + asso_values[(unsigned char)onig_codes_byte_at(codes, 0)];
}

int
onigenc_unicode_fold1_key(OnigCodePoint codes[])
{
  static const short int wordlist[] =
    {
      -1, -1, -1,

      3429,

      1906,

      1867,

      210,

      171,

      3414,

      1927,

      1690,

      231,

      1885,

      1879,

      189,

      183,

      2240,

      1315,

      1276,

      165,

      792,

      2261,

      1336,

      1594,

      1630,

      1294,

      1288,

      1915,

      2243,

      219,

      1618,

      2237,

      3417,

      2981,

      2903,

      2297,

      2990,

      3423,

      2282,

      2948,

      1324,

      2939,

      2927,

      1606,

      2984,

      3507,

      2906,

      974,

      273,

      2900,

      1600,

      2648,

      3558,

      2189,

      1228,

      459,

      2999,

      80,

      2885,

      1795,

      3738,

      1513,

      378,

      1459,

      2438,

      3570,

      2195,

      1234,

      465,

      860,

      92,

      1041,

      1807,

      3750,

      1525,

      2714,

      2549,

      2441,

      3564,

      2192,

      1231,

      462,

      866,

      86,

      2888,

      1801,

      3744,

      1519,

      159,

      2561,

      3552,

      2186,

      1225,

      456,

      2972,

      863,

      2882,

      1789,

      3732,

      1507,

      2966,

      2942,

      2555,

      3546,

      2183,

      1222,

      453,

      857,

      3411,

      2879,

      1783,

      3726,

      1501,

      2936,

      2543,

      2930,

      3582,

      2201,

      1240,

      471,

      854,

      105,

      1447,

      1819,

      3762,

      1537,

      3354,

      2537,

      2924,

      3576,

      2198,

      1237,

      468,

      872,

      99,

      399,

      1813,

      3756,

      1531,

      1648,

      2573,

      3540,

      2180,

      1219,

      2423,
      -1,

      869,

      2876,

      1777,

      3720,

      1495,

      541,

      502,

      2567,

      697,

      1897,

      559,

      201,

      851,

      520,

      514,

      3495,

      1864,

      962,

      267,

      2531,

      2276,

      2636,

      1306,

      3534,

      2177,

      1216,

      366,

      2339,
      -1,

      2873,

      1771,

      3714,

      1489,

      2027,

      1063,

      324,

      1192,

      27,

      2963,

      3276,

      848,

      1726,

      3669,

      3141,

      1612,

      2978,

      1378,

      2525,

      2018,

      1054,

      315,

      830,

      12,

      2720,
      -1, -1,

      2024,

      1060,

      321,

      2372,

      4086,

      1360,

      2011,

      1047,

      309,

      3633,

      0,

      2717,
      -1,

      1372,

      153,

      31,

      2732,

      2360,

      1588,

      1348,

      2096,

      1135,

      387,
      -1,

      1381,

      2792,

      1609,
      -1,

      2015,

      1050,

      312,

      3459,

      6,

      922,

      2008,

      1044,

      306,

      2600,

      3885,

      2366,

      3342,

      1354,

      2039,

      1075,

      336,

      2456,

      52,

      2735,

      2234,

      1273,

      499,

      3879,

      168,

      2390,

      682,

      1402,

      1597,
      -1,

      718,

      2036,

      1072,

      333,

      2450,

      46,

      3618,

      2219,

      1258,

      487,
      -1,

      141,

      2384,

      1855,

      1396,

      1573,
      -1,

      715,

      3612,

      2216,

      1255,

      483,

      393,

      135,

      2897,

      1849,

      1624,

      1567,

      3492,

      1966,

      959,

      3873,
      -1,

      2279,

      2633,

      887,

      3600,

      2210,

      1249,

      480,

      2336,

      123,

      532,

      1837,

      3780,

      1555,
      -1,

      3594,

      2207,

      1246,

      477,

      2996,

      117,

      881,

      1831,

      3774,

      1549,

      703,
      -1,

      3867,

      3588,

      2204,

      1243,

      474,

      878,

      111,

      658,

      1825,

      3768,

      1543,

      3822,

      1990,

      1008,

      288,
      -1,

      2273,

      2681,

      875,

      2174,

      1213,
      -1,

      643,

      2348,

      2870,

      1765,

      3708,

      1483,
      -1, -1,

      652,

      3267,

      381,

      3921,

      2960,

      845,

      637,

      1684,

      2165,

      1204,

      3237,

      661,

      2519,

      2861,

      1747,

      3690,

      1465,

      785,

      3903,

      2432,

      3339,

      37,

      2090,

      1114,

      372,

      3228,

      3915,

      2771,

      640,
      -1,

      1387,

      2501,

      3891,

      3234,

      2021,

      1057,

      318,

      3924,

      18,

      3222,

      1126,

      1996,

      1020,

      294,

      2783,

      2378,

      2693,

      1366,

      3084,

      3624,

      2222,

      1261,

      2354,

      3297,

      3897,

      1987,

      1002,

      285,

      1579,

      667,

      2675,

      3225,

      3387,

      3075,

      4020,

      3573,

      2345,

      3219,

      3945,

      4005,

      96,

      3081,

      1810,

      3753,

      1528,

      2057,

      1093,

      3069,

      2492,

      2357,

      3528,

      1984,

      996,

      282,

      3996,

      3939,

      2669,
      -1,

      1438,

      2564,

      2291,

      2285,
      -1,

      4008,

      3522,

      1981,

      990,

      279,

      4014,

      3072,

      2663,

      3516,

      1978,

      984,

      276,

      3066,
      -1,

      2657,

      3008,

      3002,

      3486,

      1963,

      950,

      1999,

      1026,

      297,

      2627,

      369,

      2699,
      -1,

      3177,

      3399,

      2330,

      3621,

      3444,

      1942,

      906,

      243,

      144,

      613,

      2585,

      3501,

      1576,

      968,

      270,

      3381,

      2312,

      2642,

      3861,

      2045,

      1081,

      342,

      2468,

      65,

      3615,

      348,

      2483,

      712,
      -1,

      138,

      2402,

      1852,

      1414,

      1570,

      2417,

      721,

      1429,

      3843,

      3023,

      727,

      1678,

      3375,

      3201,

      2042,

      1078,

      339,

      2462,

      59,
      -1,

      4002,

      778,

      1672,

      2171,

      1210,

      2396,

      3369,

      1408,

      2867,

      1759,

      3702,

      1477,

      768,

      3363,

      2033,

      1069,

      330,

      709,

      40,

      622,
      -1,

      3930,

      3333,
      -1,

      3405,
      -1,

      2513,

      1390,

      2231,

      1270,

      496,

      3048,

      162,

      607,

      2168,

      1207,

      1591,
      -1,

      3909,

      2864,

      1753,

      3696,

      1471,

      3348,
      -1,

      3231,

      634,

      2030,

      1066,

      327,

      3288,

      34,

      3207,

      1993,

      1014,

      291,
      -1,

      2507,

      2687,

      601,

      1384,

      3510,

      1975,

      977,

      2351,
      -1,

      3198,

      2651,

      3504,

      1972,

      971,

      3120,

      3888,

      598,

      2645,

      3498,

      1969,

      965,
      -1,

      3981,

      595,

      2639,

      3489,

      3078,

      954,

      264,

      3252,

      2342,

      2630,

      3330,

      3054,

      625,

      3195,

      706,

      2333,

      3456,

      1948,

      919,

      249,

      2267,
      -1,

      2597,

      1654,

      574,

      3045,
      -1,

      3192,

      2324,

      3450,

      1945,

      913,

      246,

      748,

      3189,

      2591,

      3426,

      1933,

      2954,

      237,
      -1,

      2318,

      1924,

      3174,

      228,

      3210,

      4050,

      1921,

      354,

      225,

      1342,

      3042,
      -1,

      2300,

      3393,

      1333,

      2255,

      3153,

      2294,

      1441,

      1330,

      363,

      673,

      3357,

      3957,

      3039,

      3017,

      1918,

      3972,

      222,

      3351,

      3014,

      3035,

      3855,

      2918,

      3249,

      3011,

      3345,

      2288,
      -1,

      1327,

      3020,

      664,

      3057,

      3336,

      3597,

      2054,

      1090,

      3951,

      2486,

      120,

      2894,

      1834,

      3777,

      1552,

      1642,

      3005,

      2420,

      2063,

      1432,

      357,

      4083,

      730,

      2744,

      3849,

      739,

      2048,

      1084,

      3933,

      2474,

      71,

      1450,
      -1,

      2087,

      1111,

      3243,
      -1,

      2408,

      2768,

      1420,

      3606,

      2213,

      1252,
      -1, -1,

      129,

      3555,

      1843,

      3786,

      1561,

      592,

      77,

      1029,

      1792,

      3735,

      1510,

      2702,

      589,

      2435,

      2144,

      1912,

      3927,

      216,

      2249,

      2840,

      1705,

      3648,
      -1,

      3240,

      3543,

      2546,

      586,

      450,

      1321,

      3204,

      806,

      1780,

      3723,

      1498,

      3537,
      -1,

      2912,

      447,

      3186,

      351,

      2489,

      1774,

      3717,

      1492,

      2993,

      3183,

      3531,
      -1,

      2534,

      444,

      1435,

      1180,

      3180,

      1768,

      3711,

      1486,

      1702,

      3645,

      2528,

      565,

      3471,

      3087,

      934,

      255,

      556,

      1636,

      2612,

      3051,

      679,

      553,

      2522,
      -1,

      3159,

      432,

      2495,

      733,

      3032,

      1744,

      3687,

      1462,
      -1,

      691,

      2429,

      3029,

      1453,

      3156,

      3408,
      -1, -1,

      550,

      3026,

      2069,

      3147,

      2153,

      2498,

      421,

      2750,

      3138,

      2849,

      1723,

      3666,
      -1,

      3135,
      -1, -1,

      2138,

      1177,

      414,

      676,

      826,

      2834,

      1693,

      2135,

      1174,

      411,

      3990,

      3984,

      2831,

      1687,

      1861,

      685,

      795,

      3132,
      -1,

      2129,

      1168,

      408,
      -1,

      789,

      2825,

      1675,
      -1,

      2051,

      1087,

      3975,

      2480,

      2002,

      1032,

      300,

      1858,

      773,

      2705,

      405,

      2414,
      -1,

      1426,

      1666,

      4077,

      724,

      345,

      2477,

      74,
      -1,

      3258,

      3963,

      402,

      762,
      -1,

      2411,

      1660,

      1423,

      4035,

      547,

      3801,

      3483,
      -1,

      947,

      261,

      3273,

      755,

      2624,

      3480,

      1960,

      944,

      3876,
      -1,

      2327,

      2621,
      -1, -1,

      3438,

      1939,

      899,

      3453,

      3870,

      916,

      2579,

      3432,

      1936,

      2594,

      240,

      3093,

      2306,
      -1,

      3327,

      2321,

      3864,

      3420,

      1930,

      3798,

      234,

      1345,

      3636,

      2228,

      1267,

      493,

      3117,

      156,

      577,
      -1,

      3978,

      1339,

      3630,

      2225,

      1264,

      490,
      -1,

      150,

      3609,

      893,

      3840,

      1585,
      -1,

      132,

      3591,

      1846,

      3789,

      1564,
      -1,

      114,

      2891,

      1828,

      3771,

      1546,
      -1,

      884,

      3579,
      -1,

      688,
      -1, -1,

      102,

      3819,

      1816,

      3759,

      1534,

      3567,
      -1,

      1129,
      -1,

      3549,

      89,

      2786,

      1804,

      3747,

      1522,

      3561,

      1786,

      3729,

      1504,

      2570,

      83,

      1035,

      1798,

      3741,

      1516,

      2708,

      3474,

      1957,

      937,

      2558,

      3264,

      441,

      2615,

      2540,
      -1,

      1762,

      3705,

      1480,
      -1,

      2552,

      2132,

      1171,

      628,
      -1,

      3324,

      2828,

      1681,

      4080,
      -1,

      438,
      -1,

      3321,

      2516,

      1756,

      3699,

      1474,

      782,

      2005,

      1038,

      303,

      4047,

      435,

      2711,

      3315,

      3969,

      1750,

      3693,

      1468,

      3099,
      -1,

      2510,

      583,
      -1,

      4041,
      -1,

      3213,
      -1, -1,

      580,

      3966,

      4017,
      -1,

      2504,

      2126,

      1165,

      3999,

      3246,

      571,

      2822,

      1669,

      3993,

      2162,

      1201,
      -1,

      568,
      -1,

      2858,

      1741,

      3684,

      765,

      1198,

      429,

      2159,
      -1,

      562,

      1738,

      3681,

      2855,

      1735,

      3678,

      3987,

      3171,
      -1,

      3060,
      -1,

      842,

      1195,

      425,

      839,

      2156,
      -1,

      1732,

      3675,

      2150,

      2852,

      1729,

      3672,

      3150,

      2846,

      1717,

      3660,

      836,
      -1, -1, -1,

      833,
      -1,

      3144,
      -1,

      820,

      1186,

      417,

      2147,

      2453,

      49,

      1714,

      3657,

      2843,

      1711,

      3654,
      -1,

      2387,
      -1,

      1399,
      -1,

      816,

      2141,
      -1,

      813,

      3882,
      -1,

      2837,

      1699,

      3642,

      2123,

      1162,

      2066,

      631,

      360,

      2819,

      1663,

      2747,

      802,
      -1, -1, -1,

      2117,

      1156,

      3858,

      1456,

      758,

      2813,

      1651,

      2111,

      1150,

      396,

      3291,

      2426,

      2807,

      1639,

      2060,

      1096,

      745,

      1120,

      375,

      2741,

      3852,

      2777,
      -1,

      736,

      2099,

      1138,

      390,

      1444,
      -1,

      2795,

      1615,

      3168,

      3846,

      2093,

      1132,

      384,

      15,

      2723,

      2789,

      1603,

      2465,

      62,

      2738,

      2375,

      3318,

      1363,

      2120,

      1159,

      2399,
      -1,

      1411,

      2816,

      1657,

      4062,

      3468,

      1954,

      931,

      3462,

      1951,

      925,

      2609,

      3216,

      752,

      2603,

      3837,

      1894,
      -1,

      198,

      1891,

      1876,

      195,

      180,

      3834,

      1023,
      -1,

      3831,

      2270,

      2696,

      1303,

      2264,

      2258,

      1300,

      1285,
      -1, -1,

      2084,

      1108,

      3312,

      3828,

      1873,

      2765,

      177,

      3825,

      1870,

      2957,

      174,

      3813,

      2951,

      2921,

      3063,

      2252,

      1123,

      1282,
      -1,

      2246,

      2780,

      1279,
      -1,

      2105,

      1144,
      -1,

      670,

      3810,

      2801,

      1627,

      3807,

      3603,

      1909,

      2915,

      213,
      -1,

      126,

      2909,

      1840,

      3783,

      1558,

      3585,

      2075,

      1099,

      3795,

      1318,

      108,

      2756,

      1822,

      3765,

      1540,

      1189,

      3942,

      1183,

      24,

      2729,

      1720,

      3663,

      1708,

      3651,
      -1,

      2987,
      -1,

      1375,

      2114,

      1153,

      823,

      3402,

      810,

      2810,

      1645,
      -1,

      4074,

      2072,

      1696,

      3639,

      2102,

      1141,

      2753,

      4071,

      742,

      2798,

      1621,

      3309,

      798,

      3261,
      -1, -1,

      4029,

      2471,

      68,

      4044,

      2459,

      56,

      646,

      4023,
      -1,

      2405,
      -1,

      1417,

      2393,

      9,

      1405,

      21,

      2726,

      4011,

      2447,

      43,

      2369,

      3255,

      1357,

      3282,

      1369,
      -1,

      2381,

      3477,

      1393,

      940,

      258,

      3300,

      3906,

      2618,

      1117,

      3096,

      3627,

      3954,

      2774,

      529,

      3294,

      147,

      526,

      511,

      3525,

      1582,

      993,
      -1,

      2444,

      3465,

      2666,

      928,

      252,

      890,

      3447,

      2606,

      909,
      -1, -1,

      3090,

      2588,

      3126,

      3165,

      508,
      -1,

      3162,

      2315,

      505,

      3441,

      3435,

      902,

      896,
      -1, -1,

      2582,

      2576,

      1903,

      1900,

      207,

      204,

      2309,

      2303,

      1017,

      1888,
      -1,

      192,

      2690,

      4065,
      -1,

      1312,

      1309,

      544,

      3270,

      2108,

      1147,

      1882,

      1297,

      186,

      2804,

      1633,

      1011,

      700,
      -1, -1,

      2684,

      2975,

      2969,

      3285,

      1291,

      655,

      1005,

      3816,

      2945,

      3804,

      2678,

      3306,

      2081,

      1105,

      2078,

      1102,
      -1,

      2762,

      999,

      2759,

      2933,

      3372,

      2672,

      3,
      -1,

      3792,

      3114,

      3519,

      694,

      987,

      2363,

      3918,

      1351,

      2660,

      3513,
      -1,

      980,
      -1, -1, -1,

      2654,

      3129,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,

      649,
      -1, -1,

      3396,
      -1, -1, -1, -1, -1, -1,

      3303,
      -1, -1,

      3960,

      3105,
      -1,

      3948,
      -1, -1, -1, -1,

      3390,
      -1, -1,

      3900,
      -1,

      3912,
      -1, -1, -1,

      3936,

      3384,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1,

      3378,
      -1,

      3102,
      -1, -1, -1, -1, -1, -1,
      -1, -1,

      3366,

      3279,
      -1, -1, -1, -1, -1,

      3360,
      -1, -1, -1,

      538,

      535,
      -1, -1, -1,

      619,
      -1,

      523,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1,

      517,
      -1, -1, -1,

      616,
      -1, -1, -1, -1,

      3123,
      -1, -1, -1, -1,

      610,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1,

      604,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1,

      4059,
      -1, -1,

      4053,
      -1,

      3894,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1,

      3111,
      -1,

      3108,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1,

      4068,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1,

      4056,
      -1, -1, -1, -1,

      4038,
      -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1,
      -1,

      4032,

      4026
    };

  if (0 == 0)
    {
      int key = hash(codes);

      if (key <= MAX_HASH_VALUE)
        {
          int index = wordlist[key];

          if (index >= 0 && onig_codes_cmp(codes, OnigUnicodeFolds1 + index, 1) == 0)
            return index;
        }
    }
  return -1;
}
