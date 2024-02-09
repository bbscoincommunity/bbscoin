// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers. 2018 BBSCoin developers
//
// This file is part of BBSCoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>

namespace CryptoNote {
namespace parameters {

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0xe9;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 60;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V4          = 11;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = (uint64_t)(-1);
const unsigned EMISSION_SPEED_FACTOR                         = 18;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 10000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V3  = 100000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 8;
const uint64_t MINIMUM_FEE                                   = uint64_t(100000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = uint64_t(100000);

const uint16_t MINIMUM_MIXIN_V1                              = 0;
const uint16_t MAXIMUM_MIXIN_V1                              = 100;
const uint32_t MIXIN_LIMITS_V1_HEIGHT                        = 0; // Test from 0

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V2         = 7 * DIFFICULTY_TARGET;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V4         = 3 * DIFFICULTY_TARGET;
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
const size_t   DIFFICULTY_WINDOW_V1                          = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
const size_t   DIFFICULTY_WINDOW_V2                          = 70;
const size_t   DIFFICULTY_WINDOW_V3                          = 70;
const size_t   DIFFICULTY_WINDOW_V4                          = 60;
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = 60;
const size_t   DIFFICULTY_CUT_V2                             = 60;
const size_t   DIFFICULTY_CUT_V3                             = 60;
const size_t   DIFFICULTY_LAG                                = 15;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = 15;
const size_t   DIFFICULTY_LAG_V2                             = 15;
const size_t   DIFFICULTY_LAG_V3                             = 0;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
const uint64_t MAX_EXTRA_SIZE                                = 140000;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                             = 60000;
const uint32_t UPGRADE_HEIGHT_V3                             = 72500;
const uint32_t UPGRADE_HEIGHT_V4                             = 180000;
const uint32_t UPGRADE_HEIGHT_V5                             = 202100;
const uint32_t UPGRADE_HEIGHT_V6                             = 205530;

const uint32_t UPGRADE_DIFFICULTY_HEIGHT_LWMA_V3             = 201500;
const uint64_t DIFFICULTY_BLOCKS_COUNT_LWMA_V3               = DIFFICULTY_WINDOW_V4 + 1;

const unsigned UPGRADE_VOTING_THRESHOLD                      = 1;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bbs";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bbs";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bbs";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bbs";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.bbs.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "BBSCoin";

const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         =  4;
const uint8_t  BLOCK_MAJOR_VERSION_5                         =  5;
const uint8_t  BLOCK_MAJOR_VERSION_6                         =  6;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  100;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  11204;
const int      RPC_DEFAULT_PORT                              =  21204;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024; // 16 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115";

const char* const SEED_NODES[] = {
  "seed.bbscoin.click:11204",
  "singapore-seed.bbscoin.click:11204",
  "toronto-seed.bbscoin.click:11204",
  "frankfurt-seed.bbscoin.click:11204",
  "us-seed.bbscoin.click:11204",
  "spain-seed.bbscoin.click:11204",
  "germany-seed.bbscoin.click:11204",
  "node.bbscoin.click:11204"
};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {54606, "18a155e5ae0a1b4992518698d1271382b566c49ed859540f3c81dc46fa5b89f6"},
  {60000, "dd02fb33f84443584e0432c28df61b372382c9a20542a5cb6b655a7932bd7d58"},
  {63600, "41c73113de2a37ae3a543c79083d4e509713a70a53ae5e7c70fcea641c396c56"},
  {64550, "8554549b78dc831fdca2b46cbef83729e0288a1997998c19fcb37e17164689c7"},
  {72580, "9fb75a9b219f884afc75c2fba08ac31ffe8ec5a188da3694edce9b094bd3741f"},
  {94730, "ec4e91d22603815601ece440e045c5f73da41b085468a1239757795a5887f3b4"},
  {129000, "65c713a8cb27b35ec028dbc47594e651f7b7c17faa2860d51564deaf1095a93f"},
  {154660, "03e4a9d3895af937b341f957c3bf303e873ec50ed4e09280fe4780a66c5f2645"},
  {174650, "4cc1db35a85a69af59fb3735ba2e9c86d20f072f41b3dd2726bcdd59a5c620d4"},
  {181751, "6d8090d695ee679fb0395a88e7145be8b075aeb2ca22187188f23d6f9f0d770a"},
  {181776, "e36d0b26a9ced41403361e916cad4d5480b1407f6a939dad8b2f8190d531c023"},
  {202078, "fd3e877abeed5f84a5276a956f70e862b34650f6aca675fa56572736347e77b0"},
  {202103, "01af7bec5cc4a20fd69f1fedcbce36fee0b9d43130d8ef7b00660cb4a0de4f48"},
  {221000, "21bb441697e1bd221403f16c3d15988711096714b58cb7ecb221a3f36733392e"},
  {237210, "8a2665082656ad5762d0c2940c863e23ade0e7654c6ff24cc88b89b1049e1bb0"},
  {320500, "71a770968fe9fed126f4b4e8cb9e04414299b78131b9a3d77c19f34137af0241"},
  {340700, "1f8e2817413dc67cac1469f040f9e097a9dadcd6e5d38f3cae5101a28025d192"},
  {460730, "7947f322f3739e1a62f98135a21a242edd8794243f6d35e28cb7714545a3b205"},
  {483290, "465d4248ffc8b2e96a98928d0cb87dca937e413a50580e2cc1174d9edaab9d60"},
  {560800, "f59c3300d8fa4aa93f2453d6753e8ad3a8fb31c536b9428c30b68142577da91f"},
  {590320, "a2d716934c62d8e4c3dc7cbace7bfacedef9d642843a5ffcafe76dd066606d49"},
  {600542, "b9e00745a82d56700563507c7214d0c315eddcece23496cf52f96731b02d8251"},
  {654554, "b4bdd0ae508e4de172a5d7aeb7452d4da9eb0bc8c9a268b759d151461e646316"},
  {695245, "c6fcd84877f0b198187aa417446c4382902b9e0b09b2ae95940caf4a9980a772"},
  {738855, "ed8f2d44fbdaeeb1b3d1a10482164ce4ab3d82938dc59e1f46087fbb7b66446c"},
  {755130, "c0e0baca6ab22638f2c5d3f69c53c04de9ea53afffd75a95a8d65038c5444053"},
  {785199, "55a5262c7f1d4e9f42e9ec8448456eda8936efdd8f74ab5ed2c5c48fa209886a"},
  {832118, "c2636869822ed4020b321ae50abae4ab8ca78524d5238b67a4e69e587b37594e"},
  {856513, "618432377f70f7c2140a0db1c3731902adeacb413f2ff17538e31a1ceaeffb22"},
  {900001, "ec11b0c03b8ce2ea465d3a60347046edc6cd38e7275f87f3e19f25bd05f70334"},
  {950001, "009d22e63640f89eb99e29f12871008b1efc0469e4c3c50a0eabb2d4f1172dc8"},
  {1000001, "ce51c7345f4398950700a5987a03105bd5cbf8657c0d3fa650020c04929f10b8"},
  {1010001, "b53581dc38a4f3dc4193fd1c758970c34991db2b6a7b9b0d202dd754df1d0bae"},
  {1020001, "ba64f7605420c87385a1cf91ab576fb46fa5ed7f470966648d57c3ffee0d9297"},
  {1030001, "9d9a19e083998de9831c866024099ada831015fcb645dec10bd734723c1ce34e"},
  {1040001, "8db66e90590cb5f67f8f2b3a3500a44549bd600bcee63ce3e96dacdb770229bb"},
  {1050001, "8349710f9154ce062bfa243d1e31e2f5975b456cab2ec430d9728f604b08ade8"},
  {1060001, "787c71b98936dcb1d350f0299bc83a75d9dd548437a889815180fedea440466a"},
  {1070001, "f2bb2ad9dc4e25bb514072844fbcf39a1da68d301af32958a3ecddfa97e76449"},
  {1080001, "a2ce423d7fd12a49f525204343dbfef3608df42ea9b0b36d844c5154937b8f45"},
  {1090001, "9401656c96e5d145f961110ed674b0c97c159fc92f59410fd2804bcab8cdf4bf"},
  {1101113, "a9cb7b43163435b5e4eebba5a3017bcea3a5cf8575473360ec9615202e5ad089"},
  {1166211, "9d8aac108ad07df796d8aead04c850735fe7e54c211ac61a3221c312791b2be9"},
  {1170001, "fdaf322d5e2180f7f488ab8d9f5e55fa7ac3006d8f6f4f7720aa6fdabcb77844"},
  {1180001, "ea9867262fe506841522cce6c8f15b559fa6e6041d24da050b48a28da809d4ee"},
  {1190001, "bce450c726bfe5bbdb5ee4de92e71d63081868d8780508b327fab1ca226bf044"},
  {1200001, "3651fabc9f48c8ef9eb3bcc0182292d34833ee199d6c04c26095ad90094bd1f4"},
  {1210001, "ee4daae934898cf6d85e64812609737d1f609788c9b0f910ab1927cd575c4bb5"},
  {1220001, "db8e7dde8b6ce917b63e945019133ab25841beb7bc618e98e3de76d472f4e20f"},
  {1230001, "c23e58df813fc641eff39a8226a78c3b95dd2ad27d4cdc2522f55d62ecc35c58"},
  {1265001, "b141d55f762bbd4ea9ca19719842e988d9acb1876cf2d980018e4270e2623d5c"},
  {1315001, "43493ce05ed630b0eb9198db2cf0ff0f60c77d42bd22cb84a10112176c838880"},
  {1383001, "63c650e4f5fd67fa5d16de822ab2388d1ccf125cda5451387b325a291e03f9e7"},
  {1419001, "687366f6203f321f65bca9e8cea9d9c7638c385da68e8e1d23a78db0f3a61c5d"},
  {1467001, "12aabd55ee885a64f4ae7aff9b1817ca8d5758b6889c457efa493849f8ef31ef"},
  {1501001, "aeb81323c0ffcaea2ec8e6fe0e7147bb5206b306b0926dcce04210bf2cac591f"},
  {1543001, "f2257f710784a3fe66fc65311db7582785f013a6f18b59544976aed57da85d00"},
  {1580101, "e418412af058b341f9c869862db7796653570544610306e7c83cfa5966885c4a"}
};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS



