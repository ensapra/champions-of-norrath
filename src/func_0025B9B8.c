typedef struct { u8 pad[4]; u16 type; } Node1671F8;
Node1671F8 *func_001671F8(char *);
void func_00304640(char *, char *);
u32 func_00304CFC(char *);

Node1671F8 *func_0025BF40(char *path) {
    char buf[0x80];
    Node1671F8 *n = 0;
    func_00304640(buf, path);
    while (func_00304CFC(buf) >= 2) {
        n = func_001671F8(buf);
        if (n->type != 0x3A) break;
        buf[func_00304CFC(buf) - 1] = 0;
    }
    if (n != 0) return n;
    return func_001671F8(path);
}

extern s8 D_00483829;
extern s32 D_00483F14;
extern s32 D_00483F1C;
extern s32 D_00483F30;
extern u8 D_00484300;
extern s8 D_00486CC0[5];
extern s8 D_00486CC5;

void func_0025B9B8(s32 arg0) {
    s8 v;
    if (D_00483829 == 0) {
        D_00486CC5--;
        if (arg0 != 0) {
            D_00486CC0[D_00486CC5] = 0;
        }
        v = D_00486CC0[D_00486CC5];
        D_00483F14 = v;
        if (D_00483F30 == 0) {
            D_00484300 = D_00486CC0[D_00486CC5];
        }
        if (v == 0) {
            D_00483F1C = 0x3C;
        }
    }
}
