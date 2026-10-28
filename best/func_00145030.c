typedef struct { s32 id; s64 value; } Prm;
typedef struct { s64 a, b; } Q;
extern s32 func_0015DC9C(s32, void *, void *, s32, void *);
extern char func_001B9FD8[]; extern char func_001BCB38[]; extern char func_001C2480[]; extern char jtbl_004C006C[];
void func_00145030(s32 a0, s64 a1, s64 a2, s64 a3) {
 Prm p[32]; Q q; char *t = func_001B9FD8 + 0x1708;
 q = *(Q*)(t + 0x60);
 p[0].id=8; p[0].value=a1;
 p[1].id=10; p[1].value=a2;
 p[2].id=13; p[2].value=20;
 p[3].id=15; p[3].value=20;
 p[4].id=59; p[4].value=0;
 p[5].id=61; p[5].value=0;
 p[6].id=63; p[6].value=0;
 p[7].id=65; p[7].value=0;
 p[8].id=20; p[8].value=0;
 p[9].id=99; p[9].value=0;
 p[10].id=139; p[10].value=30;
 p[11].id=143; p[11].value=16;
 p[12].id=147; p[12].value=1500;
 p[13].id=151; p[13].value=0;
 p[14].id=155; p[14].value=(s64)(func_001C2480 + 0x190);
 p[15].id=164; p[15].value=0;
 p[16].id=189; p[16].value=a3;
 p[17].id=17; p[17].value=0;
 p[18].id=18; p[18].value=(s64)&q;
 func_0015DC9C(*(s32*)(func_001BCB38 + 0xD74), jtbl_004C006C + 0xB084, p, 19, &q);
}
