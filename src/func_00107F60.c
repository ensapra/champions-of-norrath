typedef struct { s16 a; s16 pad[3]; } S_e8;
typedef struct {
    u8 pad0[0x10];
    s16 a[4];
    s16 b[4];
    s8 c20;
    s8 c21;
    u8 pad22[2];
    S_e8 e[4];
    u8 pad44[0x0C];
} S_Obj;
typedef struct { char *name; u8 pad[0x3C]; } S_0031FBE0;
extern S_0031FBE0 D_0031FBE0[];
void func_00304640(char *, char *);
void func_00105F60(char *, S_Obj *, s32, s32);
s32 func_00102178(S_Obj *);

void func_00107F60(void)
{
    S_Obj obj;
    char buf[0x100];
    s32 n;
    s32 i;
    s32 j;
    S_Obj *o;

    for (n = 0; D_0031FBE0[n].name != NULL; n++) {
        o = &obj;
        for (j = 0; j < 4; j++) {
            o->e[j].a = -1;
        }
        o->c20 = -1;
        o->c21 = -1;
        for (i = 0; i < 4; i++) {
            o->a[i] = 0;
            o->b[i] = 0;
        }
        func_00304640(buf, D_0031FBE0[n].name);
        func_00105F60(buf, &obj, -1, 1);
        func_00102178(&obj);
    }
}
