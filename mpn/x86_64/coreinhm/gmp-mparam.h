/* Nehalem gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2012 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define BYTES_PER_MP_LIMB 8

/* 2667 MHz Core i7 Nehalem */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          3
#define MOD_1U_TO_MOD_1_1_THRESHOLD          2
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        11
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        16
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      9
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           16

#define MUL_TOOM22_THRESHOLD                18
#define MUL_TOOM33_THRESHOLD                59
#define MUL_TOOM44_THRESHOLD               166
#define MUL_TOOM6H_THRESHOLD               226
#define MUL_TOOM8H_THRESHOLD               296

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      73
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     108
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     103
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     113
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     148

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 28
#define SQR_TOOM3_THRESHOLD                 97
#define SQR_TOOM4_THRESHOLD                250
#define SQR_TOOM6_THRESHOLD                318
#define SQR_TOOM8_THRESHOLD                430

#define MULMID_TOOM42_THRESHOLD             28

#define MULMOD_BNM1_THRESHOLD               13
#define SQRMOD_BNM1_THRESHOLD               15

#define MUL_FFT_MODF_THRESHOLD             565  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    565, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     21, 8}, \
    {     11, 7}, {     25, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     35, 9}, {     19, 8}, \
    {     39, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     35, 8}, {     71, 9}, {     39,10}, \
    {     23, 9}, {     51,11}, {     15,10}, {     31, 9}, \
    {     67,10}, {     39, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     79,11}, {     47,10}, \
    {     95,12}, {     31,11}, {     63,10}, {    135,11}, \
    {     79,10}, {    159, 9}, {    319,10}, {    167,11}, \
    {     95,10}, {    191, 9}, {    383,11}, {    111,12}, \
    {     63,11}, {    127, 9}, {    511,11}, {    143,10}, \
    {    287, 9}, {    575,10}, {    303,11}, {    159,12}, \
    {     95,10}, {    383, 9}, {    767,13}, {   8192,14}, \
    {  16384,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 74
#define MUL_FFT_THRESHOLD                 4736

#define SQR_FFT_MODF_THRESHOLD             570  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    570, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     21, 8}, \
    {     11, 7}, {     25, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     33, 9}, {     19, 8}, \
    {     41, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     47,11}, {     15,10}, {     31, 9}, \
    {     67,10}, {     39, 9}, {     79,10}, {     47,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95,12}, \
    {     31,11}, {     63,10}, {    127, 8}, {    511,11}, \
    {     79, 9}, {    319,11}, {     95, 9}, {    383,12}, \
    {     63,11}, {    127, 9}, {    511, 8}, {   1023, 9}, \
    {    543,11}, {    143,10}, {    287, 9}, {    575,10}, \
    {    303, 9}, {    607,10}, {    319, 9}, {    639,12}, \
    {     95,10}, {    383,13}, {   8192,14}, {  16384,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 69
#define SQR_FFT_THRESHOLD                 4032

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  46
#define MULLO_MUL_N_THRESHOLD             8648

#define DC_DIV_QR_THRESHOLD                 40
#define DC_DIVAPPR_Q_THRESHOLD             142
#define DC_BDIV_QR_THRESHOLD                38
#define DC_BDIV_Q_THRESHOLD                 29

#define INV_MULMOD_BNM1_THRESHOLD           34
#define INV_NEWTON_THRESHOLD               202
#define INV_APPR_THRESHOLD                 154

#define BINV_NEWTON_THRESHOLD              252
#define REDC_1_TO_REDC_2_THRESHOLD          32
#define REDC_2_TO_REDC_N_THRESHOLD          51

#define MU_DIV_QR_THRESHOLD               1499
#define MU_DIVAPPR_Q_THRESHOLD            1499
#define MUPI_DIV_QR_THRESHOLD               81
#define MU_BDIV_QR_THRESHOLD              1334
#define MU_BDIV_Q_THRESHOLD               1334

#define POWM_SEC_TABLE  2,65,204,540,1100

#define MATRIX22_STRASSEN_THRESHOLD         21
#define HGCD_THRESHOLD                     136
#define HGCD_APPR_THRESHOLD                176
#define HGCD_REDUCE_THRESHOLD             3014
#define GCD_DC_THRESHOLD                   273
#define GCDEXT_DC_THRESHOLD                393
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                15
#define GET_STR_PRECOMPUTE_THRESHOLD        27
#define SET_STR_DC_THRESHOLD               230
#define SET_STR_PRECOMPUTE_THRESHOLD      1367

#define FAC_DSC_THRESHOLD                 1517
#define FAC_ODD_THRESHOLD                   44
