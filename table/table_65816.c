/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2014 by Michael Kohn, Joe Davisson
 *
 * 65816 by Joe Davisson
 *
 */

#include "table_65816.h"

struct _table_65816 table_65816[] =
{
  { 0x00, "BRK", STACK, 0, 0 },
  { 0x01, "ORA", DIRECT_INDIRECT_X, 0, 0 },
  { 0x02, "COP", STACK, 0, 0 },
  { 0x03, "ORA", STACK_RELATIVE, 0, 0 },
  { 0x04, "TSB", DIRECT, 0, 0 },
  { 0x05, "ORA", DIRECT, 0, 0 },
  { 0x06, "ASL", DIRECT, 0, 0 },
  { 0x07, "ORA", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0x08, "PHP", STACK, 0, 0 },
  { 0x09, "ORA", IMMEDIATE, 0, 0 },
  { 0x0A, "ASL", ACCUMULATOR, 0, 0 },
  { 0x0B, "PHD", STACK, 0, 0 },
  { 0x0C, "TSB", ABSOLUTE, 0, 0 },
  { 0x0D, "ORA", ABSOLUTE, 0, 0 },
  { 0x0E, "ASL", ABSOLUTE, 0, 0 },
  { 0x0F, "ORA", ABSOLUTE_LONG, 0, 0 },

  { 0x10, "BLP", RELATIVE, 0, 0 },
  { 0x11, "ORA", DIRECT_INDIRECT_Y, 0, 0 },
  { 0x12, "ORA", DIRECT_INDIRECT, 0, 0 },
  { 0x13, "ORA", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0x14, "TRB", DIRECT, 0, 0 },
  { 0x15, "ORA", DIRECT_X, 0, 0 },
  { 0x16, "ASL", DIRECT_X, 0, 0 },
  { 0x17, "ORA", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0x18, "CLC", IMPLIED, 0, 0 },
  { 0x19, "ORA", ABSOLUTE_Y, 0, 0 },
  { 0x1A, "INC", ACCUMULATOR, 0, 0 },
  { 0x1B, "TCS", IMPLIED, 0, 0 },
  { 0x1C, "TRB", ABSOLUTE, 0, 0 },
  { 0x1D, "ORA", ABSOLUTE_X, 0, 0 },
  { 0x1E, "ASL", ABSOLUTE_X, 0, 0 },
  { 0x1F, "ORA", ABSOLUTE_LONG_X, 0, 0 },

  { 0x20, "JSR", ABSOLUTE, 0, 0 },
  { 0x21, "AND", DIRECT_INDIRECT_X, 0, 0 },
  { 0x22, "JSR", ABSOLUTE_LONG, 0, 0 },
  { 0x23, "AND", STACK_RELATIVE, 0, 0 },
  { 0x24, "BIT", DIRECT, 0, 0 },
  { 0x25, "AND", DIRECT, 0, 0 },
  { 0x26, "ROL", DIRECT, 0, 0 },
  { 0x27, "AND", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0x28, "PLP", STACK, 0, 0 },
  { 0x29, "AND", IMMEDIATE, 0, 0 },
  { 0x2A, "ROL", ACCUMULATOR, 0, 0 },
  { 0x2B, "PLD", STACK, 0, 0 },
  { 0x2C, "BIT", ABSOLUTE, 0, 0 },
  { 0x2D, "AND", ABSOLUTE, 0, 0 },
  { 0x2E, "ROL", ABSOLUTE, 0, 0 },
  { 0x2F, "AND", ABSOLUTE_LONG, 0, 0 },

  { 0x30, "BMI", RELATIVE, 0, 0 },
  { 0x31, "AND", DIRECT_INDIRECT_Y, 0, 0 },
  { 0x32, "AND", DIRECT_INDIRECT, 0, 0 },
  { 0x33, "AND", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0x34, "BIT", DIRECT_X, 0, 0 },
  { 0x35, "AND", DIRECT_X, 0, 0 },
  { 0x36, "ROL", DIRECT_X, 0, 0 },
  { 0x37, "AND", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0x38, "SEC", IMPLIED, 0, 0 },
  { 0x39, "AND", ABSOLUTE_Y, 0, 0 },
  { 0x3A, "DEC", ACCUMULATOR, 0, 0 },
  { 0x3B, "TSC", IMPLIED, 0, 0 },
  { 0x3C, "BIT", ABSOLUTE_X, 0, 0 },
  { 0x3D, "AND", ABSOLUTE_X, 0, 0 },
  { 0x3E, "ROL", ABSOLUTE_X, 0, 0 },
  { 0x3F, "AND", ABSOLUTE_LONG_X, 0, 0 },

