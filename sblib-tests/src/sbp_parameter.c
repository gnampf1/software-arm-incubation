// automatically generated from jung2138-parameter.trx

#include "CUnit/Basic.h"

#include "sb_proto_test.h"
#include "sb_bus.h"
#include "sb_proto.h"
#include "sb_const.h"
#include "sb_eep_emu.h"

static void check_connect(void)
{
  CU_ASSERT(sbConnectedAddr == 0x0001);
}

static void check_disconnect(void)
{
  CU_ASSERT(sbConnectedAddr == 0x0000);
}

static void tc_setup(void)
{
  sbOwnPhysicalAddr = 0x1112; // set own address to 1.1.18
  eep [0x04] = 0x04;
  eep [0x05] = 0x20;
  eep [0x06] = 0x60;
  eep [0x07] = 0x01;
  eep [0x16] = 0x01;
  eep [0xD8] = 0x00;
  eep [0xD9] = 0x00;
  eep [0xDA] = 0x00;
  eep [0xDB] = 0x00;
  eep [0xDC] = 0x00;
  eep [0xDD] = 0x00;
  eep [0xDE] = 0x00;
  eep [0xDF] = 0x00;
  eep [0xE0] = 0x00;
  eep [0xE1] = 0x00;
  eep [0xE2] = 0x00;
  eep [0xE3] = 0x00;
  eep [0xE4] = 0x00;
  eep [0xE5] = 0x00;
  eep [0xE6] = 0x00;
  eep [0xE7] = 0x00;
  eep [0xE8] = 0x00;
  eep [0xE9] = 0x00;
  eep [0xEA] = 0x00;
  eep [0xEB] = 0x00;
  eep [0xEC] = 0x03;
  eep [0xED] = 0x00;
  eep [0xEE] = 0x00;
  eep [0xEF] = 0x00;
  eep [0xF0] = 0x00;
  eep [0xF1] = 0x00;
  eep [0xF2] = 0x00;
  eep [0xF3] = 0x00;
  eep [0xF4] = 0x00;
  eep [0xF5] = 0x00;
  eep [0xF6] = 0x55;
  eep [0xF7] = 0x55;
  eep [0xF9] = 0x00;
  eep [0xFA] = 0x00;
  eep [0xFB] = 0x00;
  eep [0xFC] = 0x00;
  eep [0xFD] = 0x00;
}

Telegram parameter_programming_t[] =
{ {TEL_RX,  7, 0, check_connect       , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x80}} //   1
, {TEL_RX,  8, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x43, 0x00}} //   2
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //   3
, {TEL_TX, 10, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x63, 0x43, 0x40, 0x00, 0x12}} //   4
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC2}} //   5
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x46, 0x01, 0x01, 0x04}} //   6
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} //   7
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x46, 0x41, 0x01, 0x04, 0x04}} //   8
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC6}} //   9
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4A, 0x04, 0x01, 0x04}} //  10
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} //  11
, {TEL_TX, 14, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x67, 0x4A, 0x44, 0x01, 0x04, 0x04, 0x20, 0x60, 0x01}} //  12
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCA}} //  13
, {TEL_RX,  7, 0, check_disconnect    , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x81}} //  14
, {TEL_RX,  7, 0, check_connect       , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x80}} //  15
, {TEL_RX,  8, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x43, 0x00}} //  16
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //  17
, {TEL_TX, 10, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x63, 0x43, 0x40, 0x00, 0x12}} //  18
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC2}} //  19
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x46, 0x81, 0x01, 0x0D, 0x00}} //  20
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} //  21
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4A, 0x01, 0x01, 0x0D}} //  22
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} //  23
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x46, 0x41, 0x01, 0x0D, 0x00}} //  24
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC6}} //  25
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4E, 0x01, 0x01, 0x16}} //  26
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCE}} //  27
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x4A, 0x41, 0x01, 0x16, 0x01}} //  28
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCA}} //  29
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x52, 0x81, 0x01, 0x16, 0x01}} //  30
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD2}} //  31
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x56, 0x01, 0x01, 0x16}} //  32
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD6}} //  33
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x4E, 0x41, 0x01, 0x16, 0x01}} //  34
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCE}} //  35
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x5A, 0x0C, 0x01, 0xD8}} //  36
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDA}} //  37
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x52, 0x4C, 0x01, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  38
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD2}} //  39
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x5E, 0x0C, 0x01, 0xE4}} //  40
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDE}} //  41
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x56, 0x4C, 0x01, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00}} //  42
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD6}} //  43
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x62, 0x08, 0x01, 0xF0}} //  44
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE2}} //  45
, {TEL_TX, 18, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6B, 0x5A, 0x48, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55}} //  46
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDA}} //  47
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x66, 0x05, 0x01, 0xF9}} //  48
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE6}} //  49
, {TEL_TX, 15, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x68, 0x5E, 0x45, 0x01, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00}} //  50
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDE}} //  51
, {TEL_RX, 19, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6C, 0x6A, 0x89, 0x00, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  52
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEA}} //  53
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x6E, 0x09, 0x00, 0xCE}} //  54
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEE}} //  55
, {TEL_TX, 19, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6C, 0x62, 0x49, 0x00, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  56
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE2}} //  57
, {TEL_RX, 19, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6C, 0x72, 0x89, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  58
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF2}} //  59
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x76, 0x09, 0x00, 0xD7}} //  60
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF6}} //  61
, {TEL_TX, 19, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6C, 0x66, 0x49, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  62
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE6}} //  63
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x7A, 0x01, 0x01, 0x16}} //  64
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFA}} //  65
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x6A, 0x41, 0x01, 0x16, 0x01}} //  66
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEA}} //  67
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x7E, 0x81, 0x01, 0x0D, 0xFF}} //  68
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFE}} //  69
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x42, 0x01, 0x01, 0x0D}} //  70
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //  71
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x6E, 0x41, 0x01, 0x0D, 0xFF}} //  72
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEE}} //  73
, {TEL_RX,  8, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x47, 0x80}} //  74
, {TEL_RX,  7, 0, check_disconnect    , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x81}} //  75
, {END}
};

Test_Case parameter_programming =
{ "Parameter programming"
, 0x00   // sbState
, tc_setup // init function
, parameter_programming_t   // telegrams
};
