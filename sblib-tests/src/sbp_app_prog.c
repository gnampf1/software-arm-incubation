// automatically generated from jung2138-applikationsprogramm.trx

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
  eep [0x00] = 0xFF;
  eep [0x04] = 0x04;
  eep [0x05] = 0x20;
  eep [0x06] = 0x60;
  eep [0x07] = 0x01;
  eep [0x08] = 0xFF;
  eep [0x09] = 0x00;
  eep [0x0A] = 0x00;
  eep [0x0B] = 0x00;
  eep [0x0C] = 0x00;
  eep [0x0E] = 0x60;
  eep [0x0F] = 0x63;
  eep [0x10] = 0xEF;
  eep [0x11] = 0x41;
  eep [0x12] = 0x9A;
  eep [0x13] = 0x00;
  eep [0x14] = 0x00;
  eep [0x15] = 0x00;
  eep [0x19] = 0x10;
  eep [0x1A] = 0x00;
  eep [0x1B] = 0x10;
  eep [0x1C] = 0x01;
  eep [0x1D] = 0x10;
  eep [0x1E] = 0x02;
  eep [0x1F] = 0x10;
  eep [0x20] = 0x03;
  eep [0x21] = 0x10;
  eep [0x22] = 0x04;
  eep [0x23] = 0x10;
  eep [0x24] = 0x05;
  eep [0x25] = 0x10;
  eep [0x26] = 0x06;
  eep [0x27] = 0x00;
  eep [0x28] = 0x00;
  eep [0x29] = 0x00;
  eep [0x2A] = 0x00;
  eep [0x2B] = 0x00;
  eep [0x2C] = 0x00;
  eep [0x2D] = 0x00;
  eep [0x2E] = 0x00;
  eep [0x2F] = 0x00;
  eep [0x30] = 0x00;
  eep [0x31] = 0x00;
  eep [0x32] = 0x00;
  eep [0x33] = 0x00;
  eep [0x34] = 0x00;
  eep [0x35] = 0x00;
  eep [0x36] = 0x00;
  eep [0x37] = 0x00;
  eep [0x38] = 0x00;
  eep [0x39] = 0x00;
  eep [0x3A] = 0x00;
  eep [0x3B] = 0x00;
  eep [0x3C] = 0x00;
  eep [0x3D] = 0x00;
  eep [0x3E] = 0x00;
  eep [0x3F] = 0x00;
  eep [0x40] = 0x00;
  eep [0x41] = 0x07;
}

