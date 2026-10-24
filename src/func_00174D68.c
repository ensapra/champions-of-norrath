typedef struct {
    u32 spdifMode : 1;
    u32 screenType : 2;
    u32 videoOutput : 1;
    u32 japLanguage : 1;
    u32 ps1drvConfig : 8;
    u32 version : 3;
    u32 language : 5;
    u32 timezoneOffset : 11;
} OsdConfigParam;

extern u8 func_001D1C80[];
s32 func_0017DCF0(void);
void GetOsdConfigParam(OsdConfigParam *);

s32 func_0017DD30(void)
{
    OsdConfigParam c;
    s32 r;

    GetOsdConfigParam(&c);
    if (func_0017DCF0()) {
        r = func_001D1C80[0x44C];
    } else {
        GetOsdConfigParam(&c);
        if (c.version == 0) {
            r = c.japLanguage;
        } else {
            r = c.language;
        }
    }
    return r;
}

typedef struct {
    s32 depth;
    s32 vals[0x23];
    s32 ptrs[0x20];
} Stack175;

extern Stack175 D_010EAA60;

void func_00174D98(void) {
    D_010EAA60.depth = 0;
}

typedef struct {
    s32 pad[2];
    s32 a;
    s32 pad2[7];
} Ent28;

extern Ent28 D_010EA1E8[];
void func_0018ECE8(s32);

void func_00174D68(s32 i) {
    func_0018ECE8(D_010EA1E8[i].a + 0x10);
}

void func_00171AE0(s32);

s32 func_00174CF8(void) {
    Stack175 *s = &D_010EAA60;
    s32 p;
    if (s->depth == 0) {
        return -1;
    }
    s->depth--;
    p = s->ptrs[s->depth];
    if (p == 0) {
        return 0xFFFF;
    }
    func_00171AE0(p);
    return s->vals[s->depth];
}
