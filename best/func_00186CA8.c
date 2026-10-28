typedef struct { s32 entries[11]; s32 count; s32 selected; } T;
typedef struct { u8 pad[0xF4]; void (*fn)(void*); } C;
extern T D_010F44A8;
extern C *D_00362CC8[];
extern u8 jtbl_004C006C[];

void func_00186CA8(s32 a) {
    s32 v = 5;
    u32 i;
    switch (a) {
    case 0x8001: v = 6; break;
    case 0x8002: v = 8; break;
    case 0x8003: v = 10; break;
    case 0x8004: v = 7; break;
    case 0x8005: v = 9; break;
    case 0x8006: v = 0; break;
    case 0x8007: v = 2; break;
    case 0x8008: v = 4; break;
    case 0x8009: v = 1; break;
    case 0x800A: v = 3; break;
    case 0x800B: case 0x800C: case 0x800D: case 0x800E: case 0x800F:
        v = 5; break;
    default:
        D_00362CC8[0]->fn(jtbl_004C006C + 0xDE94);
        break;
    }
    for (i = 0; i < D_010F44A8.count; i++) {
        if (v == D_010F44A8.entries[i]) {
            D_010F44A8.selected = i;
            break;
        }
    }
}
