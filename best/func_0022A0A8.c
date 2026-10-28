typedef struct Obj_22A0A8 { u8 pad0[0x24]; u8 *p24; } Obj_22A0A8;
extern void func_0010D428(void *, s32);
extern s32 func_0010EBF8(void *, s32);
extern void func_0010A428(void *, s32);
void func_0022A0A8(Obj_22A0A8 *o)
{
    func_0010D428(o, *(s32 *)(o->p24 + 0xC));
    if (func_0010EBF8(o, *(s32 *)(o->p24 + 0xC)) != 0) return;
    func_0010A428(o, 0x258);
}
