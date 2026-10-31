extern void *func_002FA4A8(s32);
extern void **func_002FA108(s32);
extern void func_002FEF20();
typedef struct 
{
  void *unk0;
  s16 unk4;
  s16 unk6;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  void *unk18;
  u8 pad[0x4];
  s64 unk30;
  void *unk28;
} ObjStruct;
void func_002FEF80(void *arg0, s32 arg1, s32 arg2)
{
  ObjStruct *obj = (ObjStruct *) func_002FA4A8(0x30);
  void **list;
  void (*new_var)();
  obj->unkC = arg1;
  (*obj).unk10 = arg2;
  new_var = func_002FEF20;
  obj->unk28 = (obj->unk8 = arg0);
  obj->unk4 = 4;
  obj->unk6 = 1;
  obj->unk0 = (void *) new_var;
  obj->unk30 = 0;
  obj->unk14 = 0;
  list = func_002FA108(1);
  obj->unk18 = *list;
  *list = obj;
}
