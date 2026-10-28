typedef struct { char pad[0x24]; s32 flags; } W;
void func_00178AC0(void);
void func_00179248(void);
void func_00179B40(s32 a0, W *w, s32 a2) {
    if (w->flags & 0x80) { func_00178AC0(); return; }
    if (w->flags & 0x800) { func_00179248(); return; }
}