  { 0x40, "RTI", STACK, 0, 0 },
  { 0x41, "EOR", DIRECT_INDIRECT_X, 0, 0 },
  { 0x42, "WDM", IMPLIED, 0, 0 },
  { 0x43, "EOR", STACK_RELATIVE, 0, 0 },
  { 0x44, "MVP", BLOCK_MOVE, 0, 0 },
  { 0x45, "EOR", DIRECT, 0, 0 },
  { 0x46, "LSR", DIRECT, 0, 0 },
  { 0x47, "EOR", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0x48, "PHA", STACK, 0, 0 },
  { 0x49, "EOR", IMMEDIATE, 0, 0 },
  { 0x4A, "LSR", ACCUMULATOR, 0, 0 },
  { 0x4B, "PHK", STACK, 0, 0 },
  { 0x4C, "JMP", ABSOLUTE, 0, 0 },
  { 0x4D, "EOR", ABSOLUTE, 0, 0 },
  { 0x4E, "LSR", ABSOLUTE, 0, 0 },
  { 0x4F, "EOR", ABSOLUTE_LONG, 0, 0 },

  { 0x50, "BVC", RELATIVE, 0, 0 },
  { 0x51, "EOR", DIRECT_INDIRECT_Y, 0, 0 },
  { 0x52, "EOR", DIRECT_INDIRECT, 0, 0 },
  { 0x53, "EOR", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0x54, "MVN", BLOCK_MOVE, 0, 0 },
  { 0x55, "EOR", DIRECT_X, 0, 0 },
  { 0x56, "LSR", DIRECT_X, 0, 0 },
  { 0x57, "EOR", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0x58, "CLI", IMPLIED, 0, 0 },
  { 0x59, "EOR", ABSOLUTE_Y, 0, 0 },
  { 0x5A, "PHY", STACK, 0, 0 },
  { 0x5B, "TCD", IMPLIED, 0, 0 },
  { 0x5C, "JMP", ABSOLUTE_LONG, 0, 0 },
  { 0x5D, "EOR", ABSOLUTE_X, 0, 0 },
  { 0x5E, "LSR", ABSOLUTE_X, 0, 0 },
  { 0x5F, "EOR", ABSOLUTE_LONG_X, 0, 0 },

  { 0x60, "RTS", STACK, 0, 0 },
  { 0x61, "ADC", DIRECT_INDIRECT_X, 0, 0 },
  { 0x62, "PER", STACK, 0, 0 },
  { 0x63, "ADC", STACK_RELATIVE, 0, 0 },
  { 0x64, "STZ", DIRECT, 0, 0 },
  { 0x65, "ADC", DIRECT, 0, 0 },
  { 0x66, "ROR", DIRECT, 0, 0 },
  { 0x67, "ADC", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0x68, "PLA", STACK, 0, 0 },
  { 0x69, "ADC", IMMEDIATE, 0, 0 },
  { 0x6A, "ROR", ACCUMULATOR, 0, 0 },
  { 0x6B, "RTL", STACK, 0, 0 },
  { 0x6C, "JMP", ABSOLUTE_INDIRECT, 0, 0 },
  { 0x6D, "ADC", ABSOLUTE, 0, 0 },
  { 0x6E, "ROR", ABSOLUTE, 0, 0 },
  { 0x6F, "ADC", ABSOLUTE_LONG, 0, 0 },

  { 0x70, "BVS", RELATIVE, 0, 0 },
  { 0x71, "ADC", DIRECT_INDIRECT_Y, 0, 0 },
  { 0x72, "ADC", DIRECT_INDIRECT, 0, 0 },
  { 0x73, "ADC", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0x74, "STZ", DIRECT_X, 0, 0 },
  { 0x75, "ADC", DIRECT_X, 0, 0 },
  { 0x76, "ROR", DIRECT_X, 0, 0 },
  { 0x77, "ADC", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0x78, "SEI", IMPLIED, 0, 0 },
  { 0x79, "ADC", ABSOLUTE_Y, 0, 0 },
  { 0x7A, "PLY", STACK, 0, 0 },
  { 0x7B, "TDC", IMPLIED, 0, 0 },
  { 0x7C, "JMP", ABSOLUTE_INDIRECT_X, 0, 0 },
  { 0x7D, "ADC", ABSOLUTE_X, 0, 0 },
  { 0x7E, "ROR", ABSOLUTE_X, 0, 0 },
  { 0x7F, "ADC", ABSOLUTE_LONG_X, 0, 0 },

