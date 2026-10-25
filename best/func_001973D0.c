typedef struct { u8 b0; u8 flag; } St;
typedef struct { char p0[0xC]; void (*f0)(s32, void *, void *, void *, void *); void (*f1)(s32, void *, void *); char p1[0xE4 - 0x14]; s32 mode; } Obj;
St *D_00480488;
s32 D_0048048C;
extern char D_004CF040[], D_004CF098[], D_00508490[], D_010F6528[], D_010F65E8[];
s32 SignalSema(s32);
void func_00197B54(void *);
void func_00197B8C(void *);
void func_00197DB4(s32, void *, void *, void *);
void func_001988E8(s32, void *, void *, void *);
void func_001A1568(void *, s32, void *);

s32 func_001973D0(s32 a, Obj *o) {
    if (a == 0) func_001A1568(D_004CF040, 0x192, D_00508490);
    if (o == 0) func_001A1568(D_004CF040, 0x193, D_004CF098);
    SignalSema(D_0048048C);
    if (*(u16 *)D_00480488) {
        switch (o->mode) {
        case 3:
            break;
        case 0:
            func_00197B54(o);
            break;
        case 2:
            func_00197B8C(o);
            break;
        default:
        case 1:
            if (D_00480488->flag) {
                func_001988E8(a, o, D_010F65E8, D_010F65E8 - 0x40);
            } else {
                o->f0(a, o, D_010F6528, D_010F6528 - 0x40, D_010F6528 - 0x80);
                o->f1(a, o, D_010F6528);
                func_00197DB4(a, o, D_010F6528, D_010F6528 - 0x40);
            }
            break;
        }
    }
}
