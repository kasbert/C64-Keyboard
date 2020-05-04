
typedef struct {
  uint8_t noshift_1[C64_KEYMAP_SIZE];
  uint8_t shift_1[C64_KEYMAP_SIZE];
  uint8_t noshift_2[C64_KEYMAP_SIZE];
  uint8_t shift_2[C64_KEYMAP_SIZE];
} C64Keymap_t;

/* Maps are positional in relation to keyboard ASCII codes.
  Place C64 key byte (Chart is found in KEYBIN spreadsheet)
  into the equivalent keyboard ASCII code code position.
  For C64 keyboards normally ASCII code set 2.

  Each map has a normal (without shift) and shifted (with shift) array.

  In situations where there is a shift difference, add 64 to the C64 key byte.
  This is when a key is shifted on keyboard, but not shifted on the C64 or vise-versa.

  Unused ASCII codes need to have the IGNORE_KEYCODE value in place.(Default 170)

*/

/*

  0 = Y4
  1 = Y5
  2 = Y6
  3 = Y7
  4 = Y0
  5 = Y1
  6 = Y2
  7 = Y3

  A = X5
  B = X4
  C = X3
  D = X2
  E = X1
  F = X0
  G = X7
  H = X6

*/

#define NOPE 0252 // == 170, 0xaa

#define C_LSHIFT 0047
#define C_RSHIFT 0070

#define C_RESET 0xab
#define C_RESTORE 0xac
#define C_CAPSLOCK 0xad
#define C_KEYMAP1 0xae
#define C_KEYMAP2 0xaf

#define C_SHIFT_MASK 0100

