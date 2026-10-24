extern void func_001C8098();
void func_00154068(void *);
void func_00154130(void *);
void func_00154394(void *);

void func_0015398C(void *arg0) {
    (*(void (**)())((char *)func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

extern s32 (*D_010E4574[])(void);

s32 func_00152CB8(void) {
    if (D_010E4574[0] != NULL) {
        return D_010E4574[0]();
    }
    return -1;
}

extern s32 (*D_010E4570[])(void);

s32 func_00152C8C(void) {
    if (D_010E4570[0] != NULL) {
        return D_010E4570[0]();
    }
    return -1;
}

extern void (*D_010E4584[])(void);

void func_00152C64(void) {
    if (D_010E4584[0] != NULL) {
        D_010E4584[0]();
    }
}
