s32 func_0017DCF0(void);s32 GetOsdConfigParam(u32*);s32 GetOsdConfigParam2(void*,s32,s32);extern u8 func_001D1C80[];
s32 func_0017DF50(void){struct {u32 config;u8 ext[4];} c;if(func_0017DCF0())return func_001D1C80[0x44F];GetOsdConfigParam(&c.config);if(((c.config>>13)&7)==0)return 0;GetOsdConfigParam2((void*)((u32)&c|4),1,1);return (c.ext[0]>>5)&1;}

typedef struct { s32 f0, f4, f8; u64 *ptr; s16 f10, f12, f14, f16, f18, f1A, f1C, f1E; s16 w, h; s32 f24; } E174;
extern E174 D_010EA1E0[];
typedef struct { u64 d[5]; } P174;
extern P174 D_010E8970[];
void func_0018DC48(u64 *);
void func_00174718(s32, s32, s32, s32, s32, s32, s32, E174 *);

void func_00174BD8(s32 i) {
    u64 *p = D_010EA1E0[i].ptr;
    if (p) func_0018DC48(p);
}

void func_00174B38(s32 i) {
    E174 *e = &D_010EA1E0[i];
    u64 *pk = D_010E8970[i].d;
    s16 w = e->w;
    s16 h = e->h;
    pk[2] = e->f14 | ((s64)(w / 64) << 9) | ((s64)e->f1C << 15);
    e->ptr = pk;
    pk[0] = 0xFF23;
    func_00174718(i, 0, 0, w, h, w, h, e);
}

void func_00174AF0(s32 i, s32 a, s32 b) {
    u64 *p = D_010EA1E0[i].ptr;
    *p = (*p & ~0xFF20LL) | (s32)(((b & 1) << 5) | ((a & 0xFF) << 8));
}
