extern s32 D_010CD3F8[], D_010CD408[];
extern s32 D_001BB6C4[];
extern s32 D_001C4E64[];
void func_0012E6F0(void);
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);
void func_00138990(s32);
void func_0012E520(void);
void func_0010B718(void);

void func_0012E5A0(s32 a) {
    s32 buf[8];
    s32 v;
    func_00118140(buf, 0, 0, func_0012E6F0, 0);
    D_010CD408[0] = func_00118160(buf);
    v = D_010CD3F8[D_001C4E64[0]];
    D_001BB6C4[0] = v;
    if (a == 0)
        func_00114948(0, 500, 250, func_0011BA18(0x70), 0, D_001BB6C4[0]);
    else
        func_00138990(v);
    func_0012E520();
    func_0010B718();
}
