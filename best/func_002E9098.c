typedef struct { u8 pad[0x24]; s32 ready; } PacketA;
typedef struct { u8 pad0[8]; s32 version; u8 pad1[0x14]; s32 size; } PacketB;
s32 CreateSema_2(void*);
s32 func_001449A8(s32, void*);
s32 func_00144AC0(s32,s32);
void func_002D5B18(u32,void*);
void func_002D7908(s32);
s32 func_002D80A0(void*,s32,s32);
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_003021B0(void*,s32,s32);
void func_00302560(void*,...);
extern u32 D_00447F68[],D_00447F6C[],D_00447F70[],D_00447F74[],D_00447F78[],D_00447F7C[],D_00447F80[],D_00447F84[],D_00447F88[];
extern char D_0047C0C8[],D_0047C0F8[],D_0047C140[],D_0047C160[],D_0047C180[],D_0047C198[],D_0047C1C0[],D_0047C208[],D_0047C220[],D_0047C250[],D_0047C278[];
extern u8 D_008EA780[],D_008EA7C0[],D_008EA938[],D_008EA940[],D_FFFF[];
s32 func_002E9098(s32 (*arg0)(s32,void*), s32 (*arg1)(s32,s32)) {
 s32 alloc, temp, version, count;
 PacketA *a=(PacketA*)D_008EA780;
 PacketB *b=(PacketB*)D_008EA7C0;
 void *block;
 func_002D7908(0);
 alloc=(s32)((u32)D_008EA940|0x20000000);
 D_00447F78[0]=alloc;
 *(s32*)alloc=0;
 *(s32*)D_008EA938=0;
 for (;;) {
  if (func_002D80A0(a,0x50494C42,0)<0) {
   func_00302560(D_0047C140); func_00302560(D_0047C160);
   for(;;) {}
  }
  if (a->ready==0) {
   temp=0;
   while(temp!=-1) temp--;
   continue;
  }
  b->version=0;
  if (func_002D8270(a,0x10,0,b,0x20,b,0x30,0,0)!=0) {
   func_00302560(D_0047C180); func_00302560(D_0047C160);
   for(;;) {}
  }
  version=b->version;
  if(version!=0x01090400) {
   if ((version&0xFFFF0000)==0x01090000) {
    func_00302560(D_0047C1C0);
    func_00302560(D_0047C0C8,1,9,4);
    func_00302560(D_0047C0F8,version>>24,(version>>16)&0xFF,(version>>8)&0xFF);
    func_00302560(D_0047C208);
   } else {
    func_00302560(D_0047C198);
    func_00302560(D_0047C0C8,1,9,4);
    func_00302560(D_0047C0F8,version>>24,(version>>16)&0xFF,(version>>8)&0xFF);
    func_00302560(D_0047C160);
    for(;;) {}
   }
   for(;;) {}
  }
  if(arg0==0) arg0=func_001449A8;
  if(arg1==0) arg1=func_00144AC0;
  alloc=D_00447F70[0];
  D_00447F80[0]=(u32)arg0;
  D_00447F84[0]=(u32)arg1;
  if(alloc!=0) {
   if(D_00447F68[0]!=b->size) { arg1(alloc,alloc); D_00447F70[0]=0; alloc=0; }
   if(alloc!=0) goto have_buffer;
  }
  if(b->size<0x171) {
   D_00447F74[0]=(u32)b;
   D_00447F68[0]=0x170;
   D_00447F6C[0]=0x140;
   goto have_buffer;
  }
  count=((b->size+0x3F)&~0x3F)+0x40;
  temp=arg0(count,(void*)b);
  D_00447F70[0]=temp;
  if(temp==0) { func_00302560(D_0047C220,count); func_00302560(D_0047C160); for(;;){} }
  D_00447F74[0]=(temp+0x3F)&~0x3F;
  D_00447F68[0]=b->size;
  D_00447F6C[0]=b->size-0x30;
have_buffer:
  temp=D_00447F7C[0];
  if(temp==-1) {
   u8 sema[0x18];
   func_003021B0(sema,0,0x18);
   *(s32*)(sema+0x14)=1; *(s32*)(sema+0x18)=1; *(s32*)(sema+0x24)=0;
   temp=CreateSema_2(sema);
   D_00447F7C[0]=temp;
   if(temp==-1) { func_00302560(D_0047C250); func_00302560(D_0047C160); for(;;){} }
  }
  block=D_008EA940;
  func_002D5B18((u32)block,(u8*)block+0x3F);
  b->size=(u32)block;
  func_002D8270(a,0x17,0,b,0x30,b,0,0,0);
  func_00302560(D_0047C278,D_00447F88[0],D_00447F6C[0]);
  return 0;
 }
}
