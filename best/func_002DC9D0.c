typedef struct { char b[0xFC]; } Blk;
typedef struct { s32 id; s32 len; char pad[0xFC]; Blk d; } Pkt;
extern Pkt D_008E1E80;
extern char D_008E2080[];
s32 func_002DC600(void);
s32 func_002DC700(void);
void func_00301FFC(void *, void *, s32);
s32 func_002D8270(void*, s32, s32, void*, s32, void*, s32, s32, s32);

s32 func_002DC9D0(s32 a, s32 len, Blk *src, s32 *out) {
    s32 l, r;
    if (func_002DC600() < 0) return 0xFFFF0000;
    if (func_002DC700() != 0) return 0xFFFEFFFC;
    D_008E1E80.id = a;
    if (src != 0) {
        if (len >= 0xFD) {
            D_008E1E80.d = *src;
            D_008E1E80.len = 0xFC;
        } else {
            func_00301FFC(&D_008E1E80.d, src, len);
            D_008E1E80.len = len;
        }
    } else {
        D_008E1E80.len = 0;
    }
    if (func_002D8270(D_008E2080, 7, 0, &D_008E1E80, 0x200, &D_008E1E80, 8, 0, 0) < 0)
        return 0xFFFEFFFF;
    l = D_008E1E80.len;
    r = D_008E1E80.id;
    *out = l;
    return r;
}
