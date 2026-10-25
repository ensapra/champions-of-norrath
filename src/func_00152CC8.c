typedef struct Obj152 Obj152;
typedef struct { s32 pad; s32 (*getId)(Obj152 *); } Vt152;
struct Obj152 { char pad[0x24]; void **unk24; char pad2[0x48 - 0x28]; Vt152 *vt; };
extern char D_00463070[];
extern char D_00483BA8[];
extern char D_00483E48[];
extern char D_00483E50[];
char *func_00143A80(Obj152 *, char *, s32);
void *func_00165DC0(void *, char *);
s32 func_002FD2E0(s32, s32);
void func_002FF3C8(void) __attribute__((noreturn));
void func_00303EB8(char *, char *, ...);
s32 func_0030FB50(void);

void *func_00152CC8(Obj152 *o, char *name)
{
    char buf[0xA0];
    char key[0xA0];
    s32 id;
    void *lib;
    void *r;

    if (o != NULL) {
        id = o->vt->getId(o);
    } else {
        func_002FF3C8();
    }
    if (func_002FD2E0(id, func_0030FB50()) != 0) {
        lib = (char *)o + 0x3C0;
    } else {
        lib = *o->unk24;
    }
    func_00303EB8(key, D_00483E48, name);
    if (func_00143A80(o, key, 0) != NULL) {
        func_00303EB8(buf, D_00483E50, func_00143A80(o, key, 0));
        return func_00165DC0(lib, buf);
    }
    if (func_00143A80(o, D_00483BA8, 0) != NULL) {
        func_00303EB8(buf, D_00463070, func_00143A80(o, D_00483BA8, 0), name);
        r = func_00165DC0(lib, buf);
        if (r != NULL) {
            return r;
        }
    }
    func_00303EB8(buf, D_00483E50, name);
    return func_00165DC0(lib, buf);
}
