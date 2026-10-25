typedef struct {
    char pad[0x10C];
    char name[0x100];
} Ent;
typedef struct {
    char pad[0x18];
    void *cb;
} Obj;
extern char D_010CFA30[];
extern s32 D_010CFB30[];
extern s32 D_010CFB34[];
extern s32 D_010CFB40[];
extern s32 D_010CFB44[];
extern s32 D_010CFB48[];
extern s32 D_010CFB4C[];
extern char D_001C6100[];
extern Ent *D_001C6830[];
extern char D_004CAF68[];
s32 func_001404D0();
s32 func_00141078(s32);
void func_001A3D78(char *, char *, ...);
void func_001407E8(s32, s32, char *, s32);
void func_00140868(s32, s32, char *, char *, s32);
void func_00140BC8(s32, char *, char *, s32, s32);
void func_0013D720();

s32 func_0013D5A0(Obj *o)
{
    if (func_001404D0() != 0) {
        return 0;
    }
    if (func_00141078(D_010CFB34[0]) >= 0) {
        return 0;
    }
    switch (D_010CFB4C[0]) {
    case 1:
        func_001A3D78(D_010CFA30, D_004CAF68, D_001C6100, D_001C6100 + 0x100);
        func_001407E8(D_010CFB30[0], 2, D_010CFA30, D_010CFB40[0]);
        break;
    case 2:
        func_00140868(D_010CFB30[0], 2, D_001C6830[0][D_010CFB48[0]].name, D_001C6830[0][D_010CFB48[0]].name, D_010CFB40[0]);
        break;
    case 3:
        func_00140BC8(2, D_001C6830[0][D_010CFB48[0]].name, D_001C6830[0][D_010CFB48[0]].name, D_010CFB40[0], D_010CFB44[0]);
        break;
    }
    o->cb = func_0013D720;
    return 0;
}
