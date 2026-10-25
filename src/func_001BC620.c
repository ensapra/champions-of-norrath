typedef struct { char *p; char pad[0x70]; } Ent74;
extern Ent74 D_004281A8[];
extern s32 D_00484CA4;
s32 func_001671F8(char *s);
void func_00172BC8(s32 a, s32 b, u32 c, s32 d);
void func_00172DC0(u32 c, s32 a, s32 b);
s32 func_00172F88(void);
void func_00173C08(char *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_001744B8(char *p, s32 a, s32 b, s32 c);

s64 func_001BC620(char *str, s32 idx) {
    Ent74 *e = &D_004281A8[idx];
    func_00172BC8(D_00484CA4, 6, 0x80323C3C, -1);
    func_00172DC0(0x80323C3C, -1, 0);
    func_001744B8(e->p + 0x18, 0x5B, func_001671F8(str), 1000000);
    func_00172DC0(0x802D2D2D, -1, 0);
    func_00173C08(e->p + 0x18, 0x71, func_001671F8(str + 0x20), 300, -500, 600, 0x15);
    return func_00172F88();
}
