typedef struct __attribute__((packed,aligned(4))){s32 v[5];} E20; void func_0013A3F8(void*);
void func_0013AB90(u8*arg0,s32 arg1,u8*arg2){s32 n=*(s32*)(arg2+0xC);s32 end=arg1+n;s32 i;E20*src;E20*dst;while(*(s32*)(arg0+4)<end)func_0013A3F8(arg0);if(n>0){src=*(E20**)arg2;dst=(E20*)(arg1*0x14+*(u32*)arg0);for(i=n;i!=0;i--){*dst=*src;dst++;src++;}}*(s32*)(arg0+0xC)=end;}
