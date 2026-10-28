extern void *func_002D1878(void);
void func_002D1D18(void *arg0) {
 void *p=func_002D1878();
 if (*(s16*)((u8*)p+6)==1) {
  *(volatile s64*)0x12000000=*(s64*)((u8*)arg0+0);
  *(volatile s64*)0x12000070=*(s64*)((u8*)arg0+0x10);
  *(volatile s64*)0x12000080=*(s64*)((u8*)arg0+0x18);
  *(volatile s64*)0x120000C0=*(s64*)((u8*)arg0+0x20);
 } else {
  *(volatile s64*)0x12000000=*(s64*)((u8*)arg0+0);
  *(volatile s64*)0x12000020=*(s64*)((u8*)arg0+8);
  *(volatile s64*)0x12000090=*(s64*)((u8*)arg0+0x10);
  *(volatile s64*)0x120000A0=*(s64*)((u8*)arg0+0x18);
  *(volatile s64*)0x120000E0=*(s64*)((u8*)arg0+0x20);
 }
}
