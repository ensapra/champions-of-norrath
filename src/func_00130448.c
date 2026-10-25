typedef struct { char pad[0xC]; char name[0x200]; } Entry;
extern Entry *D_001C682C[];
extern Entry *D_001C6830[];
extern s32 D_001C6838[];
extern s32 D_001C683C[];
extern s32 D_010CD7E0[];
extern s32 D_010CD7E8[];
s32 func_001A4174(char *, char *);
void func_00130568(void);

void func_00130448(char *arg) {
    s32 i;
    s32 found = 0;
    for (i = 0; i < D_001C6838[0]; i++) {
        if (func_001A4174(D_001C682C[0][i].name, arg) != 0) {
            found = 0;
        } else {
            found = 1;
            break;
        }
    }
    if (found) {
        i = 0;
        found = 0;
        for (; i < D_001C683C[0]; i++) {
            if (func_001A4174(D_001C6830[0][i].name, arg + 0x100) != 0) {
                found = 0;
            } else {
                found = 1;
                break;
            }
        }
        if (found) goto skip;
    }
    D_010CD7E8[D_010CD7E0[0]] = 1;
skip:
    D_010CD7E0[0]++;
    func_00130568();
}
