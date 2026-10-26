typedef struct { f32 x, y, z; } V3;
typedef struct E E;
extern char D_0044ECE8[];
extern char D_00470D38[], D_004854C8[], D_004854D0[], D_004854D8[], D_004854E0[], D_004854E8[], D_004854F0[], D_004854F8[], D_00485500[];
s32 D_004844C0;
extern void func_0021E548(E *, char *, V3, s16);
extern char *func_00143A80(E *, char *, s32);
extern s32 func_00304168(char *, char *);
extern u32 func_00153FA8(E *);
extern s32 func_00140F60(E *, char *, s32);
extern f32 func_001410A0(E *, char *, s32);
extern f32 func_001D0FF8(void);
extern void func_00304640(char *, char *);
extern void func_00304240(char *, char *);
extern s32 func_00165DC0(char *, char *);
extern s64 func_0016C970(s32, s32);
#define AT(t, o) (*(t *)((char *)e + (o)))

void func_0021EEE8(E *e, char *name, V3 pos, s16 a) {
    char buf[0x20];
    char *s;
    f32 sc;
    u32 r;
    s32 lvl;
    func_0021E548(e, name, pos, a);
    AT(char *, 0x48) = D_0044ECE8;
    AT(s32, 0xC) |= 0x100018;
    AT(s32, 0xE8) = 0;
    AT(s8, 0xF0) = 0;
    if (func_00143A80(e, D_004854C8, 0)) {
        s = func_00143A80(e, D_004854C8, 0);
        if (func_00304168(s, D_004854D0) == 0) {
            AT(s8, 0xF0) = 0;
        } else if (func_00304168(s, D_004854D8) == 0) {
            AT(s8, 0xF0) = 1;
        } else if (func_00304168(s, D_004854E0) == 0) {
            AT(s8, 0xF0) = 2;
        }
    }
    AT(s32, 0xEC) = 0;
    if (func_00304168(name, D_004854E8) == 0)
        AT(s32, 0xEC) = 1;
    AT(s8, 0xE4) = func_00153FA8(e) < 2000;
    if (func_00140F60(e, D_004854F0, 0))
        AT(s8, 0xE4) = 1;
    sc = 1.0f;
    if (func_00143A80(e, D_004854F8, 0))
        sc = func_001410A0(e, D_004854F8, 0);
    if (D_004844C0 & 0x10000)
        sc += sc;
    if (D_004844C0 & 0x8000)
        sc *= 3.0f;
    r = func_00153FA8(e);
    AT(s16, 0xDC) = (s32)((f32)(s32)(r % 12 + 12) * sc * func_001D0FF8());
    if (func_00153FA8(e) < 10000)
        AT(s16, 0xDC) = 0;
    lvl = 0;
    if (AT(s16, 0xDC) != 0) {
        lvl = 1;
        if (AT(s16, 0xDC) >= 0x28)
            lvl = AT(s16, 0xDC) < 0x50 ? 2 : 4;
    }
    if (func_00304168(name, D_00470D38) == 0) {
        AT(s8, 0xE4) = 0;
    } else if (AT(s8, 0xE4) != 0) {
        AT(s16, 0xDC) = 0;
        lvl = 8;
    }
    func_00304640(buf, (char *)e + 0x4C);
    func_00304240(buf, D_00485500);
    AT(s32, 0xF4) = func_00165DC0((char *)e + 0x6D, buf);
    AT(s64, 0xC8) = func_0016C970(AT(s32, 0x90), lvl);
}
