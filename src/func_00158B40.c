/* identical to func_00158C78 (matched), with its names changed by decompdecomp */
typedef struct { s32 c; u8 pad[0x20]; } Elem24;
typedef struct {
    u8 pad[0xB80];
    Elem24 *arr;
    u8 pad2[8];
    s32 count;
} Obj158C78;
s32 func_0015AD38(Obj158C78 *, s32);
void func_001A2660(void *, s32, s32);
s64 func_00158A20(u8 *);
void ovl_ntgui2_func_0015A7B8(Obj158C78 *);
void func_0015B210(Obj158C78 *);

s32 func_00158B40(Obj158C78 *o)
{
    u8 buf[8];
    s32 i;
    s32 n = 0;
    s32 k;
    s32 c;

    if (o == NULL) return 0;
    if (o->count <= 0) return 0;
    if (func_0015AD38(o, o->count - 1)) return 0;
    i = o->count - 1;
    func_001A2660(buf, 0, 5);
    do {
        c = o->arr[i].c;
        i--;
        n++;
    } while ((u32)(c - 0x80) < 0x40);
    i++;
    for (k = 0; k < n; k++) buf[k] = o->arr[i + k].c;
    if (func_00158A20(buf) == 0) return 0;
    for (k = 0; k < n; k++) o->arr[i + k].c = buf[k];
    ovl_ntgui2_func_0015A7B8(o);
    func_0015B210(o);
    return 1;
}
