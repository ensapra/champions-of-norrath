typedef struct { u8 pad[0x4c]; void **vt; } Obj;
typedef struct { u16 type; u8 pad[0x12]; s32 x, y; } Rec;
typedef s32 (*VD8)(Obj *, s32, s32, s32, s32);
typedef void (*VBC)(Obj *, Rec *, s32, s32);
extern s32 func_001522B8(void *, void *);
extern s32 func_001524A0(void *, void *);
extern s32 func_0015259C(void *, void *);
extern void func_00152618(void *);
extern void func_0014C93C(void *, void *);

s32 func_0014EE80(void *arg0, Rec *rec, s32 arg2, s32 arg3, Obj *obj, s32 enabled, s32 *out, s32 *flag)
{
    s32 r;
    s32 ready = 0;
    s32 f;
    *flag = 0;
    r = ((VD8)obj->vt[0xD8 / 4])(obj, arg2, arg3, rec->x, rec->y);
    *out = r;
    f = 0;
    if (enabled) {
        if (func_001522B8(obj, arg0)) {
            ready = 1;
            f = 1;
        }
    } else {
        ready = 1;
    }
    if (!ready)
        return 0;
    if (!f && !r)
        return 0;
    switch (rec->type) {
    case 1:
        if (!func_001524A0(obj, arg0))
            return 0;
        goto call;
    case 2:
        if (!func_0015259C(obj, arg0))
            return 0;
        func_00152618(arg0);
        if (!r) {
            *flag = 1;
            break;
        }
        goto call;
    case 3:
        if (!r) {
            if (f)
                goto call;
            break;
        }
    case 4: case 5: case 6: case 7: case 8: case 9: case 10:
    call:
        func_0014C93C(obj, arg0);
        break;
    }
    ((VBC)obj->vt[0xBC / 4])(obj, rec, arg2, arg3);
}
