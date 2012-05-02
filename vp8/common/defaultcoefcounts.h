/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

/* Generated file, included by entropy.c */

static const unsigned int vp8_default_coef_counts_8x8[BLOCK_TYPES_8X8]
                                              [COEF_BANDS]
                                              [PREV_COEF_CONTEXTS]
                                              [MAX_ENTROPY_TOKENS] =
{

    { /* block Type 0 */
      { /* Coeff Band 0 */
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#endif
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
      },
      { /* Coeff Band 1 */
        { 21041, 13314, 3420, 592, 117, 0, 0, 0, 0, 0, 0, 11783},
        { 48236, 6918, 586, 153, 0, 0, 0, 0, 0, 0, 0, 23137},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 676112, 106685, 24701, 6003, 1426, 429, 165, 0, 0, 0, 0, 28910},
#endif
        { 676112, 106685, 24701, 6003, 1426, 429, 165, 0, 0, 0, 0, 28910},
      },
      { /* Coeff Band 2 */
        { 660107, 75227, 8451, 1345, 259, 0, 0, 0, 0, 0, 0, 0},
        { 79164, 36835, 6865, 1185, 246, 47, 0, 0, 0, 0, 0, 2575},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 19469, 14330, 3070, 579, 94, 6, 0, 0, 0, 0, 0, 44},
#endif
        { 19469, 14330, 3070, 579, 94, 6, 0, 0, 0, 0, 0, 44},
      },
      { /* Coeff Band 3 */
        { 1978004, 235343, 28485, 3242, 271, 0, 0, 0, 0, 0, 0, 0},
        { 228684, 106736, 21431, 2842, 272, 46, 0, 0, 0, 0, 0, 9266},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 32470, 27496, 6852, 1386, 45, 93, 0, 0, 0, 0, 0, 0},
#endif
        { 32470, 27496, 6852, 1386, 45, 93, 0, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 4 */
        { 1911212, 224613, 49653, 13748, 2541, 568, 48, 0, 0, 0, 0, 0},
        { 196670, 103472, 44473, 11490, 2432, 977, 72, 0, 0, 0, 0, 9447},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 37876, 40417, 19142, 6069, 1799, 727, 51, 0, 0, 0, 0, 0},
#endif
        { 37876, 40417, 19142, 6069, 1799, 727, 51, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 5 */
        { 3813399, 437714, 64387, 11312, 695, 219, 0, 0, 0, 0, 0, 0},
        { 438288, 215917, 61905, 10194, 674, 107, 0, 0, 0, 0, 0, 17808},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 99139, 93643, 30054, 5758, 802, 171, 0, 0, 0, 0, 0, 0},
#endif
        { 99139, 93643, 30054, 5758, 802, 171, 0, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 6 */
        { 12259383, 1625505, 234927, 46306, 8417, 1456, 151, 0, 0, 0, 0, 0},
        { 1518161, 734287, 204240, 44228, 9462, 2240, 65, 0, 0, 0, 0, 107630},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 292470, 258894, 94925, 25864, 6662, 2055, 170, 0, 0, 0, 0, 0},
#endif
        { 292470, 258894, 94925, 25864, 6662, 2055, 170, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 7 */
        { 9791308, 2118949, 169439, 16735, 1122, 0, 0, 0, 0, 0, 0, 0},
        { 1500281, 752410, 123259, 13065, 1168, 47, 0, 0, 0, 0, 0, 707182},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 193067, 142638, 31018, 4719, 516, 138, 0, 0, 0, 0, 0, 12439},
#endif
        { 193067, 142638, 31018, 4719, 516, 138, 0, 0, 0, 0, 0, 12439},
      }
    },
    { /* block Type 1 */
      { /* Coeff Band 0 */
        { 16925, 10553, 852, 16, 63, 87, 47, 0, 0, 0, 0, 31232},
        { 39777, 26839, 6822, 1908, 678, 456, 227, 168, 35, 0, 0, 46825},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 17300, 16666, 4168, 1209, 492, 154, 118, 207, 0, 0, 0, 19608},
#endif
        { 17300, 16666, 4168, 1209, 492, 154, 118, 207, 0, 0, 0, 19608},
      },
      { /* Coeff Band 1 */
        { 35882, 31722, 4625, 1270, 266, 237, 0, 0, 0, 0, 0, 0},
        { 15426, 13894, 4482, 1305, 281, 43, 0, 0, 0, 0, 0, 18627},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 3900, 6552, 3472, 1723, 746, 366, 115, 35, 0, 0, 0, 798},
#endif
        { 3900, 6552, 3472, 1723, 746, 366, 115, 35, 0, 0, 0, 798},
      },
      { /* Coeff Band 2 */
        { 21998, 29132, 3353, 679, 46, 0, 0, 0, 0, 0, 0, 0},
        { 9098, 15767, 3794, 792, 268, 47, 0, 0, 0, 0, 0, 22402},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 4007, 8472, 2844, 687, 217, 0, 0, 0, 0, 0, 0, 2739},
