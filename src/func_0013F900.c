s32 func_0011B908(s32, s32);
void func_0011B968(s32);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_001406F8(s32, s32, s32, s32);
s32 func_0013FA10();
extern s32 D_001C6830[];
extern s32 D_001C683C[];
extern s32 D_010D1244[];
extern s32 D_010D1248[];
extern s32 D_010D1250[];

typedef struct { u8 pad[0x18]; void *fn; } Proc13F900;

s32 func_0013F900(Proc13F900 *p)
{
    s32 size;
    if (func_001404D0() != 0)
        return 0;
    D_001C683C[0] = func_001404F0();
    if (D_001C683C[0] <= 0) {
        D_010D1248[0] = D_001C683C[0];
        return 1;
    }
    if (D_001C6830[0] != 0) {
        func_0011B968(D_001C6830[0]);
        D_001C6830[0] = 0;
    }
    size = D_001C683C[0] * 0x20C;
    D_010D1244[0] = size;
    D_001C6830[0] = func_0011B908(0x40, (size & 0xF) ? (size & ~0xF) + 0x10 : (size & ~0xF));
    if (D_001C6830[0] == 0) {
        D_010D1248[0] = -2;
        D_001C683C[0] = 0;
        return 1;
    }
    func_001406F8(D_001C6830[0], D_001C683C[0], 2, D_010D1250[0]);
    p->fn = func_0013FA10;
    return 0;
}
