#ifndef ETHC_ADDRESS_H
#define ETHC_ADDRESS_H
#include <stddef.h>

int eth_is_address(const char *addr, size_t len);
int eth_is_checksum_address(const char *addr, size_t len);
int eth_to_checksum_address(char *addr, size_t len);

#endif