#endif
        { 4007, 8472, 2844, 687, 217, 0, 0, 0, 0, 0, 0, 2739},
      },
      { /* Coeff Band 3 */
        { 0, 31414, 2911, 682, 96, 0, 0, 0, 0, 0, 0, 0},
        { 0, 16515, 4425, 938, 124, 0, 0, 0, 0, 0, 0, 31369},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 4833, 2787, 1213, 150, 0, 0, 0, 0, 0, 0, 3744},
#endif
        { 0, 4833, 2787, 1213, 150, 0, 0, 0, 0, 0, 0, 3744},
      },
      { /* Coeff Band 4 */
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#endif
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 5 */
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#endif
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 6 */
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52762},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13326},
#endif
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13326},
      },
      { /* Coeff Band 7 */
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#endif
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      }
    },
    { /* block Type 2 */
      { /* Coeff Band 0 */
        { 4444, 1614, 120, 48, 0, 48, 0, 0, 0, 0, 0, 278},
        { 192436, 103730, 24494, 9845, 4122, 1193, 102, 0, 0, 0, 0, 2577},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 3473446, 2308716, 815510, 370374, 167797, 92152, 12073, 86, 0, 0, 0, 6801},
#endif
        { 3473446, 2308716, 815510, 370374, 167797, 92152, 12073, 86, 0, 0, 0, 6801},
      },
      { /* Coeff Band 1 */
        { 2150616, 1136388, 250011, 86888, 31434, 13746, 1243, 0, 0, 0, 0, 0},
        { 1179945, 799802, 266012, 106787, 40809, 16486, 1546, 0, 0, 0, 0, 2673},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 465128, 504130, 286989, 146259, 62380, 30192, 2866, 20, 0, 0, 0, 0},
#endif
        { 465128, 504130, 286989, 146259, 62380, 30192, 2866, 20, 0, 0, 0, 0},
      },
      { /* Coeff Band 2 */
        { 2157762, 1177519, 282665, 108499, 43389, 23224, 2597, 34, 0, 0, 0, 0},
        { 1135685, 813705, 278079, 123255, 53935, 29492, 3152, 39, 0, 0, 0, 2978},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 391894, 428037, 264216, 144306, 69326, 40281, 5541, 29, 0, 0, 0, 38},
#endif
        { 391894, 428037, 264216, 144306, 69326, 40281, 5541, 29, 0, 0, 0, 38},
      },
      { /* Coeff Band 3 */
        { 6669109, 3468471, 782161, 288484, 115500, 51083, 4943, 41, 0, 0, 0, 0},
        { 3454493, 2361636, 809524, 337663, 141343, 65036, 6361, 0, 0, 0, 0, 8730},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 1231825, 1359522, 824686, 420784, 185517, 98731, 10973, 72, 0, 0, 0, 20},
#endif
        { 1231825, 1359522, 824686, 420784, 185517, 98731, 10973, 72, 0, 0, 0, 20},
      },
      { /* Coeff Band 4 */
        { 7606203, 3452846, 659856, 191703, 49335, 14336, 450, 0, 0, 0, 0, 0},
        { 3806506, 2379332, 691697, 224938, 61966, 18324, 766, 0, 0, 0, 0, 8193},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 1270110, 1283728, 628775, 243378, 72617, 24897, 1087, 0, 0, 0, 0, 0},
#endif
        { 1270110, 1283728, 628775, 243378, 72617, 24897, 1087, 0, 0, 0, 0, 0},
      },
      { /* Coeff Band 5 */
        { 15314169, 7436809, 1579928, 515790, 167453, 58305, 3502, 19, 0, 0, 0, 0},
        { 7021286, 4667922, 1545706, 574463, 191793, 68748, 4048, 1, 0, 0, 0, 17222},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 2011989, 2145878, 1185336, 534879, 195719, 79103, 5343, 4, 0, 0, 0, 37},
#endif
        { 2011989, 2145878, 1185336, 534879, 195719, 79103, 5343, 4, 0, 0, 0, 37},
      },
      { /* Coeff Band 6 */
        { 63458382, 25384462, 4208045, 1091050, 299011, 95242, 5238, 33, 0, 0, 0, 0},
        { 25638401, 14694085, 3945978, 1195420, 344813, 117355, 6703, 0, 0, 0, 0, 216811},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 5988177, 5824044, 2754413, 1077350, 370739, 139710, 9693, 38, 0, 0, 0, 1835},
#endif
        { 5988177, 5824044, 2754413, 1077350, 370739, 139710, 9693, 38, 0, 0, 0, 1835},
      },
      { /* Coeff Band 7 */
        { 74998348, 29342158, 2955001, 452912, 69631, 9516, 37, 0, 0, 0, 0, 0},
        { 24762356, 13281085, 2409883, 436787, 68948, 10658, 36, 0, 0, 0, 0, 6614989},
#if CONFIG_EXPANDED_COEF_CONTEXT
        { 3882867, 3224489, 1052289, 252890, 46967, 8548, 154, 0, 0, 0, 0, 194354},
#endif
        { 3882867, 3224489, 1052289, 252890, 46967, 8548, 154, 0, 0, 0, 0, 194354},
      }
    },
  };
