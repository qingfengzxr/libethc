#include <ethc/keccak256.h>
#include <tap.h>

void test_eth_keccak256() {
  // ---
  unsigned char outp0[32];
  const char inp0[] = {};
  const char cmp0[] = {0xc5, 0xd2, 0x46, 0x01, 0x86, 0xf7, 0x23, 0x3c,
                       0x92, 0x7e, 0x7d, 0xb2, 0xdc, 0xc7, 0x03, 0xc0,
                       0xe5, 0x00, 0xb6, 0x53, 0xca, 0x82, 0x27, 0x3b,
                       0x7b, 0xfa, 0xd8, 0x04, 0x5d, 0x85, 0xa4, 0x70};

  cmp_ok(eth_keccak256(inp0, outp0), "==", KECCAK_SUCCESS);
  cmp_mem(outp0, cmp0, sizeof(char) * 32);

  // ---
  unsigned char outp1[32];
  const char inp1[] = {0x74, 0x65, 0x73, 0x74};
  const char cmp1[] = {0x9c, 0x22, 0xff, 0x5f, 0x21, 0xf0, 0xb8, 0x1b,
                       0x11, 0x3e, 0x63, 0xf7, 0xdb, 0x6d, 0xa9, 0x4f,
                       0xed, 0xef, 0x11, 0xb2, 0x11, 0x9b, 0x40, 0x88,
                       0xb8, 0x96, 0x64, 0xfb, 0x9a, 0x3c, 0xb6, 0x58};
  cmp_ok(eth_keccak256(inp1, outp1), "==",  KECCAK_SUCCESS);
  cmp_mem(outp1, cmp1, sizeof(char) * 32);
}