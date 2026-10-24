u32 func_00170894(s32 type, s32 b, s32 c, s32 flags) {
    b &= 0xFF;
    c &= 0xFFFF;
    switch (type) {
    case 1: case 3: case 5: case 7: case 9: case 11: case 13: case 15:
    case 20: case 30: case 40: case 50: case 60: case 70: case 80: case 90: case 100:
        return (type << 24) | (flags & 0x8000) | (c | (b << 16));
    case 2: case 4: case 6: case 8: case 10: case 12: case 14: case 16:
    case 25: case 35: case 45: case 55: case 65: case 75: case 85: case 95: case 108:
        return (type << 24) | c;
    }
    return 0;
}
