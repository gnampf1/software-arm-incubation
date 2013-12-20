// automatically generated from jung2138-pa-programmieren.trx

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

static void check_not_connect(void)
{
  CU_ASSERT(sbConnectedAddr == 0x0000);
}

static void check_disconnect(void)
{
  CU_ASSERT(sbConnectedAddr == 0x0000);
}

static void tc_setup(void)
{
  sbOwnPhysicalAddr = 0x11C9; // set own address to 1.1.201
}

Telegram physical_address_programming_t[] =
{ {TEL_RX,  8, 1, NULL                , {0xB0, 0x00, 0x01, 0x00, 0x00, 0xE1, 0x01, 0x00}} //   1
, {TEL_TX,  8, 0, NULL                , {0xB0, 0x11, 0xC9, 0x00, 0x00, 0xE1, 0x01, 0x40}} //   2
, {TEL_RX,  7, 0, check_not_connect   , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x80}} //   3
, {TEL_RX,  8, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x43, 0x00}} //   4
, {TEL_RX,  7, 0, check_disconnect    , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x81}} //   5
, {TEL_RX, 10, 0, NULL                , {0xB0, 0x00, 0x01, 0x00, 0x00, 0xE3, 0x00, 0xC0, 0x11, 0x12}} //   6
, {TEL_RX,  8, 1, NULL                , {0xB0, 0x00, 0x01, 0x00, 0x00, 0xE1, 0x01, 0x00}} //   7
, {TEL_TX,  8, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x00, 0xE1, 0x01, 0x40}} //   8
, {TEL_RX,  7, 0, check_connect       , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x80}} //  12
, {TEL_RX,  8, 2, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x43, 0x00}} //  13
, {TEL_TX,  7, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x60, 0xC2}} //  14
, {TEL_TX, 10, 0, NULL                , {0xB0, 0x11, 0x12, 0x00, 0x01, 0x63, 0x43, 0x40, 0x00, 0x12}} //  15
, {TEL_RX,  7, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0xC2}} //  16
, {TEL_RX,  8, 0, NULL                , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x61, 0x47, 0x80}} //  17
, {TEL_RX,  7, 0, check_disconnect    , {0xB0, 0x00, 0x01, 0x11, 0x12, 0x60, 0x81}} //  18
, {TEL_RX,  8, 0, NULL                , {0xB0, 0x00, 0x01, 0x00, 0x00, 0xE1, 0x01, 0x00}} //  19
, {END}
};

Test_Case physical_address_programming =
{ "Physical address programming"
, 0x01   // sbState
, tc_setup // init function
, physical_address_programming_t   // telegrams
};
