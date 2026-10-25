extern char D_004CF358[];
extern char D_004CF378[];
extern char D_004CF3C8[];
extern char D_004CF3D8[];
extern char D_005084A8[];
void func_001A1568(char *file, s32 line, char *msg);
void func_00194698(void *a, void *b, void *c, void *d, s32 e);
void func_00198F9C(void *a, void *b, void *c);
void func_0019922C(void *a, void *b);

void func_00198EA8(void *a, void *b, void *c, void *d, s32 e) {
    if (a == NULL) func_001A1568(D_004CF358, 0xE0, D_005084A8);
    if (b == NULL) func_001A1568(D_004CF358, 0xE1, D_004CF378);
    if (c == NULL) func_001A1568(D_004CF358, 0xE2, D_004CF3C8);
    if (d == NULL) func_001A1568(D_004CF358, 0xE3, D_004CF3D8);
    func_00194698(a, b, c, d, e);
    func_00198F9C(a, b, c);
    func_0019922C(a, b);
}
