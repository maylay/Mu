#pragma once

#include <stdint.h>
#include <stdbool.h>

void pdiUsbD12Reset();
uint64_t pdiUsbD12StateSize();
void pdiUsbD12SaveState();
void pdiUsbD12LoadState();

uint8_t pdiUsbD12GetRegister(bool address);
void pdiUsbD12SetRegister(bool address, uint8_t value);