Telegram application_programming_t[] =
{ {TEL_RX,  7, 0, check_connect       , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x80}} //   1
, {TEL_RX,  8, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x43, 0x00}} //   2
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //   3
, {TEL_TX, 10, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x63, 0x43, 0x40, 0x00, 0x12}} //   4
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC2}} //   5
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x46, 0x01, 0x01, 0x04}} //   6
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} //   7
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x46, 0x41, 0x01, 0x04, 0x04}} //   8
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC6}} //   9
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4A, 0x01, 0x01, 0x0C}} //  10
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} //  11
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x4A, 0x41, 0x01, 0x0C, 0x00}} //  12
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
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x4E, 0x81, 0x01, 0x16, 0x01}} //  26
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCE}} //  27
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x52, 0x01, 0x01, 0x16}} //  28
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD2}} //  29
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x4A, 0x41, 0x01, 0x16, 0x01}} //  30
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCA}} //  31
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x56, 0x01, 0x01, 0x00}} //  32
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD6}} //  33
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x4E, 0x41, 0x01, 0x00, 0xFF}} //  34
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCE}} //  35
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x5A, 0x09, 0x01, 0x04}} //  36
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDA}} //  37
, {TEL_TX, 19, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6C, 0x52, 0x49, 0x01, 0x04, 0x04, 0x20, 0x60, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00}} //  38
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD2}} //  39
, {TEL_RX, 13, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x66, 0x5E, 0x83, 0x01, 0x08, 0xFE, 0x11, 0x40}} //  40
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDE}} //  41
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x62, 0x03, 0x01, 0x08}} //  42
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE2}} //  43
, {TEL_TX, 13, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x66, 0x56, 0x43, 0x01, 0x08, 0xFE, 0x11, 0x40}} //  44
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD6}} //  45
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x66, 0x08, 0x01, 0x0E}} //  46
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE6}} //  47
, {TEL_TX, 18, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6B, 0x5A, 0x48, 0x01, 0x0E, 0x60, 0x63, 0xEF, 0x41, 0x9A, 0x00, 0x00, 0x00}} //  48
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDA}} //  49
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x6A, 0x81, 0x01, 0x0E, 0xE0}} //  50
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEA}} //  51
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x6E, 0x01, 0x01, 0x0E}} //  52
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEE}} //  53
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x5E, 0x41, 0x01, 0x0E, 0xE0}} //  54
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDE}} //  55
, {TEL_RX, 12, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x65, 0x72, 0x82, 0x01, 0x10, 0xA7, 0x19}} //  56
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF2}} //  57
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x76, 0x02, 0x01, 0x10}} //  58
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF6}} //  59
, {TEL_TX, 12, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x65, 0x62, 0x42, 0x01, 0x10, 0xA7, 0x19}} //  60
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE2}} //  61
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x7A, 0x0C, 0x01, 0x19}} //  62
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFA}} //  63
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x66, 0x4C, 0x01, 0x19, 0x10, 0x00, 0x10, 0x01, 0x10, 0x02, 0x10, 0x03, 0x10, 0x04, 0x10, 0x05}} //  64
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE6}} //  65
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x7E, 0x0C, 0x01, 0x25}} //  66
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFE}} //  67
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x6A, 0x4C, 0x01, 0x25, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  68
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEA}} //  69
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x42, 0x0C, 0x01, 0x31}} //  70
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //  71
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x6E, 0x4C, 0x01, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} //  72
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEE}} //  73
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x46, 0x05, 0x01, 0x3D}} //  74
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} //  75
, {TEL_TX, 15, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x68, 0x72, 0x45, 0x01, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x07}} //  76
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xF2}} //  77
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x4A, 0x8C, 0x01, 0x19, 0x14, 0xFE, 0x00, 0xFE, 0x01, 0xFE, 0x02, 0xFE, 0x03, 0xFE, 0x04, 0xFE}} //  78
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} //  79
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4E, 0x0C, 0x01, 0x19}} //  80
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCE}} //  81
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x76, 0x4C, 0x01, 0x19, 0x14, 0xFE, 0x00, 0xFE, 0x01, 0xFE, 0x02, 0xFE, 0x03, 0xFE, 0x04, 0xFE}} //  82
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xF6}} //  83
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x52, 0x8C, 0x01, 0x25, 0x05, 0xFE, 0x06, 0xFE, 0x07, 0xFE, 0x08, 0xFE, 0x09, 0xFE, 0x0A, 0xFE}} //  84
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD2}} //  85
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x56, 0x0C, 0x01, 0x25}} //  86
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD6}} //  87
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x7A, 0x4C, 0x01, 0x25, 0x05, 0xFE, 0x06, 0xFE, 0x07, 0xFE, 0x08, 0xFE, 0x09, 0xFE, 0x0A, 0xFE}} //  88
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xFA}} //  89
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x5A, 0x8C, 0x01, 0x31, 0x0B, 0xFE, 0x0C, 0xFE, 0x0D, 0xFE, 0x0E, 0xFE, 0x0F, 0xFE, 0x10, 0xFE}} //  90
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDA}} //  91
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x5E, 0x0C, 0x01, 0x31}} //  92
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDE}} //  93
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x7E, 0x4C, 0x01, 0x31, 0x0B, 0xFE, 0x0C, 0xFE, 0x0D, 0xFE, 0x0E, 0xFE, 0x0F, 0xFE, 0x10, 0xFE}} //  94
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xFE}} //  95
, {TEL_RX, 15, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x68, 0x62, 0x85, 0x01, 0x3D, 0x11, 0xFE, 0x12, 0xFE, 0x13}} //  96
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE2}} //  97
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x66, 0x05, 0x01, 0x3D}} //  98
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE6}} //  99
, {TEL_TX, 15, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x68, 0x42, 0x45, 0x01, 0x3D, 0x11, 0xFE, 0x12, 0xFE, 0x13}} // 100
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC2}} // 101
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x6A, 0x8C, 0x01, 0x9A, 0x14, 0xD6, 0x54, 0x93, 0x00, 0x55, 0x93, 0x00, 0x56, 0x93, 0x00, 0x57}} // 102
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEA}} // 103
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x6E, 0x0C, 0x01, 0x9A}} // 104
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEE}} // 105
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x46, 0x4C, 0x01, 0x9A, 0x14, 0xD6, 0x54, 0x93, 0x00, 0x55, 0x93, 0x00, 0x56, 0x93, 0x00, 0x57}} // 106
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC6}} // 107
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x72, 0x8C, 0x01, 0xA6, 0x93, 0x00, 0x58, 0x93, 0x00, 0x59, 0x93, 0x00, 0x5A, 0x93, 0x00, 0x5B}} // 108
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF2}} // 109
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x76, 0x0C, 0x01, 0xA6}} // 110
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF6}} // 111
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x4A, 0x4C, 0x01, 0xA6, 0x93, 0x00, 0x58, 0x93, 0x00, 0x59, 0x93, 0x00, 0x5A, 0x93, 0x00, 0x5B}} // 112
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCA}} // 113
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x7A, 0x8C, 0x01, 0xB2, 0x93, 0x00, 0x5C, 0x93, 0x01, 0x5D, 0x93, 0x01, 0x5E, 0x93, 0x01, 0x5F}} // 114
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFA}} // 115
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x7E, 0x0C, 0x01, 0xB2}} // 116
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFE}} // 117
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x4E, 0x4C, 0x01, 0xB2, 0x93, 0x00, 0x5C, 0x93, 0x01, 0x5D, 0x93, 0x01, 0x5E, 0x93, 0x01, 0x5F}} // 118
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xCE}} // 119
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x42, 0x8C, 0x01, 0xBE, 0x93, 0x01, 0x60, 0xC3, 0x00, 0x61, 0xC3, 0x00, 0x62, 0xC3, 0x00, 0x63}} // 120
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} // 121
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x46, 0x0C, 0x01, 0xBE}} // 122
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} // 123
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x52, 0x4C, 0x01, 0xBE, 0x93, 0x01, 0x60, 0xC3, 0x00, 0x61, 0xC3, 0x00, 0x62, 0xC3, 0x00, 0x63}} // 124
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD2}} // 125
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x4A, 0x8C, 0x01, 0xCA, 0xC3, 0x00, 0x64, 0xC3, 0x00, 0x65, 0xC3, 0x00, 0x66, 0xC3, 0x00, 0x67}} // 126
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} // 127
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4E, 0x0C, 0x01, 0xCA}} // 128
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCE}} // 129
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x56, 0x4C, 0x01, 0xCA, 0xC3, 0x00, 0x64, 0xC3, 0x00, 0x65, 0xC3, 0x00, 0x66, 0xC3, 0x00, 0x67}} // 130
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xD6}} // 131
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x52, 0x8C, 0x01, 0xD6, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 132
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD2}} // 133
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x56, 0x0C, 0x01, 0xD6}} // 134
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xD6}} // 135
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x5A, 0x4C, 0x01, 0xD6, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 136
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDA}} // 137
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x5A, 0x8C, 0x01, 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00}} // 138
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDA}} // 139
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x5E, 0x0C, 0x01, 0xE2}} // 140
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xDE}} // 141
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x5E, 0x4C, 0x01, 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00}} // 142
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xDE}} // 143
, {TEL_RX, 22, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6F, 0x62, 0x8C, 0x01, 0xEE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0xCD, 0x00}} // 144
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE2}} // 145
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x66, 0x0C, 0x01, 0xEE}} // 146
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xE6}} // 147
, {TEL_TX, 22, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6F, 0x62, 0x4C, 0x01, 0xEE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0xCD, 0x00}} // 148
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE2}} // 149
, {TEL_RX, 15, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x68, 0x6A, 0x85, 0x01, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00}} // 150
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEA}} // 151
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x6E, 0x05, 0x01, 0xFA}} // 152
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xEE}} // 153
, {TEL_TX, 15, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x68, 0x66, 0x45, 0x01, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00}} // 154
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xE6}} // 155
, {TEL_RX, 19, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6C, 0x72, 0x89, 0x00, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 156
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF2}} // 157
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x76, 0x09, 0x00, 0xCE}} // 158
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xF6}} // 159
, {TEL_TX, 19, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6C, 0x6A, 0x49, 0x00, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 160
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEA}} // 161
, {TEL_RX, 19, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x6C, 0x7A, 0x89, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 162
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFA}} // 163
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x7E, 0x09, 0x00, 0xD7}} // 164
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xFE}} // 165
, {TEL_TX, 19, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x6C, 0x6E, 0x49, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}} // 166
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xEE}} // 167
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x42, 0x01, 0x01, 0x16}} // 168
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} // 169
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x72, 0x41, 0x01, 0x16, 0x01}} // 170
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xF2}} // 171
, {TEL_RX, 11, 1, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x64, 0x46, 0x81, 0x01, 0x0D, 0xFF}} // 172
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC6}} // 173
, {TEL_RX, 10, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x63, 0x4A, 0x01, 0x01, 0x0D}} // 174
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xCA}} // 175
, {TEL_TX, 11, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x64, 0x76, 0x41, 0x01, 0x0D, 0xFF}} // 176
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xF6}} // 177
, {TEL_RX,  8, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x4F, 0x80}} // 178
, {TEL_RX,  7, 0, check_disconnect    , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x81}} // 179
, {END}
};

Test_Case application_programming =
{ "Application programming"
, 0x00   // sbState
, tc_setup // init function
, application_programming_t   // telegrams
};
