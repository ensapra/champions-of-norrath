typedef struct {
    u32 spdifMode : 1;
    u32 screenType : 2;
    u32 videoOutput : 1;
    u32 japLanguage : 1;
    u32 ps1drvConfig : 8;
    u32 version : 3;
    u32 language : 5;
    s32 timezoneOffset : 11;
} OsdConfig;
typedef struct {
    u8 format : 4;
    u8 daylight : 1;
    u8 summer : 1;
    u8 timeFormat : 2;
} OsdConfig2;
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfig *);
s32 GetOsdConfigParam2(void *, s32, s32);
extern u8 func_001D1C80[];

s32 func_0017DE80(void)
{
    OsdConfig c;
    OsdConfig2 c2;
    s32 r;
    if (func_0017DCF0()) {
        r = func_001D1C80[0x44B];
    } else {
        GetOsdConfigParam(&c);
        if (c.version == 0) {
            r = 0;
        } else {
            GetOsdConfigParam2(&c2, 1, 1);
            r = c2.timeFormat;
        }
    }
    return r;
}

typedef struct {
    s32 depth;
    s32 vals[0x23];
    s32 ptrs[0x20];
} Stack174;

extern Stack174 D_010EA730;

void func_00174FC0(void) {
    D_010EA730.depth = 0;
}

typedef struct {
    s32 a;
    s32 pad[7];
    s16 x;
    s16 y;
    s32 pad2;
} Ent1E0;

typedef struct {
    u8 pad[0x18];
    s32 x;
    s32 y;
} Pos;

extern Ent1E0 D_010EA1E0[];
extern u8 func_001CE218[];
void func_0018E0C0(s32);
void func_00171AE0(s32);

void func_00174F54(s32 i) {
    Ent1E0 *e;
    Pos *p;
    func_0018E0C0(D_010EA1E0[i].a + 0x10);
    e = &D_010EA1E0[i];
    p = (Pos *)(func_001CE218 + 0x2010);
    p->y = e->y;
    p->x = e->x;
}

s32 func_00174EB0(void) {
    Stack174 *s = &D_010EA730;
    s32 n;
    s32 q;
    Pos *p;
    if (s->depth == 0) {
        return -1;
    }
    n = --s->depth;
    q = s->ptrs[n];
    if (q != 0) {
        func_00171AE0(q);
        p = (Pos *)(func_001CE218 + 0x2010);
        n = s->vals[s->depth];
        p->y = D_010EA1E0[n].y;
        p->x = D_010EA1E0[n].x;
        return n;
    }
    return 0xFFFF;
}
