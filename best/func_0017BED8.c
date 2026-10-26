extern char func_001CE218[];
s32 func_0017BED8(void *dst,const u8 *name,s32 value) {
 volatile u8 frame[0xB0]; volatile s32 saved=value;
 u8 *msg=(u8*)0x010ECCC0+0x24; u32 i=0; s32 sema;
 frame[0]=0; func_0017BC30(dst,name,value);
 sema=*(s32*)(func_001CE218+0x22D0);
 if(PollSema(sema)!=sema) return 0;
 ReferThreadStatus(*(s32*)0x010ECC58,(void*)0x010ECC60);
 if(func_0017C418()!=0) goto done;
 func_001AFF48();
 while(i<0x100 && (msg[i]=name[i])!=0) i++;
 if(i==0x100) msg[0xff]=0;
 if(*(s32*)(func_001CE218+0x22B8)>0) func_001AF710((void*)0x004CC4C0,(void*)0x010ECCE4);
 done: SignalSema(sema); return saved;
}
