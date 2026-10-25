extern char D_004644A0[];
extern u8 D_007AD000[];
extern u8 D_007AD008[];
extern u8 D_007CAC40[];
void func_002D70D0(char *, s32, s32);

typedef struct LNode { u32 a; u32 b; u32 c; u32 d; u32 e; } LNode;

void func_00194158(s32 file, s32 line) {
    LNode *n = (LNode *)D_007AD000;
    s32 i = 0;
    s32 cnt = 0x17CF;
    do {
        u32 v = n->a;
        u8 *base;
        u32 lo;
        if (v != 0) {
            if (v < (u32)D_007AD000 || (u32)D_007CAC40 < v) {
                func_002D70D0(D_004644A0, file, line);
                *(s32 *)0 = 0;
            }
        }
        v = n->b;
        if (v != 0 && (u32)(v + 0xFFF00000) > 0x07F00000U && (u32)(v + 0x90000000) >= 0x4001U) {
            func_002D70D0(D_004644A0, file, line);
            *(s32 *)0 = 0;
        }
        base = D_007AD008;
        lo = (u32)D_007AD000;
        v = *(u32 *)(base + i);
        if (v != 0) {
            if (v < lo || (u32)D_007CAC40 < v) {
                func_002D70D0(D_004644A0, file, line);
                *(s32 *)0 = 0;
            }
        }
        v = n->d;
        if (v != 0 && (u32)(v + 0xFFF00000) > 0x07F00000U && (u32)(v + 0x90000000) >= 0x4001U) {
            func_002D70D0(D_004644A0, file, line);
            *(s32 *)0 = 0;
        }
        cnt--;
        i += 0x14;
        n++;
    } while (cnt >= 0);
}
