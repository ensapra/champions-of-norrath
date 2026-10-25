typedef struct { char p0[0x204]; char b204[0x100]; char b304[0x100]; char b404[0xFC]; s32 f500; s32 f504; s32 f508; s32 f50C; } Ent;
extern char func_001C5078[], func_001BBD68[];
extern s32 D_001BB904[];
extern Ent D_001BB908[];
void func_001A42B8(void *, void *, ...);

void func_001270C0(void) {
    char *b = func_001C5078 + 0x488;
    switch (*(s32 *)(b + 0x1304)) {
    case 2: {
        s32 i;
        *(s32 *)(b + 0x1300) = D_001BB908[D_001BB904[0]].f504;
        *(s32 *)(b + 0x130C) = D_001BB908[D_001BB904[0]].f50C;
        func_001A42B8(b + 0xF00, D_001BB908[D_001BB904[0]].b304);
        i = D_001BB904[0];
        func_001A42B8(b + 0x1000, D_001BB908[i].b404);
        i = D_001BB904[0];
        func_001A42B8(b + 0xE00, D_001BB908[i].b204);
        break;
    }
    case 1:
    case 3: {
        char *c = func_001C5078 + 0x488;
        *(s32 *)(c + 0x1308) = *(s32 *)(func_001BBD68 + 0xA8 + D_001BB904[0] * 0x510);
        break;
    }
    }
}
