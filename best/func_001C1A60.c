extern char D_00408600[];
s32 D_00484538;
s32 func_003044FC(void *, void *);
void func_00304640(void *, void *);
void func_001C1A60(void *a, void *b) {
 s32 n=0, i, count;
 char *p=D_00408600;
 if(D_00484538<=0) return;
 do {
   count=*(s32*)(p+0x5568);
   if(count>=0x40) return;
   for(i=0;i<count;i++)
     if(func_003044FC(p+0x4568+i*0x40,a)==0) return;
   func_00304640(p+0x4568+count*0x40,a);
   func_00304640(p+0x4588+count*0x40,b);
   *(s32*)(p+0x5568)=count+1;
   p+=0x5DB0;
   n++;
 } while(n<D_00484538);
}
