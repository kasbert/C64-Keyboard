
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

#define nope 0252 // == 170, 0xaa

#define C_LSHIFT 0013
#define C_RSHIFT 0064

#define C_RESET 0xab
#define C_RESTORE 0xac
#define C_CAPSLOCK 0xAD
#define C_KEYMAP1 0xae
#define C_KEYMAP2 0xaf

#define C_SHIFT_MASK 0100 // press with shift, e.g. arrows, insert

const PROGMEM C64Keymap_t C64Keymap_main = {
  // map 1 without shift
  { nope, nope, nope, 0xAD, nope, nope, 0013, 0064,  // ASCII Codes 0x00 - 0x07
    0002, nope, 0003, nope, 0005, nope, nope, nope,  // ASCII Codes 0x08 - 0x0F
    nope, 0067, 0167, 0066, 0060, 0172, 0072, 0173,  // ASCII Codes 0x10 - 0x17
    0073, 0170, 0070, 0170, 0070, 0xAC, 0071, 0004,  // ASCII Codes 0x18 - 0x1F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x20 - 0x27
    nope, nope, nope, nope, 0050, 0057, 0061, nope,  // ASCII Codes 0x28 - 0x2F
    0047, 0000, 0007, 0010, 0017, 0020, 0027, 0030,  // ASCII Codes 0x30 - 0x37
    0037, 0040, 0055, 0053, 0057, 0054, 0063, nope,  // ASCII Codes 0x38 - 0x3F
    0001, 0012, 0034, 0024, 0022, 0016, 0025, 0032,  // ASCII Codes 0x40 - 0x47
    0035, 0041, 0042, 0045, 0052, 0044, 0043, 0046,  // ASCII Codes 0x48 - 0x4F
    0051, 0006, 0021, 0015, 0026, 0036, 0033, 0011,  // ASCII Codes 0x50 - 0x57
    0023, 0031, 0014, 0062, 0060, 0055, 0056, 0065,  // ASCII Codes 0x58 - 0x5F
    nope, 0074, 0074, 0075, 0075, 0076, 0076, 0077,  // ASCII Codes 0x60 - 0x67
    0077, 0xAE, 0xAF, nope, 0xAB, 0xAC, nope, nope,  // ASCII Codes 0x68 - 0x6F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x70 - 0x77
    nope, nope, nope, nope, nope, nope, nope, 0070,  // ASCII Codes 0x78 - 0x7F
    nope, nope, nope, nope                           // ASCII Codes 0x80 - 0x83
  },
  // map 1 with shift
  { nope, nope, nope, 0xAD, nope, nope, 0013, 0064,  // ASCII Codes 0x00 - 0x07
    0002, nope, 0003, nope, 0005, nope, nope, nope,  // ASCII Codes 0x08 - 0x0F
    nope, 0067, 0167, 0066, 0060, 0001, 0072, 0066,  // ASCII Codes 0x10 - 0x17
    0173, 0170, 0070, 0001, 0101, 0xAC, 0071, 0004,  // ASCII Codes 0x18 - 0x1F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x20 - 0x27
    nope, nope, nope, nope, 0050, 0057, 0061, nope,  // ASCII Codes 0x28 - 0x2F
    0047, 0000, 0007, 0010, 0017, 0020, 0027, 0030,  // ASCII Codes 0x30 - 0x37
    0037, 0040, 0055, 0053, 0057, 0054, 0063, nope,  // ASCII Codes 0x38 - 0x3F
    0001, 0012, 0034, 0024, 0022, 0016, 0025, 0032,  // ASCII Codes 0x40 - 0x47
    0035, 0041, 0042, 0045, 0052, 0044, 0043, 0046,  // ASCII Codes 0x48 - 0x4F
    0051, 0006, 0021, 0015, 0026, 0036, 0033, 0011,  // ASCII Codes 0x50 - 0x57
    0023, 0031, 0014, 0062, 0060, nope, 0056, 0065,  // ASCII Codes 0x58 - 0x5F
    nope, 0074, nope, 0075, nope, 0076, nope, 0077,  // ASCII Codes 0x60 - 0x67
    nope, 0xAE, 0xAF, nope, 0xAB, 0xAC, nope, nope,  // ASCII Codes 0x68 - 0x6F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x70 - 0x77
    nope, nope, nope, nope, nope, nope, nope, 0070,  // ASCII Codes 0x78 - 0x7F
    nope, nope, nope, nope                           // ASCII Codes 0x80 - 0x83
  },
  // map 2 without shift
  { nope, nope, nope, 0xAD, nope, nope, 0013, 0064,  // ASCII Codes 0x00 - 0x07
    0002, nope, 0003, nope, 0005, nope, nope, nope,  // ASCII Codes 0x08 - 0x0F
    nope, 0067, nope, nope, nope, nope, 0072, 0066,  // ASCII Codes 0x10 - 0x17
    0073, nope, 0070, nope, 0001, 0xAC, 0071, 0004,  // ASCII Codes 0x18 - 0x1F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x20 - 0x27
    nope, nope, nope, nope, 0050, 0057, 0061, nope,  // ASCII Codes 0x28 - 0x2F
    0047, 0000, 0007, 0010, 0017, 0020, 0027, 0030,  // ASCII Codes 0x30 - 0x37
    0037, 0040, 0055, 0053, 0057, 0054, 0063, nope,  // ASCII Codes 0x38 - 0x3F
    0056, 0012, 0034, 0024, 0022, 0016, 0025, 0032,  // ASCII Codes 0x40 - 0x47
    0035, 0041, 0042, 0045, 0052, 0044, 0043, 0046,  // ASCII Codes 0x48 - 0x4F
    0051, 0006, 0021, 0015, 0026, 0036, 0033, 0011,  // ASCII Codes 0x50 - 0x57
    0023, 0031, 0014, 0062, 0060, 0055, 0062, 0065,  // ASCII Codes 0x58 - 0x5F
    nope, 0074, 0074, 0075, 0075, 0076, 0076, 0077,  // ASCII Codes 0x60 - 0x67
    0077, 0xAE, 0xAF, nope, 0xAB, 0xAC, nope, nope,  // ASCII Codes 0x68 - 0x6F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x70 - 0x77
    nope, nope, nope, nope, nope, nope, nope, 0070,  // ASCII Codes 0x78 - 0x7F
    nope, nope, nope, nope                           // ASCII Codes 0x80 - 0x83
  },
  // map 2 with shift
  { nope, nope, nope, 0xAD, nope, nope, 0013, 0064,  // ASCII Codes 0x00 - 0x07
    0002, nope, 0003, nope, 0005, nope, nope, nope,  // ASCII Codes 0x08 - 0x0F
    nope, 0067, nope, nope, nope, nope, 0072, 0066,  // ASCII Codes 0x10 - 0x17
    0073, nope, 0070, nope, 0001, 0xAC, 0071, 0004,  // ASCII Codes 0x18 - 0x1F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x20 - 0x27
    nope, nope, nope, nope, 0050, 0057, 0061, nope,  // ASCII Codes 0x28 - 0x2F
    0047, 0000, 0007, 0010, 0017, 0020, 0027, 0030,  // ASCII Codes 0x30 - 0x37
    0037, 0040, 0055, 0053, 0057, 0054, 0063, nope,  // ASCII Codes 0x38 - 0x3F
    0056, 0012, 0034, 0024, 0022, 0016, 0025, 0032,  // ASCII Codes 0x40 - 0x47
    0035, 0041, 0042, 0045, 0052, 0044, 0043, 0046,  // ASCII Codes 0x48 - 0x4F
    0051, 0006, 0021, 0015, 0026, 0036, 0033, 0011,  // ASCII Codes 0x50 - 0x57
    0023, 0031, 0014, 0062, 0060, nope, nope, 0065,  // ASCII Codes 0x58 - 0x5F
    nope, 0074, nope, 0075, nope, 0076, nope, 0077,  // ASCII Codes 0x60 - 0x67
    nope, 0xAE, 0xAF, nope, 0xAB, 0xAC, nope, nope,  // ASCII Codes 0x68 - 0x6F
    nope, nope, nope, nope, nope, nope, nope, nope,  // ASCII Codes 0x70 - 0x77
    nope, nope, nope, nope, nope, nope, nope, 0070,  // ASCII Codes 0x78 - 0x7F
    nope, nope, nope, nope                           // ASCII Codes 0x80 - 0x83
  },
};
