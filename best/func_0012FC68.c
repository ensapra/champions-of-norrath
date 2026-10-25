extern void func_00110D10(void*); extern void func_00114948(int,int,int,int,void*,int); extern int func_00118140(void*,int,void*,void*,void*); extern int func_00118160(void*,void*); extern int func_0011BA18(int,void*,void*); extern void func_0012F7F0(void); extern void func_0013CB70(void); extern void func_0013CBA0(void),func_0013CC88(void),func_0013CEF0(void),func_0012F910(void),func_0012F930(void),func_0012FC40(void);
extern int D_010CD474; extern int D_001C4EA0; extern int D_001C6834,D_001C6838; extern int D_001BAC84,D_001BB6C4;
void func_0012FC68(s32 a,void*b){int c;int code=0;void*p=0;
if(a<0){if((u32)(a+15)<2||a==-1)func_00110D10(func_0012FC40);return;}
if(D_010CD474==0){if(D_001C4EA0==3){c=D_001C6838;if(c==10&&D_001C6834==c)code=0x55;else if(c>=30)code=0x57;else if(D_001C6834>=10)code=0x59;else goto rest;}else if(D_001C6838>=4)code=0x56;else if(D_001C6834>=6)code=0x58;else goto rest;goto popup;}
if(D_010CD474==1){if(D_001C6838==0&&D_001C6834==0){if((D_001BAC84&6)==6)code=0x5d;else if(D_001C4EA0!=3)code=0x5c;else code=0x5e;goto popup;}goto rest;}
if(D_010CD474==2){if(D_001C6838==0&&D_001C6834==0){code=D_001C4EA0!=3?0x5f:0x60;goto popup;}goto rest;}
if(D_001C6834==0){code=D_001C4EA0!=3?0x5f:0x60;goto popup;}
rest: if(D_010CD474==3){func_0012F7F0();return;}func_0013CB70();func_00118140(&a,1,func_0013CBA0,func_0013CC88,func_0013CEF0);func_00118160(&a,func_0012F930);return;
popup: c=func_0011BA18(code,b,(void*)0x010CD474);func_00114948(2,500,250,c,func_0012F910,D_001BB6C4);}
