typedef struct { volatile s32 key; s32 val; } Entry143;
typedef struct { char pad[0x24]; Entry143 *node; } Obj143;
s32 D_00483F88;
s32 func_00165DC0(s32, s32);
void func_00143BB0(Obj143 *obj, Entry143 *node) {
    s32 i;
    s32 r;
    obj->node = node;
    if (node == 0) return;
    if (node[0].val == D_00483F88) return;
    if (((s32 *)node)[2] != 0) {
        i = 1;
        do {
            r = func_00165DC0(obj->node[0].key, obj->node[i].key);
            obj->node[i].val = r;
            i++;
        } while (obj->node[i].key != 0);
        obj->node[0].val = D_00483F88;
    }
}
