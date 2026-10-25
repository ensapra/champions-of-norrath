struct S00142310 {
    u8 pad[0x2C];
    char **list;
};

extern "C" {
s32 D_00483ACC;
extern char D_00483AF0[];
extern char D_00483AF8[];
extern u8 D_0047E1F1[];
s32 func_00304F60(char *, char *, s32);
void func_00303EB8(char *, char *, char *);
void func_001D3E88(char *);
void func_00142310(S00142310 *arg0, s32 arg1);
}

static inline char *find_action(S00142310 *obj, s32 cnt) {
    if (obj->list == 0) return 0;
    for (char *p = D_00483AF0; *p != 0; p++) {
        s32 c = *p;
        s32 r = c;
        if ((D_0047E1F1 + 0)[c] & 1) r = c + 0x20;
        *p = r;
    }
    for (s32 i = 0; obj->list[i] != 0; i++) {
        if (func_00304F60(obj->list[i], D_00483AF0, 6) == 0) {
            char *e = obj->list[i];
            if (e[6] == '=' && --cnt == -1) {
                return e + 7;
            }
        }
    }
    return 0;
}

void func_00142310(S00142310 *arg0, s32 arg1) {
    char buf[0xA0];
    s32 n;
    char *s;

    D_00483ACC = (s32)arg0;
    for (n = 0; (s = find_action(arg0, n)) != 0; n++) {
        if (arg1 != 0) {
            func_001D3E88(s);
        } else {
            func_00303EB8(buf, D_00483AF8, s);
            func_001D3E88(buf);
        }
    }
    D_00483ACC = 0;
}
