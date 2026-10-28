typedef struct { char pad0[0x2C]; char **env; } Obj1410A0;
extern const char D_0047E1F1[];
s32 func_00304CFC(char *);
s32 func_00304F60(char *, char *, s32);
s32 func_002FF978(char *, char **);
f32 func_002FBC20(s32);

f32 func_001410A0(Obj1410A0 *o, char *name, s32 count) {
    char *p;
    s32 len;
    s32 i;
    s32 c, r;

    if (o->env == NULL) {
        return 0.0f;
    }
    for (p = name; *p; p++) {
        c = *p;
        r = c;
        if ((D_0047E1F1 + 0)[c] & 1) {
            r = c + 0x20;
        }
        *p = r;
    }
    len = func_00304CFC(name);
    for (i = 0; o->env[i]; i++) {
        if (func_00304F60(o->env[i], name, len) == 0 && o->env[i][len] == '=') {
            if (--count == -1) {
                s32 v = func_002FF978(o->env[i] + len + 1, 0);
                return func_002FBC20(v);
            }
        }
    }
    return 0.0f;
}