  { 0x80, "BRA", RELATIVE, 0, 0 },
  { 0x81, "STA", DIRECT_INDIRECT_X, 0, 0 },
  { 0x82, "BRL", RELATIVE_LONG, 0, 0 },
  { 0x83, "STA", STACK_RELATIVE, 0, 0 },
  { 0x84, "STY", DIRECT, 0, 0 },
  { 0x85, "STA", DIRECT, 0, 0 },
  { 0x86, "STX", DIRECT, 0, 0 },
  { 0x87, "STA", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0x88, "DEY", IMPLIED, 0, 0 },
  { 0x89, "BIT", IMMEDIATE, 0, 0 },
  { 0x8A, "TXA", IMPLIED, 0, 0 },
  { 0x8B, "PHB", STACK, 0, 0 },
  { 0x8C, "STY", ABSOLUTE, 0, 0 },
  { 0x8D, "STA", ABSOLUTE, 0, 0 },
  { 0x8E, "STX", ABSOLUTE, 0, 0 },
  { 0x8F, "STA", ABSOLUTE_LONG, 0, 0 },

  { 0x90, "BCC", RELATIVE, 0, 0 },
  { 0x91, "STA", DIRECT_INDIRECT_Y, 0, 0 },
  { 0x92, "STA", DIRECT_INDIRECT, 0, 0 },
  { 0x93, "STA", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0x94, "STY", DIRECT_X, 0, 0 },
  { 0x95, "STA", DIRECT_X, 0, 0 },
  { 0x96, "STX", DIRECT_Y, 0, 0 },
  { 0x97, "STA", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0x98, "TYA", IMPLIED, 0, 0 },
  { 0x99, "STA", ABSOLUTE_Y, 0, 0 },
  { 0x9A, "TXS", IMPLIED, 0, 0 },
  { 0x9B, "TXY", IMPLIED, 0, 0 },
  { 0x9C, "STZ", ABSOLUTE, 0, 0 },
  { 0x9D, "STA", ABSOLUTE_X, 0, 0 },
  { 0x9E, "STZ", ABSOLUTE_X, 0, 0 },
  { 0x9F, "STA", ABSOLUTE_LONG_X, 0, 0 },

  { 0xA0, "LDY", IMMEDIATE, 0, 0 },
  { 0xA1, "LDA", DIRECT_INDIRECT_X, 0, 0 },
  { 0xA2, "LDX", IMMEDIATE, 0, 0 },
  { 0xA3, "LDA", STACK_RELATIVE, 0, 0 },
  { 0xA4, "LDY", DIRECT, 0, 0 },
  { 0xA5, "LDA", DIRECT, 0, 0 },
  { 0xA6, "LDX", DIRECT, 0, 0 },
  { 0xA7, "LDA", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0xA8, "TAY", IMPLIED, 0, 0 },
  { 0xA9, "LDA", IMMEDIATE, 0, 0 },
  { 0xAA, "TAX", IMPLIED, 0, 0 },
  { 0xAB, "PLB", STACK, 0, 0 },
  { 0xAC, "LDY", ABSOLUTE, 0, 0 },
  { 0xAD, "LDA", ABSOLUTE, 0, 0 },
  { 0xAE, "LDX", ABSOLUTE, 0, 0 },
  { 0xAF, "LDA", ABSOLUTE_LONG, 0, 0 },

  { 0xB0, "BCS", RELATIVE, 0, 0 },
  { 0xB1, "LDA", DIRECT_INDIRECT_Y, 0, 0 },
  { 0xB2, "LDA", DIRECT_INDIRECT, 0, 0 },
  { 0xB3, "LDA", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0xB4, "LDY", DIRECT_X, 0, 0 },
  { 0xB5, "LDA", DIRECT_X, 0, 0 },
  { 0xB6, "LDX", DIRECT_Y, 0, 0 },
  { 0xB7, "LDA", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0xB8, "CLV", IMPLIED, 0, 0 },
  { 0xB9, "LDA", ABSOLUTE_Y, 0, 0 },
  { 0xBA, "TSX", IMPLIED, 0, 0 },
  { 0xBB, "TYX", IMPLIED, 0, 0 },
  { 0xBC, "LDY", ABSOLUTE_X, 0, 0 },
  { 0xBD, "LDA", ABSOLUTE_X, 0, 0 },
  { 0xBE, "LDX", ABSOLUTE_Y, 0, 0 },
  { 0xBF, "LDA", ABSOLUTE_LONG_X, 0, 0 },

