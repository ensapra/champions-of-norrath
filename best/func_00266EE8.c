typedef struct { s8 type; s8 pad[3]; s16 a; s16 b; s32 c; s32 d; } Rec;
char *D_00485C54;
s32 D_00485C78, D_00485C7C;
extern char D_0034B701[];
extern unsigned char D_0047E1F1[];
extern char D_0034B660[];
s32 func_003044FC(char *, s32);
s32 func_002FF990(void *, s8);

void func_00266EE8(void) {
    s32 i = 0;
    s32 off;
    Rec *r;
    if (*(s8 *)(D_00485C54 + 0x310) != 0) {
        off = 0x300;
        do {
            r = (Rec *)(D_00485C54 + off + 0x10);
            if (r->type == 1) {
                if (func_003044FC(D_0034B701, *(s32 *)&r->a) != 0) { i++; goto next; }
            } else if (r->type == 3) {
                if (D_0047E1F1[D_0034B660[0xA1]] & 4) {
                    s32 m = func_002FF990(&D_0034B660[0xA1], D_0034B660[0xA1]);
                    r = (Rec *)(D_00485C54 + off + 0x10);
                    i++;
                    if (m % r->a != r->b) goto next;
                    r = (Rec *)(D_00485C54 + off + 0x10);
                } else { i++; goto next; }
            }
            D_00485C7C = r->d;
            D_00485C78 = r->c;
            return;
        next:
            off += 0x10;
            if (i >= 8) return;
        } while (*(s8 *)(D_00485C54 + off + 0x10) != 0);
    }
}
