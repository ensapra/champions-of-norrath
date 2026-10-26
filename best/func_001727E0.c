volatile s32 D_00486978; s32 D_0048697C; extern volatile s32 D_006E9180[];
void func_001727E0(s32 a,s32 b) {
 s32 next=(D_00486978+1)&63;
 if(next!=D_0048697C) {
  *(volatile s32*)((char*)D_006E9180+D_00486978*8)=a;
  *(volatile s32*)((char*)D_006E9180+D_00486978*8+4)=b;
  D_00486978=next;
 }
}
