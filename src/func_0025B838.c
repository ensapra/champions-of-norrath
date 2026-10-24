extern s32 D_00483F30;
typedef struct { s8 b0, b1, b2, b3, b4; s8 pad[7]; } S88B8;
extern volatile S88B8 D_008D88B8;
extern s8 D_008D8938[1008];
void *func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *p;
    s32 i;
    s32 v, w;
    if (D_00483F30 == 0) {
        func_003021B0(D_008D8938, 0, 0x3F0);
        D_008D88B8.b4 = 0;
        D_008D88B8.b1 = 0;
        w = 1;
        D_008D88B8.b0 = w;
        v = 0x20;
        D_008D88B8.b3 = v;
        v = -2;
        p = &D_008D8938[0x374];
        for (i = 7; i >= 0; i--) {
            *p = v;
            p -= 0x7E;
        }
    }
}

extern s8 D_00483829;
extern s32 D_00483F14;
extern u8 D_00484300;
extern s8 D_00486CC0[5];
extern s8 D_00486CC5;

void func_0025B970(void) {
    if (D_00483829 == 0) {
        D_00486CC0[D_00486CC5++] = D_00483F14;
        if (D_00483F30 == 0) {
            D_00484300 = 1;
            D_00483F14 = 1;
        }
    }
}

extern s32 D_00483F28;
extern s8 D_00485BEC;
extern char D_00474E48[];
s32 func_001671F8(char *);
void func_00190E20(char *, s32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_00251FE0(s32, char *, s32);
void func_0025BBD0(s32, s32);

void func_0025B838(void) {
    char buf[0x100];
    s32 r;
    func_00190E20(buf, func_001671F8(D_00474E48), 137.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_00485BEC = 0;
    r = func_00251FE0(1, buf, 0);
    if (r != 0 && r != 2) {
        func_0025BBD0(-1, 0);
        D_00483F28 = 1;
    }
}

extern s32 D_00483E88;
extern s32 D_00486C7C;
void func_001D1108(char *);
s32 func_00142CE8(char *, s32);
s32 func_00191BD8(char *, s32);
void func_0015E010(char *);

void func_0025B5A8(char *p, s32 size) {
    s32 tmp;
    char buf[0x100];
    func_001D1108(buf);
    size = size - D_00483E88 - 0x18;
    D_00486C7C = func_00142CE8(p + 8, size);
    __builtin_memcpy(p, &D_00486C7C, 4);
    size -= D_00486C7C;
    p += D_00486C7C;
    tmp = func_00191BD8(p + 0x10, size + 8);
    p += 8;
    __builtin_memcpy(p, &tmp, 4);
    p += tmp;
    func_0015E010(p + 8);
}
