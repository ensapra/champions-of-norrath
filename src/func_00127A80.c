typedef struct { u8 pad[0xC]; char name[0x200]; } S_Ent20C;
extern S_Ent20C *D_001C6830[];
extern s32 D_001C683C[];
extern s32 D_010C91D8[];
extern char D_010C92D0[][0x100];
extern s32 D_010C9CD0[];
s32 func_001A4174(char *, char *);
void func_001A42B8(char *, char *);
void func_00127BE0(void);

void func_00127A80(u8 *arg0)
{
    s32 i;
    for (i = 0; i < D_001C683C[0]; i++) {
        if (func_001A4174(D_001C6830[0][i].name, (char *)arg0 + 0x100) == 0) {
            func_001A42B8(D_010C92D0[D_010C9CD0[0]], (char *)arg0 + 0x100);
            D_010C91D8[i] = 1;
        }
    }
    D_010C9CD0[0]++;
    func_00127BE0();
}
