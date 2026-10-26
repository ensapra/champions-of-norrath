typedef struct {
    u8 b0; u8 b1;
    char pad[0x10 - 2];
    void (*fn10)(void);
    char padb[0x20 - 0x14];
    void (*fn20)(void *, s32, s32);
    void (*fn24)(s32);
    char pad2[0xF4 - 0x28];
    void (*fnF4)(char *);
    char pad3[0x100 - 0xF8];
    s32 (*fn100)(void);
} D48;
extern char D_004CECB8[], D_004CED70[], D_004CEED0[], D_004CEEF0[];
extern u8 D_00364290[];
D48 *D_00480488;
void func_001A1568(char *, s32, char *);
void func_00195794(void *);
void func_00195660(void *, s32);
void func_00198C24(s32);
void func_00195924(void *);
void func_0019542C(void *);
void func_001954BC(void *);
void func_0019550C(void *);
void func_0019545C(void *);
void func_0019548C(void *);
void func_00195704(void *, s32);
void func_00195854(void *);
void func_00195804(void *);

void func_00195D10(u8 *t)
{
    s32 row = *(s32 *)(t + 0x48);
    s32 idx = t[0x52] & 0x7F;
    u8 *tbl;
    u8 *e;
    s32 code;
    if (t == 0) func_001A1568(D_004CECB8, 0x569, D_004CED70);
    tbl = *(u8 **)(t + 0x78);
    e = (tbl + row * 408) + idx * 48;
    code = *(u16 *)(e + 4);
    if (code != 0) {
        switch (code) {
        case 1: func_00195794(t); return;
        case 2: func_00195660(t, 1); func_00198C24(3); return;
        case 3: func_00195924(t); break;
        case 4: func_0019542C(t); break;
        case 5: func_001954BC(t); break;
        case 6: func_0019550C(t); break;
        case 7: func_0019545C(t); break;
        case 8: func_0019548C(t); break;
        case 9:
            if (D_00480488->fn100() == 0) {
                D_00480488->fn24(1);
                D_00480488->b1 = 1;
                func_00195704(t, 1);
                func_00198C24(9);
            }
            break;
        case 10: func_00195854(t); return;
        case 11: func_00195804(t); break;
        case 12:
            D_00480488->fn10();
            D_00480488->fnF4(D_004CEED0);
            func_00198C24(10);
            break;
        case 13:
        default:
            D_00480488->fnF4(D_004CEEF0);
            break;
        }
    } else {
        if (D_00364290[0] == 0) {
            s32 v = *(s32 *)(e + 8);
            if (v != 0x20 && v != 0x3000) {
                D_00480488->fn20((u8 *)((row * 408 + idx * 48) + (s32)tbl) + 8, 0, *(u16 *)(e + 4));
                func_00195704(t, 1);
                return;
            }
        }
        D_00480488->fn20((u8 *)((row * 408 + idx * 48) + (s32)tbl) + 8, t[0x52] & 1, 0x20);
    }
}
