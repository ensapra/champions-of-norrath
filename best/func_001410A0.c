extern const char D_0047E1F1[];
extern f32 func_002FBC20(s32);
extern s32 func_002FF978(char *, s32 *);
extern s32 func_00304CFC(char *);
extern s32 func_00304F60(char *, char *, s32);
f32 func_001410A0(void *obj, char *name, s32 count) {
    char **env;
    char *p;
    s32 len, i;
    s32 c, r;
    env = *(char *** )((char *)obj + 0x2c);
    if (env == 0) return 0.0f;
    for (p = name; *p; p++) {
        c = *p;
        r = c;
        if ((D_0047E1F1 + 0)[c] & 1) r = c + 0x20;
        *p = r;
    }
    len = func_00304CFC(name);
    for (i = 0; env[i]; i++) {
        if (func_00304F60(env[i], name, len) == 0 && env[i][len] == '=') {
            count--;
            if (count == -1)
                return func_002FBC20(func_002FF978(env[i] + len + 1, (s32 *)env));
        }
    }
    return 0.0f;
}
