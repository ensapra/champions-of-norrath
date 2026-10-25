typedef struct 
{
  u8 a;
  u8 b;
  s16 id;
  s32 val;
  u8 rest[0x188];
} Msg;
typedef struct 
{
  u8 pad[0x5588];
  s32 f5588;
  s32 f558C;
  u8 pad2[0x55C8 - 0x5590];
  s32 f55C8;
  u8 pad3[4];
  s32 f55D0;
  u8 pad4[0x5C1E - 0x55D4];
  u8 f5C1E;
  u8 pad5[0x5DB0 - 0x5C1F];
} Slot;
extern Slot D_00408600[];
extern u8 D_007CC5C8[];
s32 D_00486A88;
void func_00134F68(s32, void *, s32);
void func_001A1C98();
void func_001B01B0(s32, void *, s32);
void func_001B1AA0(s32 id, s32 v)
{
  Msg m;
  Slot *s = &D_00408600[id];
  if (v == s->f55C8)
  {
    s->f55C8 = 0;
    s->f5588 = 0;
    m.a = 1;
    m.b = 0;
    m.id = id;
    m.val = s->f55D0;
    func_00134F68(D_00486A88, &m, 8);
    s->f55D0 = 0;
    s->f558C = 0;
  }
  else
    if (v == s->f55D0)
  {
    s->f5C1E = 0;
    s->f558C = 0;
 do { s->f55D0 = 0; func_001A1C98(); } while (0);
    func_001B01B0(id, D_007CC5C8 + (id * 0x108), 0);
  }
}