  { 0xC0, "CPY", IMMEDIATE, 0, 0 },
  { 0xC1, "CMP", DIRECT_INDIRECT_X, 0, 0 },
  { 0xC2, "REP", IMMEDIATE, 0, 0 },
  { 0xC3, "CMP", STACK_RELATIVE, 0, 0 },
  { 0xC4, "CPY", DIRECT, 0, 0 },
  { 0xC5, "CMP", DIRECT, 0, 0 },
  { 0xC6, "DEC", DIRECT, 0, 0 },
  { 0xC7, "CMP", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0xC8, "INY", IMPLIED, 0, 0 },
  { 0xC9, "CMP", IMMEDIATE, 0, 0 },
  { 0xCA, "DEX", IMPLIED, 0, 0 },
  { 0xCB, "WAI", IMPLIED, 0, 0 },
  { 0xCC, "CPY", ABSOLUTE, 0, 0 },
  { 0xCD, "CMP", ABSOLUTE, 0, 0 },
  { 0xCE, "DEC", ABSOLUTE, 0, 0 },
  { 0xCF, "CMP", ABSOLUTE_LONG, 0, 0 },

  { 0xD0, "BNE", RELATIVE, 0, 0 },
  { 0xD1, "CMP", DIRECT_INDIRECT_Y, 0, 0 },
  { 0xD2, "CMP", DIRECT_INDIRECT, 0, 0 },
  { 0xD3, "CMP", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0xD4, "PEI", STACK, 0, 0 },
  { 0xD5, "CMP", DIRECT_X, 0, 0 },
  { 0xD6, "DEC", DIRECT_X, 0, 0 },
  { 0xD7, "CMP", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0xD8, "CLD", IMPLIED, 0, 0 },
  { 0xD9, "CMP", ABSOLUTE_Y, 0, 0 },
  { 0xDA, "PHX", STACK, 0, 0 },
  { 0xDB, "STP", IMPLIED, 0, 0 },
  { 0xDC, "JMP", ABSOLUTE_INDIRECT_X, 0, 0 },
  { 0xDD, "CMP", ABSOLUTE_X, 0, 0 },
  { 0xDE, "DEC", ABSOLUTE_X, 0, 0 },
  { 0xDF, "CMP", ABSOLUTE_LONG_X, 0, 0 },

  { 0xE0, "CPX", IMMEDIATE, 0, 0 },
  { 0xE1, "SBC", DIRECT_INDIRECT_X, 0, 0 },
  { 0xE2, "SEP", IMMEDIATE, 0, 0 },
  { 0xE3, "SBC", STACK_RELATIVE, 0, 0 },
  { 0xE4, "INX", DIRECT, 0, 0 },
  { 0xE5, "SBC", DIRECT, 0, 0 },
  { 0xE6, "INC", DIRECT, 0, 0 },
  { 0xE7, "SBC", DIRECT_INDIRECT_LONG, 0, 0 },
  { 0xE8, "INX", IMPLIED, 0, 0 },
  { 0xE9, "SBC", IMMEDIATE, 0, 0 },
  { 0xEA, "NOP", IMPLIED, 0, 0 },
  { 0xEB, "XBA", IMPLIED, 0, 0 },
  { 0xEC, "CPX", ABSOLUTE, 0, 0 },
  { 0xED, "SBC", ABSOLUTE, 0, 0 },
  { 0xEE, "INC", ABSOLUTE, 0, 0 },
  { 0xEF, "SBC", ABSOLUTE_LONG, 0, 0 },

  { 0xF0, "BEQ", RELATIVE, 0, 0 },
  { 0xF1, "SBC", DIRECT_INDIRECT_Y, 0, 0 },
  { 0xF2, "SBC", DIRECT_INDIRECT, 0, 0 },
  { 0xF3, "SBC", STACK_RELATIVE_INDIRECT_Y, 0, 0 },
  { 0xF4, "PEA", STACK, 0, 0 },
  { 0xF5, "SBC", DIRECT_X, 0, 0 },
  { 0xF6, "INC", DIRECT_X, 0, 0 },
  { 0xF7, "SBC", DIRECT_INDIRECT_LONG_Y, 0, 0 },
  { 0xF8, "SED", IMPLIED, 0, 0 },
  { 0xF9, "SBC", ABSOLUTE_Y, 0, 0 },
  { 0xFA, "PLX", STACK, 0, 0 },
  { 0xFB, "XCE", IMPLIED, 0, 0 },
  { 0xFC, "JSR", ABSOLUTE_INDIRECT_X, 0, 0 },
  { 0xFD, "SBC", ABSOLUTE_X, 0, 0 },
  { 0xFE, "INC", ABSOLUTE_X, 0, 0 },
  { 0xFF, "SBC", ABSOLUTE_LONG_X, 0, 0 }
};