const PROGMEM C64Keymap_t C64Keymap_main = {
  // map 1 without shift
  { NOPE, NOPE, NOPE, 0xAD, NOPE, NOPE, 0047, 0070, // ASCII Codes 0x00 - 0x07
    0056, NOPE, 0057, NOPE, 0051, NOPE, NOPE, NOPE, // ASCII Codes 0x08 - 0x0F
    NOPE, 0073, NOPE, NOPE, NOPE, 0166, 0066, 0167, // ASCII Codes 0x10 - 0x17
    0067, NOPE, 0064, 0164, 0064, 0xAC, 0065, 0050, // ASCII Codes 0x18 - 0x1F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x20 - 0x27
    NOPE, NOPE, NOPE, NOPE, 0004, 0003, 0065, NOPE, // ASCII Codes 0x28 - 0x2F
    0013, 0054, 0053, 0044, 0043, 0034, 0033, 0024, // ASCII Codes 0x30 - 0x37
    0023, 0014, 0001, 0007, 0003, 0000, 0077, NOPE, // ASCII Codes 0x38 - 0x3F
    0055, 0046, 0020, 0030, 0036, 0042, 0031, 0026, // ASCII Codes 0x40 - 0x47
    0021, 0015, 0016, 0011, 0006, 0010, 0017, 0012, // ASCII Codes 0x48 - 0x4F
    0005, 0052, 0035, 0041, 0032, 0022, 0027, 0045, // ASCII Codes 0x50 - 0x57
    0037, 0025, 0040, 0076, 0074, 0001, 0072, 0071, // ASCII Codes 0x58 - 0x5F
    NOPE, 0060, 0060, 0061, 0061, 0062, 0062, 0063, // ASCII Codes 0x60 - 0x67
    0073, 0xAE, 0xAF, NOPE, 0xAB, NOPE, NOPE, NOPE, // ASCII Codes 0x68 - 0x6F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x70 - 0x77
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, 0064, // ASCII Codes 0x78 - 0x7F
    NOPE, NOPE, NOPE, NOPE
  },// ASCII Codes 0x80 - 0x83
  // map 1 with shift
  { NOPE, NOPE, NOPE, 0xAD, NOPE, NOPE, 0047, 0070, // ASCII Codes 0x00 - 0x07
    0056, NOPE, 0057, NOPE, 0051, NOPE, NOPE, NOPE, // ASCII Codes 0x08 - 0x0F
    NOPE, 0073, NOPE, NOPE, NOPE, 0066, 0166, 0067, // ASCII Codes 0x10 - 0x17
    0167, NOPE, 0074, 0064, 0164, 0xAC, 0065, 0050, // ASCII Codes 0x18 - 0x1F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x20 - 0x27
    NOPE, NOPE, NOPE, NOPE, 0004, 0003, 0065, NOPE, // ASCII Codes 0x28 - 0x2F
    0013, 0054, 0053, 0044, 0043, 0034, 0033, 0024, // ASCII Codes 0x30 - 0x37
    0023, 0014, 0001, 0076, 0003, 0001, 0077, NOPE, // ASCII Codes 0x38 - 0x3F
    0055, 0046, 0020, 0030, 0036, 0042, 0031, 0026, // ASCII Codes 0x40 - 0x47
    0021, 0015, 0016, 0011, 0006, 0010, 0017, 0012, // ASCII Codes 0x48 - 0x4F
    0005, 0052, 0035, 0041, 0032, 0022, 0027, 0045, // ASCII Codes 0x50 - 0x57
    0037, 0025, 0040, 0076, 0074, NOPE, NOPE, 0071, // ASCII Codes 0x58 - 0x5F
    NOPE, 0060, NOPE, 0061, NOPE, 0062, NOPE, 0063, // ASCII Codes 0x60 - 0x67
    NOPE, 0xAE, 0xAF, NOPE, 0xAB, NOPE, NOPE, NOPE, // ASCII Codes 0x68 - 0x6F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x70 - 0x77
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, 0064, // ASCII Codes 0x78 - 0x7F
    NOPE, NOPE, NOPE, NOPE
  },// ASCII Codes 0x80 - 0x83

  //
  // // map 2 without shift
  { NOPE, NOPE, NOPE, 0xAD, NOPE, NOPE, 0047, 0070, // ASCII Codes 0x00 - 0x07
    0056, NOPE, 0057, NOPE, 0051, NOPE, NOPE, NOPE, // ASCII Codes 0x08 - 0x0F
    NOPE, 0073, NOPE, NOPE, NOPE, NOPE, 0066, 0072, // ASCII Codes 0x10 - 0x17
    0067, NOPE, 0064, NOPE, 0055, 0xAC, 0065, 0050, // ASCII Codes 0x18 - 0x1F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x20 - 0x27
    NOPE, NOPE, NOPE, NOPE, 0004, 0003, 0075, NOPE, // ASCII Codes 0x28 - 0x2F
    0013, 0054, 0053, 0044, 0043, 0034, 0033, 0024, // ASCII Codes 0x30 - 0x37
    0023, 0014, 0001, 0006, 0003, 0061, 0077, NOPE, // ASCII Codes 0x38 - 0x3F
    0055, 0046, 0020, 0030, 0036, 0042, 0031, 0026, // ASCII Codes 0x40 - 0x47
    0021, 0015, 0016, 0011, 0007, 0010, 0017, 0012, // ASCII Codes 0x48 - 0x4F
    0005, 0052, 0035, 0041, 0032, 0022, 0027, 0045, // ASCII Codes 0x50 - 0x57
    0037, 0025, 0040, 0076, 0074, 0001, 0076, 0071, // ASCII Codes 0x58 - 0x5F
    NOPE, 0060, 0060, 0061, 0061, 0062, 0062, 0063, // ASCII Codes 0x60 - 0x67
    0063, 0xAE, 0xAF, NOPE, 0xAB, NOPE, NOPE, NOPE, // ASCII Codes 0x68 - 0x6F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x70 - 0x77
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, 0064, // ASCII Codes 0x78 - 0x7F
    NOPE, NOPE, NOPE, NOPE
  },// ASCII Codes 0x80 - 0x83
  // map 2 with shift
  { NOPE, NOPE, NOPE, 0xAD, NOPE, NOPE, 0047, 0070, // ASCII Codes 0x00 - 0x07
    0056, NOPE, 0057, NOPE, 0051, NOPE, NOPE, NOPE, // ASCII Codes 0x08 - 0x0F
    NOPE, 0073, NOPE, NOPE, NOPE, NOPE, 0066, 0072, // ASCII Codes 0x10 - 0x17
    0067, NOPE, 0064, NOPE, 0055, 0xAC, 0065, 0050, // ASCII Codes 0x18 - 0x1F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x20 - 0x27
    NOPE, NOPE, NOPE, NOPE, 0004, 0003, 0075, NOPE, // ASCII Codes 0x28 - 0x2F
    0013, 0054, 0053, 0044, 0043, 0034, 0033, 0024, // ASCII Codes 0x30 - 0x37
    0023, 0014, 0001, 0006, 0003, 0061, 0077, NOPE, // ASCII Codes 0x38 - 0x3F
    0055, 0046, 0020, 0030, 0036, 0042, 0031, 0026, // ASCII Codes 0x40 - 0x47
    0021, 0015, 0016, 0011, 0007, 0010, 0017, 0012, // ASCII Codes 0x48 - 0x4F
    0005, 0052, 0035, 0041, 0032, 0022, 0027, 0045, // ASCII Codes 0x50 - 0x57
    0037, 0025, 0040, 0076, 0074, NOPE, NOPE, 0071, // ASCII Codes 0x58 - 0x5F
    NOPE, 0060, NOPE, 0061, NOPE, 0062, NOPE, 0063, // ASCII Codes 0x60 - 0x67
    NOPE, 0xAE, 0xAF, NOPE, 0xAB, NOPE, NOPE, NOPE, // ASCII Codes 0x68 - 0x6F
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, // ASCII Codes 0x70 - 0x77
    NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, NOPE, 0064, // ASCII Codes 0x78 - 0x7F
    NOPE, NOPE, NOPE, NOPE
  } // ASCII Codes 0x80 - 0x83


};
